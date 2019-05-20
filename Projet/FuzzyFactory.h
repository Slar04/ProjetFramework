#ifndef FUZZYFACTORY_H
#define FUZZYFACTORY_H

#include "ExpressionFactory.h"
#include "Not.h"
#include "And.h"
#include "Or.h"
#include "Is.h"
#include "Then.h"
#include "Agg.h"
#include "MamdaniDefuzz.h"
#include "SugenoDefuzz.h"
#include "SugenoConclusion.h"
#include "UnaryShadowExpression.h"
#include "BinaryShadowExpression.h"
#include "NaryShadowExpression.h"

namespace SemantiqueFloue
{
	template <class T>
	class FuzzyFactory : public Model::ExpressionFactory<T>
	{
	public:
		FuzzyFactory() {};
		FuzzyFactory(Not<T>*, And<T>*, Or<T>*, Then<T>*, Agg<T>*, MamdaniDefuzz<T>*);
		FuzzyFactory(Not<T>*, And<T>*, Or<T>*, Then<T>*, Agg<T>*, SugenoDefuzz<T>*, SugenoConclusion<T>*);
		virtual ~FuzzyFactory();

		Model::Expression<T>* NewNot(Model::Expression<T>*);
		Model::Expression<T>* NewIs(Is<T>*, Model::Expression<T>*);
		Model::Expression<T>* NewAnd(Model::Expression<T>*, Model::Expression<T>*);
		Model::Expression<T>* NewOr(Model::Expression<T>*, Model::Expression<T>*);
		Model::Expression<T>* NewThen(Model::Expression<T>*, Model::Expression<T>*);
		Model::Expression<T>* NewAgg(Model::Expression<T>*, Model::Expression<T>*);
		Model::Expression<T>* NewDefuzz(Model::Expression<T>*, Model::Expression<T>*, const T&, const T&, const T&);
		Model::Expression<T>* NewSugeno(std::vector<const Model::Expression<T>*>*);
		Model::Expression<T>* NewNConclusion(std::vector<const Model::Expression<T>*>*);

		void ChangeNot(Not<T>*);
		void ChangeAnd(And<T>*);
		void ChangeOr(Or<T>*);
		void ChangeThen(Then<T>*);
		void ChangeAgg(Agg<T>*);
		void ChangeDefuzz(MamdaniDefuzz<T>*);
		void ChangeSugeno(SugenoDefuzz<T>*);
		void ChangeConclusion(SugenoConclusion<T>*);

	private:
		Model::UnaryShadowExpression<T> * not;
		Model::BinaryShadowExpression<T>* and;
		Model::BinaryShadowExpression<T>* or ;
		Model::BinaryShadowExpression<T>* then;
		Model::BinaryShadowExpression<T>* agg;
		Model::BinaryShadowExpression<T>* defuzz;
		Model::NaryShadowExpression<T>*   sugeno;
		Model::NaryShadowExpression<T>*   conclusion;
	};

	template <class T>
	FuzzyFactory<T>::FuzzyFactory(Not<T>* _not, And<T>* _and, Or<T>* _or, Then<T>* _then, Agg<T>* _agg, MamdaniDefuzz<T>* _defuzz ) {
		not = new Model::UnaryShadowExpression<T>(_not);
		and = new Model::BinaryShadowExpression<T>(_and);
		or = new core::BinaryShadowExpression<T>(_or);
		then = new Model::BinaryShadowExpression<T>(_then);
		agg = new Model::BinaryShadowExpression<T>(_agg);
		defuzz = new Model::BinaryShadowExpression<T>(_defuzz);
	}

