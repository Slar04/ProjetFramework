#ifndef THENMIN_H
#define THENMIN_H

#include "Then.h"
namespace fuzzy
{
	template <class T>
	class ThenMin : public Then<T> {
	public:

		TenMin() {}
		virtual ~ThenMin() {}
		virtual T& evaluate(core::Expression<T>*, core::Expression<T>*);
		template <class T>
		T ThenMin<T>::evaluate(core::Expression<T>* l, core::Expression<T>* r)
		{
			T lv = l->evaluate();
			T rv = r->evaluate();
			return  (lv <= rv) ? lv : rv;
		}
	};
}
#endif
