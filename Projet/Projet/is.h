#ifndef IS_H
#define IS_H

#include "UnaryExpression.h"

template <class T>
class is : UnaryExpression<T>{
public:
	virtual T evaluate();
};

#endif