#ifndef AND_H
#define AND_H

#include "BynaryExpression.h"

namespace SemantiqueFloue {
	template <class T>
	class And : Model::BynaryExpression<T> {
	public:
		virtual ~And(){}

		virtual T evaluate();
	};
}
#endif