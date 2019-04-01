#ifndef AGGPLUS_H
#define AGGPLUS_H

#include "Agg.h"

namespace SemantiqueFloue{

	template <class T>
	class AggPlus : Agg<T> {
	public:

		AggPlus() {}
		virtual ~AggPlus() {}
		virtual T evaluate(Model::Expression<T>*, Model::Expression<T>*) const;
	};

	template <class T>
	T AggPlus<T>::evaluate(Model::Expression<T>* left, Model::Expression<T>* right) const{
		T l = left->Evaluate();
		T r = right->Evaluate();
		return l + r;
	}
}
#endif