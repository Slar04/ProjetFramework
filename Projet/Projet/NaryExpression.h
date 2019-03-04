#ifndef NARYEXPRESSION_H
#define NARYEXPRESSION_H
#include "pch.h"
#include "Expression.h"

template <class T>
class NaryExpression {
public:
	virtual T& evaluate(Expression&) const = 0;
};
#endif