#ifndef IS_H
#define IS_H

#include "UnaryExpression.h"
namespace SemantiqueFloue {
	template <class T>
	class Is : public Model::UnaryExpression<T> {
	public:
		virtual ~Is() {};
	};
}
#endif