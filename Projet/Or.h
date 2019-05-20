#ifndef OR_H
#define OR_H

#include "BinaryExpression.h"

namespace SemantiqueFloue {
	template <class T>
	class Or : Model::BinaryExpression<T> {
	public:
		virtual Or() {};
		virtual ~Or() {};
	};
}
#endif