	template <class T>
	FuzzyFactory<T>::FuzzyFactory( Not<T>* _not, And<T>* _and, Or<T>* _or,	Then<T>* _then, Agg<T>* _agg, SugenoDefuzz<T>* _sugeno, SugenoConclusion<T>* _conclusion ){
		not = new Model::UnaryShadowExpression<T>(_not);
		and = new Model::BinaryShadowExpression<T>(_and);
		or = new Model::BinaryShadowExpression<T>(_or);
		then = new Model::BinaryShadowExpression<T>(_then);
		agg = new Model::BinaryShadowExpression<T>(_agg);
		sugeno = new Model::NaryShadowExpression<T>(_sugeno);
		conclusion = new Model::NaryShadowExpression<T>(_conclusion);
	}

	template <class T>
	FuzzyFactory<T>::~FuzzyFactory() {
		delete not;
		delete and;
		delete or ;
		delete then;
		delete agg;
		delete defuzz;
		delete sugeno;
		delete conclusion;
	}

	template <class T>
	Model::Expression<T>* FuzzyFactory<T>::NewNot(Model::Expression<T>* o) {
		return NewUnary(not, o);
	}

	template <class T>
	Model::Expression<T>* FuzzyFactory<T>::NewIs(Is<T>* s, Model::Expression<T>* o)	{
		return NewUnary(s, o);
	}

	template <class T>
	Model::Expression<T>* FuzzyFactory<T>::NewAnd(Model::Expression<T>* l, Model::Expression<T>* r)	{
		return NewBinary(and, l, r);
	}

	template <class T>
	Model::Expression<T>* FuzzyFactory<T>::NewOr(Model::Expression<T>* l, Model::Expression<T>* r)	{
		return NewBinary(or , l, r);
	}

	template <class T>
	Model::Expression<T>* FuzzyFactory<T>::NewThen(Model::Expression<T>* l, Model::Expression<T>* r) {
		return NewBinary(then, l, r);
	}

	template <class T>
	Model::Expression<T>* FuzzyFactory<T>::NewAgg(Model::Expression<T>* l, Model::Expression<T>* r) {
		return NewBinary(agg, l, r);
	}

	template <class T>
	Model::Expression<T>* FuzzyFactory<T>::NewDefuzz(Model::Expression<T>* l, Model::Expression<T>* r, const T& min, const T& max, const T& step) {
		MamdaniDefuzz<T>* target = (MamdaniDefuzz<T>*) defuzz->GetTarget();
		target->SetMin(min);
		target->SetMax(max);
		target->SetStep(step);

		return NewBinary(defuzz, l, r);
	}

	template <class T>
	Model::Expression<T>* FuzzyFactory<T>::NewSugeno(std::vector<const Model::Expression<T>*>* operands) {
		return NewNary(sugeno, operands);
	}

	template <class T>
	Model::Expression<T>* FuzzyFactory<T>::NewNConclusion(std::vector<const Model::Expression<T>*>* operands) {
		return NewNary(conclusion, operands);
	}

	template <class T>
	void FuzzyFactory<T>::ChangeNot(Not<T>* o) {
		not->SetTarget(o);
	}

	template <class T>
	void FuzzyFactory<T>::ChangeAnd(And<T>* o) {
		and->SetTarget(o);
	}

	template <class T>
	void ChangeOr(Or<T>* o) {
		or ->SetTarget(o);
	}

	template <class T>
	void FuzzyFactory<T>::ChangeThen(Then<T>* o) {
		then->SetTarget(o);
	}

	template <class T>
	void FuzzyFactory<T>::ChangeAgg(Agg<T>* o) {
		agg->SetTarget(o);
	}

	template <class T>
	void FuzzyFactory<T>::ChangeDefuzz(MamdaniDefuzz<T>* o) {
		defuzz->SetTarget(o);
	}

	template <class T>
	void FuzzyFactory<T>::ChangeSugeno(SugenoDefuzz<T>* o) {
		sugeno->SetTarget(o);
	}

	template <class T>
	void FuzzyFactory<T>::ChangeConclusion(SugenoConclusion<T>* o) {
		conclusion->SetTarget(o);
	}
}

#endif