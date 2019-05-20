#ifndef NARYSHADOWEXPRESSION_H
#define NARYSHADOWEXPRESSION_H

#include "Expression.h"
#include "NaryExpression.h"
#include "NullExpressionException.h"
#include <vector>

namespace Model
{
	template <class T>
	class NaryShadowExpression : public NaryExpression<T>
	{
	public:
		NaryShadowExpression() {};
		NaryShadowExpression(NaryExpression<T>* t) :target(t) {};
		virtual ~NaryShadowExpression() {};

		void SetTarget(NaryExpression<T>*);
		virtual NaryExpression<T>* GetTarget();
		T evaluate(std::vector<const Expression<T>*>* operands) const;

	private:
		NaryExpression<T>* target;
	};

	template <class T>
	void NaryShadowExpression<T>::SetTarget(NaryExpression<T>* t)
	{
		target = t;
	}

	template <class T>
	NaryExpression<T>* NaryShadowExpression<T>::GetTarget()
	{
		return target;
	}

	template <class T>
	T NaryShadowExpression<T>::evaluate(std::vector<const Expression<T>*>* operands) const
	{
		if (target == NULL)
			throw new NullExpressionException("target null");

		return target->evaluate(operands);
	}

}

#endif