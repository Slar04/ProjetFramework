#ifndef ANDMIN_H
#define ANDMIN_H

#include "mainAnd.h"

namespace SemantiqueFloue {

	template <class T>
	class AndMin : And<T> {
	public:

		AndMin() {}
		virtual ~AndMin() {}
		virtual T evaluate(Model::Expression<T>*, Model::Expression<T>*)const;
	};

	template <class T>
	T AndMin<T>::evaluate(Model::Expression<T> *left, Model::Expression<T> *right) const {

		T l = left->evaluate();
		T r = right->evaluate();

		return (l <= r) ? l : r;

	}
}
#endif