#ifndef BYNARYEXPRESSION_H
#define BYNARYEXPRESSION_H
#include "pch.h"
#include "Expression.h"

template <class T>
class BynaryExpression {
public:
	virtual T& evaluate(Expression&, Expression&) const=0;
};
#endif