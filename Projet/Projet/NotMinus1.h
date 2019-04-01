#ifndef NOTMINUS1_H
#define NOTMINUS1_H
#include "UnaryExpression.h"
#include "Not.h"

namespace fuzzy {
	template <class T>
	class NotMinus1 : Not<T> {
	public:

		NotMinus1() {}
		virtual ~NotMinus1() {}
		virtual T core::evaluate(Expression<T>*);
		T NotMinus<T> : evaluate(core::Expression<T>* o) 
		{
			T m = -(o->evaluate());
			return m;
		}
	};
}
#endif