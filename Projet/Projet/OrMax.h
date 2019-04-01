#ifndef ORMAX_H
#define ORMAX_H

<<<<<<< HEAD
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
=======
#include "Or.h"

namespace fuzzy {
	template <class T>
	class OrMax : OR<T> {
	public:

		OrMax() {}
		virtual ~OrMax() {}
		virtual T& evaluate(core::Expression<T>*l, core::Expression<T>*r) const;
	};

	

>>>>>>> 97abd2187b0bd8b04d4934d94972b9eda174aeef
}
#endif