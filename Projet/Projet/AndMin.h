#ifndef ANDMIN_H
#define ANDMIN_H

#include "mainAnd.h"

<<<<<<< HEAD
namespace SemantiqueFloue {

	template <class T>
	class AndMin : And<T> {
	public:

		AndMin() {}
		virtual ~AndMin() {}
		virtual T evaluate(Model::Expression<T>*, Model::Expression<T>*)const;
	};

	template <class T>
	T AndMin<T>::evaluate(Model::Expression<T> *left, Model::Expression<T> *right) const {

		T l = left->evaluate();
		T r = right->evaluate();

		return (l <= r) ? l : r;

=======
namespace fuzzy {
	template <class T>
	class AndMin :public And<T> {
	public:

		AndMin() {}
		virtual ~AndMin() {}
		virtual T evaluate(core::Expression<T>* l, core::Expression<T>* r) const {

		}
	};

	template <class T>
	T AndMin<T>::evaluate(core::Expression<T>* l, core::Expression<T>* r) const {
		T lv = l->evaluate();
		T rv = r->evaluate();
		return (lv <= rv) ? lv : rv;
>>>>>>> 97abd2187b0bd8b04d4934d94972b9eda174aeef
	}
}
#endif