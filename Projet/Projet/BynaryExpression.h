#ifndef BYNARYEXPRESSION_H
#define BYNARYEXPRESSION_H

//#include "pch.h"
#include "Expression.h"

<<<<<<< HEAD
namespace Model{
=======
namespace core {
>>>>>>> 97abd2187b0bd8b04d4934d94972b9eda174aeef
	template <class T>
	class BynaryExpression {
	public:
		BinaryExpression() {};
		virtual T evaluate(Expression<T>*, Expression<T>*) const = 0;
	};
}
#endif