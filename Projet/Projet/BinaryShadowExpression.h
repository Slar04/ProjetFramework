#ifndef BINARYSHADOWEXPRESSION_H
#define BINARYSHADOWEXPRESSION_H

#include "Expression.h"

namespace Model {
	template <class T>
	class BinaryShadowExpression : public BinaryExpression<T>
	{
		public:
			T evaluate(Expression<T>*, Expression<T>*) const = 0;

}

#endif