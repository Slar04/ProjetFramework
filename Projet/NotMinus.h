#ifndef NOTMINUS_H
#define NOTMINUS_H

#include "UnaryExpression.h"
#include "Not.h"

namespace SemantiqueFloue {
	template <class T>
	class NotMinus : Not<T> {
	public:

		NotMinus() {}
		virtual ~NotMinus() {}
		virtual T evaluate(Model::Expression<T>*) const;

	};

	template<class T>
	T NotMinus<T>::evaluate(Model::Expression<T>* o) const {
		T m = -(o->evaluate());
		return m;
	}
}

#endif