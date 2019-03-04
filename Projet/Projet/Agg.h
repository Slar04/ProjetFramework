#ifndef AGG_H
#define AGG_H

#include "BynaryExpression.h"

template <class T>
class Agg : BynaryExpression<T> {
public:
	virtual T& evaluate();
};

#endif