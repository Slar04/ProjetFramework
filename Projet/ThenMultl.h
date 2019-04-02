#ifndef THENMULT_H
#define THENMULT_H

#include "Then.h"

namespace SemantiqueFloue {
	template <class T>
	class ThenMult :public Then<T> {
	public:

		ThenMult() {}
		virtual ~ThenMult() {}
		virtual T evaluate(Model::Expression<T>* , Model::Expression<T>* ) const;
	};

	template <class T>
	T ThenMult<T>::evaluate(Model::Expression<T>* left, Model::Expression<T>* right) const {
		T l = left->Evaluate();
		T r = right->Evaluate();
		return l * r;
	}
}

#endif
