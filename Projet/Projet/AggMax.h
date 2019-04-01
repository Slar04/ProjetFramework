#ifndef AGGMAX_H
#define AGGMAX_H

#include "Agg.h"
namespace fuzzy
{
	template <class T>
	class AggMax : Agg<T> {
	public:

<<<<<<< HEAD
namespace SemantiqueFloue {
	template <class T>
	class AggMax: Agg<T> {
	public:

		AggMax() {}
		virtual ~AggMax() {}
		virtual T evaluate(Model::Expression<T>*, Model::Expression<T>*) const;

		template <class T>
		T AggMax<T>::evaluate(Model::Expression<T>* left, Model::Expression<T>* right) {
			T l = left->evaluate();
			T r = right->evaluate();
			return (l >= r) ? l : r;
=======
		AggMax() {}
		virtual ~AggMax() {}
		virtual T& evaluate(core::Expression<T>*, core::Expression<T>*);
		template <class T>
		T AggMax<T>::evaluate(core::Expression<T>* l, core::Expression<T>* r)
		{
			T lv = l->evaluate();
			T rv = r->evaluate();
			return (lv >= rv) ? lv : rv;
>>>>>>> 97abd2187b0bd8b04d4934d94972b9eda174aeef
		}
	};
}
#endif