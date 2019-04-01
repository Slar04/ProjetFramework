#ifndef ISTRIANGLE_H
#define ISTRIANGLE_H

#include "is.h"

namespace fuzzy {
	template <class T>
	class isTriangle : is<T> {
	public:
		isTriangle() {};
<<<<<<< HEAD
		isTriangle(min, mid, max):min(min), mid(mid), max(max) {}
		virtual T core::evaluate(Expression&);
		T isTriangle<T> : evaluate(Expression<T>* v) 
=======
		isTriangle(min, mid, max) :min(min), mid(mid), max(max) {}
		virtual T core::evaluate(Expression&);
		T isTriangle<T> : evaluate(Expression<T>* v)
>>>>>>> 97abd2187b0bd8b04d4934d94972b9eda174aeef
		{
			T val = v->evaluate();
			if (val <= min || val >= max)
				return 0;
<<<<<<< HEAD
			return val<=mid ? (val-min)/(mid-min):(max - val)/(max - mid);
=======
			return val <= mid ? (val - min) / (mid - min) : (max - val) / (max - mid);
>>>>>>> 97abd2187b0bd8b04d4934d94972b9eda174aeef

		}
	private:
		T min, mid, max;
	};
}
#endif