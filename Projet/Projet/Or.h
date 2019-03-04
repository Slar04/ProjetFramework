#ifndef OR_H
#define OR_H

#include "BynaryExpression.h"

template <class T>
class OR : BynaryExpression<T> {
public:
	virtual T& evaluate();
};

#endif
