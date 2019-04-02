#ifndef ORMAX_H
#define ORMAX_H

#include "And.h"
#include "Or.h"

namespace SemantiqueFloue {
	template <class T>
	class OrMax : OR<T> {
	public:
		virtual ~OrMax() {}
		virtual T evaluate(Model::Expression<T>*, Model::Expression<T>*) const;

	};

	template <class T>
	T OrMax<T>::evaluate(Model::Expression<T>* left, Model::Expression<T>* right) const {
		T l = left->evaluate();
		T r = right->evaluate();
		return (l >= r) ? l : r;
	}
}
#endif