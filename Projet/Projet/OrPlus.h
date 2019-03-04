#ifndef ORPLUS_H
#define ORPLUS_H

#include "Or.h"

template <class T>
class OrPlus : OR<T> {
public:

	OrPlus() {}
	virtual ~OrPlus() {}
	virtual T& evaluate(Expression&, Expression&);
};

#endif