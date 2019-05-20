#ifndef UNARYEXPRESSION_H
#define UNARYEXPRESSION_H

#include "Expression.h"
namespace Model {
	
	template <class T>
	class UnaryExpression {
	public:
		UnaryExpression() {};
		virtual ~UnaryExpression() {};

		virtual T evaluate(Expression<T>*) const = 0;
	};
}
#endif
