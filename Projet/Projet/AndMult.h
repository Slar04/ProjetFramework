#ifndef ANDMULT_H
#define ANDMULT_H

#include "mainAnd.h"
namespace SemantiqueFloue {
	template <class T>
	class AndMult :public And<T> {
	public:

		AndMult() {};
		virtual ~AndMult() {};
		virtual T evaluate(Model::Expression<T>*, Model::Expression<T>*) const;
	};

	template <class T>
	T AndMult<T>::evaluate(Model::Expression<T>* left, Model::Expression<T>* right) const{
		T l = left->evaluate();
		T r = right->evaluate();
		return l * r;
	}
}
#endif