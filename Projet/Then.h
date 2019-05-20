#ifndef THEN_H
#define THEN_H

#include "BinaryExpression.h"

namespace SemantiqueFloue {

	template <class T>
	class Then : Model::BinaryExpression<T> {
	public:
		virtual ~Then() {}
		//virtual T evaluate();
	};
}
#endif