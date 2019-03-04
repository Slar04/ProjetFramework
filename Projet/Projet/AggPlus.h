#ifndef AGGPLUS_H
#define AGGPLUS_H

#include "Agg.h"

template <class T>
class AggPlus : Agg<T> {
public:

	AggPlus() {}
	virtual ~AggPlus() {}
	virtual T& evaluate(Expression&, Expression&);
};

#endif