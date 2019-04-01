#ifndef AGGMAX_H
#define AGGMAX_H

#include "Agg.h"

namespace SemantiqueFloue {
	template <class T>
	class AggMax: Agg<T> {
	public:

		AggMax() {}
		virtual ~AggMax() {}
		virtual T evaluate(Model::Expression<T>*, Model::Expression<T>*) const;

		template <class T>
		T AggMax<T>::evaluate(Model::Expression<T>* left, Model::Expression<T>* right) {
			T l = left->evaluate();
			T r = right->evaluate();
			return (l >= r) ? l : r;
		}
	};
}
#endif