#ifndef ORPLUS_H
#define ORPLUS_H

#include "Or.h"

namespace fuzzy {
	template <class T>
	class OrPlus : public OR<T> {
	public:

		OrPlus() {}
		virtual ~OrPlus() {}
		virtual T evaluate(core::Expression<T>*l, core::Expression<T>*r) const;
	};

	template<class T>
	T OrPlus<T>::evaluate(core::Expression<T> *l, core::Expression<T> *r) const {
		T lv = l->evaluate();
		T rv = r->evaluate();

		return (lv + lr);
	}
}
#endif