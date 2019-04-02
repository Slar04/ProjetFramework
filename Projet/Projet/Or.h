#ifndef OR_H
#define OR_H

#include "BynaryExpression.h"

namespace SemantiqueFloue {
	template <class T>
	class OR : Model::BynaryExpression<T> {
	public:
		virtual ~Or() {};
		virtual T evaluate();
	};
}
#endif
