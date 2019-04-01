#ifndef UNARYEXPRESSIONMODEL_H
#define UNARYEXPRESSIONMODEL_H

#include "pch.h"
#include "Expression.h"
namespace core {
	template <class T>
	class UnaryExpressionModel {
	public:
		virtual T evaluate(Expression<T>*) const = 0;
	};
}
#endif