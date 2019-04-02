#ifndef NOT_H
#define NOT_H

#include "UnaryExpression.h"

namespace SemantiqueFloue {
	template <class T>
	class Not : public Model::UnaryExpression<T> {
	public:
		virtual ~Not() {};
	};
}
#endif