#ifndef NARYEXPRESSION_H
#define NARYEXPRESSION_H
#include "pch.h"
#include "Expression.h"

namespace Model {
	template <class T>
	class NaryExpression {
	public:
		virtual T evaluate(Expression<T>*) const = 0;
	};
}
#endif