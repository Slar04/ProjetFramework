#ifndef UNARYEXPRESSION_H
#define UNARYEXPRESSION_H

#include "pch.h"
#include "Expression.h"

template <class T>
class UnaryExpression {
public:
	virtual T evaluate(Expression&) const = 0;
};

#endif
