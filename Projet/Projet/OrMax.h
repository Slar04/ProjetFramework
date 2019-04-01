#ifndef ORMAX_H
#define ORMAX_H

#include "mainAnd.h"
namespace fuzzy
{
	template <class T>
	class OrMax : public OR<T> {
	public:

		OrMax() {}
		virtual ~OrMax() {}
		virtual T& evaluate(core::Expression<T>*, core::Expression<T>*);
		template <class T>
		T OrMax<T>::evaluate(core::Expression<T>* l, core::Expression<T>* r)
		{
			T lv = l->evaluate();
			T rv = r->evaluate();
			return (lv >= rv) ? lv : rv;
		}
	};
}
#endif