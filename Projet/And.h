#ifndef AND_H
#define AND_H

#include "BinaryExpression.h"

namespace SemantiqueFloue {
	template <class T>
	class And : Model::BinaryExpression<T> {
	public:
		virtual ~And(){}

	};
}
#endif