#ifndef NOT_H
#define NOT_H

#include "UnaryExpression.h"

template <class T>
class Not : UnaryExpression<T> {
public:
	virtual T evaluate();
};

#endif