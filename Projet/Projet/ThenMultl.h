#ifndef THENMULT_H
#define THENMULT_H

#include "Then.h"

template <class T>
class ThenMult : Then<T> {
public:

	ThenMult() {}
	virtual ~ThenMult() {}
	virtual T& evaluate(Expression&, Expression&);
};

#endif
