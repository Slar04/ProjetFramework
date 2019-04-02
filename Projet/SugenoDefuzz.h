#ifndef SUGENODEFUZZ_H
#define SUGENODEFUZZ_H
#include "NaryExpression.h"

namespace SemantiqueFloue {
	template <class T>
	class SugenoDefuzz : Model::NaryExpression<T> {
	public:

		SugenoDefuzz() {}
		virtual ~SugenoDefuzz() {}
		virtual T evaluate(Model::Expression<T>*) const;
		//virtual T evaluate(std::vector<const core::Expression<T>*>* operands) const;
	};

	template <class T>
	T SugenoDefuzz<T>::evaluate(Model::Expression<T>*) const{
	//T SugenoDefuzz<T>::evaluate(std::vector<const core::Expression<T>*>* operands) const {
		
	}
}
#endif