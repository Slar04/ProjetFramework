#ifndef ORMAX_H
#define ORMAX_H

#include "Or.h"

namespace fuzzy {
	template <class T>
	class OrMax : OR<T> {
	public:

		OrMax() {}
		virtual ~OrMax() {}
		virtual T& evaluate(core::Expression<T>*l, core::Expression<T>*r) const;
	};

	

}
#endif