#ifndef MAINAND_H
#define MAINAND_H

#include "BynaryExpression.h"

namespace SemantiqueFloue {
	template <class T>
	class And : Model::BynaryExpression<T> {
	public:
		virtual ~And(){}

		virtual T& evaluate();
	};
}
#endif