#ifndef IS_H
#define IS_H

#include "UnaryExpression.h"
namespace fuzzy {
	template <class T>
	class is : public::core::UnaryExpression<T> {
	public:
		virtual ~Is() {};
	};
}
#endif