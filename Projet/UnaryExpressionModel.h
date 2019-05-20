#ifndef UNARYEXPRESSIONMODEL_H
#define UNARYEXPRESSIONMODEL_H

#include "NullExpressionException.h"
#include "Expression.h"
#include "UnaryExpression.h"

namespace Model {
	template <class T>
	class UnaryExpressionModel : public UnaryExpression<T>, public Expression<T>
	{
	public:
		UnaryExpressionModel() {};
		UnaryExpressionModel(UnaryExpression<T>* operateur, Expression<T>* operande) : operateur(operateur), operande(operande) {};
		virtual ~UnaryExpressionModel() {};

		virtual T evaluate() const;
		virtual T evaluate(Expression*) const;

	private:
		UnaryExpression<T>* operateur;
		Expression<T>* operande;
	};

	template <class T>
	T UnaryExpressionModel<T>::evaluate() const
	{
		if (operande == NULL)
			throw new NullExpressionException("operande null");

		return evaluate(operande);
	}

	template <class T>
	T UnaryExpressionModel<T>::evaluate(Expression<T>* o) const
	{
		if (operateur == NULL)
			throw new NullExpressionException("operateur null");

		return operateur->evaluate(o);
	}
}
#endif