#ifndef AGGMAX_H
#define AGGMAX_H

#include "Agg.h"
namespace fuzzy
{
	template <class T>
	class AggMax : Agg<T> {
	public:

		AggMax() {}
		virtual ~AggMax() {}
		virtual T& evaluate(core::Expression<T>*, core::Expression<T>*);
		template <class T>
		T AggMax<T>::evaluate(core::Expression<T>* l, core::Expression<T>* r)
		{
			T lv = l->evaluate();
			T rv = r->evaluate();
			return (lv >= rv) ? lv : rv;
		}
	};
}
#endif