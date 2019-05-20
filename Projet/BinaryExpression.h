#ifndef BINARYEXPRESSION_H
#define BINARYEXPRESSION_H

//#include "pch.h"
#include "Expression.h"

namespace Model {
	template <class T>
	class BinaryExpression {
	public:
		BinaryExpression() {};
		virtual ~BinaryExpression() {};

		virtual T evaluate(Expression<T>*, Expression<T>*) const = 0;
	};
}
#endif