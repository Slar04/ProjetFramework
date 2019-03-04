#ifndef ORMAX_H
#define ORMAX_H

#include "Or.h"

template <class T>
class OrMax : OR<T> {
public:

	OrMax(){}
	virtual ~OrMax(){}
	virtual T& evaluate(Expression&, Expression&);
};

#endif