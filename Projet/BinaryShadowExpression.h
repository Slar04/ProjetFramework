#ifndef BINARYSHADOWEXPRESSION_H
#define BINARYSHADOWEXPRESSION_H

#include "BinaryExpression.h"

namespace Model {
	template <class T>
	class BinaryShadowExpression : public BinaryExpression<T>
	{
	public:
		BinaryShadowExpression() {};
		BinaryShadowExpression(BinaryExpression<T>* target) :target(target) {};
		virtual ~BinaryShadowExpression() {};

		void SetTarget(BinaryExpression<T>*);
		virtual BinaryExpression<T>* GetTarget();
		virtual T evaluate(Expression<T>*, Expression<T>*) const;

	private:
		BinaryExpression<T>* target;
	};

	template <class T>
	void BinaryShadowExpression<T>::SetTarget(BinaryExpression<T>* _target)
	{
		target = _target;
	}

	template <class T>
	BinaryExpression<T>* BinaryShadowExpression<T>::GetTarget()
	{
		return target;
	}

	template <class T>
	T BinaryShadowExpression<T>::evaluate(Expression<T>* l, Expression<T>* r) const
	{
		if (target == NULL)
			throw new std::exception("target null");

		return target->Evaluate(l, r);
	}
}
#endif