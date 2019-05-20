#ifndef SUGENOCONCLUSION_H
#define SUGENOCONCLUSION_H

#include "NaryExpression.h"
#include <iostream>
#include <vector>

namespace SemantiqueFloue {

	template <class T>
	class SugenoConclusion : Model::NaryExpression<T> {
	public:

		SugenoConclusion(std::vector<T>* coeff) :coeff(coeff) {};
		virtual ~SugenoConclusion() {}
		//virtual T evaluate(Model::Expression<T>*)const;
		virtual T evaluate(std::vector<const Model::Expression<T>*>* operands) const;


	private:
		//T coeff[];
		const std::vector<T> *coeff;
	};

	template <class T>
	T SugenoConclusion<T>::evaluate(std::vector<const Model::Expression<T>*>* operands) const {
	//T SugenoConclusion<T>::evaluate(Model::Expression<T>*)const{
		std::vector<T>::const_iterator itcoef = coeff->begin();
		std::vector<const Model::Expression<T>*>::const_iterator itexpr = operands->begin();
		T z = 0;

		// calcul de la somme des Zi
		for (; itexpr != operands->end() && itcoef != coeff->end(); itexpr++, itcoef++)
		{
			// evaluation de la règle courante
			T eval = (*itexpr)->Evaluate();

			// multiplication par le coefficient associé à cette règle
			z += (*itcoef) * eval;
		}

		return z;
	}
}
#endif