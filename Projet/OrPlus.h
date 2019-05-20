#ifndef ORPLUS_H
#define ORPLUS_H

#include "Or.h"

namespace SemantiqueFloue {
	template <class T>
	class OrPlus : public OR<T> {
	public:
		virtual ~OrPlus() {}
		virtual T evaluate(Model::Expression<T>*, Model::Expression<T>*) const;
	};

	template<class T>
	T OrPlus<T>::evaluate(Model::Expression<T> *left, Model::Expression<T> *right) const {
		T l = left->evaluate();
		T r = right->evaluate();

		return (l + r < 1) ? l + r : 1;
	}
}
#endif