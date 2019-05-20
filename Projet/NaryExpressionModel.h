#ifndef NARYEXPRESSIONMODEL_H
#define NARYEXPRESSIONMODEL_H

#include "NullExpressionException.h"
#include <iostream>
#include <vector>
#include "Expression.h"
#include "NaryExpression.h"

namespace Model {
	template <class T>
	class NaryExpressionModel : public NaryExpression<T>, public Expression<T> {
	public:
		NaryExpressionModel() {};
		NaryExpressionModel(NaryExpression<T>* operateur, std::vector<const Expression<T>*>* operandes) :operateur(operateur), operandes(operandes) {};
		virtual ~NaryExpressionModel() {};

		virtual T evaluate() const;
		virtual T evaluate(std::vector<const Expression<T>*>*) const;

	private:
		NaryExpression<T>* operateur;
		std::vector<const Expression<T>*>* operandes;
	};

	template <class T>
	T NaryExpressionModel<T>::evaluate() const {
		if (operandes->empty())
			throw new NullExpressionException("operandes vector empty");

		return evaluate(operandes);
	}

	template <class T>
	T NaryExpressionModel<T>::evaluate(std::vector<const Expression<T>*>* operands) const {
		if (operateur == NULL)
			throw new NullExpressionException("ope null");

		return operateur->evaluate(operands);
	}
}

#endif