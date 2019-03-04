#ifndef MAINAND_H
#define MAINAND_H

#include "BynaryExpression.h"

template <class T>
class And : BynaryExpression<T> {
public:
	virtual T& evaluate();
};

#endif