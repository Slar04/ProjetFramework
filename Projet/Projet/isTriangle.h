#ifndef ISTRIANGLE_H
#define ISTRIANGLE_H

#include "is.h"

template <class T>
class isTriangle : is<T> {
public:
	virtual T evaluate(Expression&);

private:
	T min, mid, max;
};

#endif