#ifndef ISTRIANGLE_H
#define ISTRIANGLE_H

#include "is.h"

namespace fuzzy {
	template <class T>
	class isTriangle : is<T> {
	public:
		isTriangle() {};
		isTriangle(min, mid, max):min(min), mid(mid), max(max) {}
		virtual T core::evaluate(Expression&);
		T isTriangle<T> : evaluate(Expression<T>* v) 
		{
			T val = v->evaluate();
			if (val <= min || val >= max)
				return 0;
			return val<=mid ? (val-min)/(mid-min):(max - val)/(max - mid);

		}
	private:
		T min, mid, max;
	};
}
#endif