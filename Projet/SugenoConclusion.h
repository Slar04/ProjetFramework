#ifndef SUGENOCONCLUSION_H
#define SUGENOCONCLUSION_H
#include "NaryExpression.h"

namespace SemantiqueFloue {

	template <class T>
	class SugenoConclusion : Model::NaryExpression<T> {
	public:

		SugenoConclusion() {}
		virtual ~SugenoConclusion() {}
		virtual T evaluate(Model::Expression<T>*)const;
		//virtual T evaluate(std::vector<const core::Expression<T>*>* operands) const;


	private:
		T coeff[];
	};

	template <class T>
	//T SugenoConclusion<T>::evaluate(std::vector<const Model::Expression<T>*>* operands) const {
	T SugenoConclusion<T>::evaluate(Model::Expression<T>*)const{

	}
}
#endif