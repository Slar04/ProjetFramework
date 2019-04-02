#ifndef AGG_H
#define AGG_H

#include "BynaryExpression.h"
namespace SemantiqueFloue {
	template <class T>
	class Agg : Model::BynaryExpression<T> {
	public:
		virtual ~Agg() {}

		virtual T evaluate();
	};
}
#endif