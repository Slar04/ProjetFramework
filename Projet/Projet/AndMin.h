#ifndef ANDMIN_H
#define ANDMIN_H

#include "mainAnd.h"

namespace fuzzy {
	template <class T>
	class AndMin :public And<T> {
	public:

		AndMin() {}
		virtual ~AndMin() {}
		virtual T evaluate(core::Expression<T>* l, core::Expression<T>* r) const {

		}
	};

	template <class T>
	T AndMin<T>::evaluate(core::Expression<T>* l, core::Expression<T>* r) const {
		T lv = l->evaluate();
		T rv = r->evaluate();
		return (lv <= rv) ? lv : rv;
	}
}
#endif