#ifndef ANDMULT_H
#define ANDMULT_H

#include "mainAnd.h"
namespace fuzzy
{
	template <class T>
	class AndMult :public And<T> {
	public:

		AndMult() {};
		virtual ~AndMult() {};
		virtual T evaluate(core::Expression<T>*, core::Expression<T>*);
		template <class T>
		T AndMult<T>::evaluate(core::Expression<T>* l, core::Expression<T>* r)
		{
			T lv = l->evaluate();
			T rv = r->evaluate();
			return lv * rv;
		}

	};
}
#endif