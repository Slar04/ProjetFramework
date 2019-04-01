#ifndef SUGENOCONCLUSION_H
#define SUGENOCONCLUSION_H
#include "NaryExpression.h"

template <class T>
class SugenoConclusion : NaryExpression {
public:

	SugenoConclusion() {}
	virtual ~SugenoConclusion() {}
	virtual T& evaluate(Expression&);

private:
	T coeff[];
};
#endif