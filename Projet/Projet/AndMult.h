#ifndef ANDMULT_H
#define ANDMULT_H

#include "mainAnd.h"
<<<<<<< HEAD
namespace SemantiqueFloue {
=======
namespace fuzzy
{
>>>>>>> 97abd2187b0bd8b04d4934d94972b9eda174aeef
	template <class T>
	class AndMult :public And<T> {
	public:

		AndMult() {};
		virtual ~AndMult() {};
<<<<<<< HEAD
		virtual T evaluate(Model::Expression<T>*, Model::Expression<T>*) const;
	};

	template <class T>
	T AndMult<T>::evaluate(Model::Expression<T>* left, Model::Expression<T>* right) const{
		T l = left->evaluate();
		T r = right->evaluate();
		return l * r;
	}
=======
		virtual T evaluate(core::Expression<T>*, core::Expression<T>*);
		template <class T>
		T AndMult<T>::evaluate(core::Expression<T>* l, core::Expression<T>* r)
		{
			T lv = l->evaluate();
			T rv = r->evaluate();
			return lv * rv;
		}

	};
>>>>>>> 97abd2187b0bd8b04d4934d94972b9eda174aeef
}
#endif