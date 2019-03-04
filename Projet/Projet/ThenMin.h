#ifndef THENMIN_H
#define THENMIN_H

#include "Then.h"

template <class T>
class ThenMin : Then<T> {
public:

	TenMin() {}
	virtual ~ThenMin() {}
	virtual T& evaluate(Expression&, Expression&);
};

#endif
