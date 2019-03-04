#ifndef THEN_H
#define THEN_H

#include "BynaryExpression.h"

template <class T>
class Then : BynaryExpression<T> {
public:
	virtual T& evaluate();
};

#endif