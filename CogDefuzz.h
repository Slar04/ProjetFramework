#ifndef COGDEFUZZ_H
#define COGDEFUZZ_H

#include "And.h"
namespace SemantiqueFloue {

	template <class T>
	class CogDefuzz : And<T> {
	public:
		CogDefuzz() {}
		virtual ~CogDefuzz() {}
		virtual T evaluate(Model::Expression<T>*, Model::Expression<T>*) const;
	};

	template <class T>
	T CogDefuzz<T>::evaluate(Model::Expression<T>* left, Model::Expression<T>* right) const {

		T l = left->evaluate();
		T r = right->evaluate();


		
	}

}
#endif