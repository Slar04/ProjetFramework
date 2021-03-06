#ifndef UNARYEXPRESSION_H
#define UNARYEXPRESSION_H

#include "pch.h"
#include "Expression.h"
namespace Model {
	
	template <class T>
	class UnaryExpression {
	public:
		virtual T evaluate(Expression<T>*) const = 0;
	};
}
#endif
