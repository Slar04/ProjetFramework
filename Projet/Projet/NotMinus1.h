#ifndef NOTMINUS1_H
#define NOTMINUS1_H

#include "Not.h"

template <class T>
class NotMinus1 : Not<T> {
public:

	NotMinus1() {}
	~NotMinus1() {}
	virtual T evaluate(Expression&);
};

#endif