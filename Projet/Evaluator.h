#ifndef EVALUATOR_H
#define EVALUATOR_H

#include <iostream>
#include <vector>

namespace SemantiqueFloue {
	template <class T>
	class Evaluator {
	public:
		typedef std::pair<std::vector<T>, std::vector<T>> Shape;
		
		static Shape BuildShape(const T&, const T&, const T&, Model::ValueModel<T>*, Model::Expression<T>*);
		static std::ostream& PrintShape(const Shape&, std::ostream&) ;
	};

	template <class T>
	typename Evaluator<T>::Shape Evaluator<T>::BuildShape(const T& min, const T& max, const T& step, Model::ValueModel<T>* v, Model::Expression<T>* e) 
	{
		std::vector<T> x, y;
		T mem = v->evaluate();

		for (T i = min; i <= max; i += step)
		{
			v->SetValue(i);
			x.push_back(i);
			y.push_back(e->evaluate());
		}

		v->SetValue(mem);

		return Shape(x, y);
	}

	template <class T>
	typename std::ostream& Evaluator<T>::PrintShape(const Shape& s, std::ostream& os) 
	{
		for (std::vector<T>::const_iterator ity = s.second.begin(); ity != s.second.end(); ity++)
		{
			unsigned count = (unsigned)((*ity) * 10);

			while (count != 0)
			{
				os << "-";
				count--;
			}

			os << "*" << std::endl;
		}

		return os;
	}
}

#endif