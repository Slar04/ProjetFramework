#ifndef ANDMIN_H
#define ANDMIN_H

#include "mainAnd.h"

template <class T>
class AndMin : And<T> {
public:

	AndMin() {}
	virtual ~AndMin() {}
	virtual T evaluate(Expression&, Expression&); 
};

#endif