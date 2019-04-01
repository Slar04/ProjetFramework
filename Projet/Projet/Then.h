#ifndef THEN_H
#define THEN_H

#include "BynaryExpression.h"

namespace SemantiqueFloue {

	template <class T>
	class Then : Model::BynaryExpression<T> {
	public:
		virtual ~Then() {}
		virtual T& evaluate();
	};
}
#endif