#ifndef THENMIN_H
#define THENMIN_H

#include "Then.h"
namespace SemantiqueFloue {

	template <class T>
	class ThenMin : public Then<T> {
	public:

		TenMin() {}
		virtual ~ThenMin() {}
		virtual T evaluate(Model::Expression<T>*, Model::Expression<T>*);
		
	};

	template <class T>
	T ThenMin<T>::evaluate(Model::Expression<T>* left, Model::Expression<T>* right)
	{
		T l = left->evaluate();
		T r = right->evaluate();
		return  (l <= r) ? l : r;
	}
}
#endif
