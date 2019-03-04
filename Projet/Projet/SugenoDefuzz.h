#ifndef SUGENODEFUZZ_H
#define SUGENODEFUZZ_H
#include "NaryExpression.h"

template <class T>
class SugenoDefuzz : NaryExpression {
public:

	SugenoDefuzz() {}
	virtual ~SugenoDefuzz() {}
	virtual T& evaluate(Expression&);
};
#endif