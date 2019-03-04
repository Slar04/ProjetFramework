#ifndef SUGENOTHEN_H
#define SUGENOTHEN_H

#include "Then.h"

template <class T>
class SugenoThen : Then<T> {
public:

	SugenoThen() {}
	virtual ~SugenoThen() {}
	virtual T& evaluate(Expression&, Expression&);
	T premiseValue();

private:
	T premiseValue;
};

#endif
