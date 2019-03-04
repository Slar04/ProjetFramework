#ifndef AGGMAX_H
#define AGGMAX_H

#include "Agg.h"

template <class T>
class AggMax : Agg<T> {
public:

	AggMax() {}
	virtual ~AggMax() {}
	virtual T& evaluate(Expression&, Expression&);
};

#endif