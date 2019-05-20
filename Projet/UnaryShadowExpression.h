#ifndef UNARYSHADOWEXPRESSION_H
#define UNARYSHADOWEXPRESSION_H

#include "UnaryExpression.h"
#include "NullExpressionException.h"

namespace Model {
	template <class T>
	class UnaryShadowExpression : public UnaryExpression<T>	{
	public:
		UnaryShadowExpression() {};
		UnaryShadowExpression(UnaryExpression<T>* target) : target(target) {};
		virtual ~UnaryShadowExpression() {};

		void GetTarget();
		void SetTarget(UnaryExpression<T>*);
		T evaluate(Expression<T>*) const;

	private:
		UnaryExpression<T>* target;
	};

	template <class T>
	void UnaryShadowExpression<T>::GetTarget()
	{
		return target;
	}

	template <class T>
	void UnaryShadowExpression<T>::SetTarget(UnaryExpression<T>* _target)
	{
		target = _target;
	}

	template <class T>
	T UnaryShadowExpression<T>::evaluate(Expression<T>* o) const
	{
		if (target == NULL)
			throw new NullExpressionException("target null");

		return target->evaluate(o);
	}
}

#endif