#ifndef SUGENOTHEN_H
#define SUGENOTHEN_H

#include "Then.h"

namespace SemantiqueFloue {

	template <class T>
	class SugenoThen : Then<T> {
	public:

		SugenoThen():premiseValue(0) {}
		virtual ~SugenoThen() {}
		virtual T evaluate(Model::Expression<T>*, Model::Expression<T>*) const;
		virtual T getPV() const;

	private:
		T premiseValue;
	};

	template <class T>
	T SugenoThen<T>::evaluate(Model::Expression<T>* left, Model::Expression<T>* right) const {

		premiseValue = left->evaluate();

		return premiseValue * right->evaluate();
	}

	template <class T>
	T SugenoThen<T>::getPV()const {
		return premiseValue;
	}

}
#endif
