#ifndef AGG_H
#define AGG_H

#include "BinaryExpression.h"

namespace SemantiqueFloue {
	template <class T>
	class Agg : Model::BinaryExpression<T> {
	public:
		virtual ~Agg() {}
	};
}
#endif