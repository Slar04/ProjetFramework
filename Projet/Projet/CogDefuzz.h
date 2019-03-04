#ifndef COGDEFUZZ_H
#define COGDEFUZZ_H

#include "mainAnd.h"

template <class T>
class CogDefuzz : And<T> {
public:

	CogDefuzz() {}
	virtual ~CogDefuzz() {}
	virtual T evaluate(Expression&, Expression&);
};

#endif