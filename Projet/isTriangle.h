#ifndef ISTRIANGLE_H
#define ISTRIANGLE_H

#include "is.h"

namespace SemantiqueFloue {
	template <class T>
	class isTriangle : is<T> {
	public:
		virtual ~isTriangle() {}
		virtual isTriangle() {}
		isTriangle(min, mid, max):min(min), mid(mid), max(max) {};

		virtual T evaluate(Model::Expression<T>* v);
		virtual T Model::evaluate(Model::Expression<T>*);
		
	private:
		T min, mid, max;
	};

	template <class T>
	T isTriangle<T>::evaluate(Model::Expression<T>* v){

		T val = v->evaluate();
		if (val <= min || val >= max)
			return 0;

		return val <= mid ? (val - min) / (mid - min) : (max - val) / (max - mid);
	}
}
#endif