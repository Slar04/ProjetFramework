#ifndef BYNARYEXPRESSION_H
#define BYNARYEXPRESSION_H

//#include "pch.h"
#include "Expression.h"

namespace Model{
	template <class T>
	class BynaryExpression {
	public:
		BinaryExpression() {};
		virtual T evaluate(Expression<T>*, Expression<T>*) const = 0;
	};
}
#endif