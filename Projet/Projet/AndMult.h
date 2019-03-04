#ifndef ANDMULT_H
#define ANDMULT_H

#include "mainAnd.h"

template <class T>
class AndMult : And<T> {
public:

	AndMult() {};
	virtual ~AndMult() {};
	virtual T evaluate(Expression&, Expression&);
};

#endif