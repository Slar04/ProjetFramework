#ifndef MANDANIDEFUZZ_H
#define MANDANIDEFUZZ_H

#include "mainAnd.h"

template <class T>
class MandaniDefuzz : And<T> {
public:

	MandaniDefuzz() {}
	virtual ~MandaniDefuzz() {}
	virtual T evaluate(Expression&, Expression&);
};

#endif