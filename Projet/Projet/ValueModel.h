#ifndef VALUEMODEL_H
#define VALUEMODEL_H

#include "pch.h"

namespace Model {

	template <class T>
	class ValueModel : public Expression<T>
	{
	public:
		ValueModel() {};
		ValueModel(const T& v) :v(v) {};
		virtual ~ValueModel() {};

		void SetValue(const T&);
		virtual T Evaluate() const;

	private:
		T v;
	};

	template <class T>
	void ValueModel<T>::SetValue(const T& v)
	{
		this->v = v;
	}

	template <class T>
	T ValueModel<T>::Evaluate() const
	{
		return v;
	}

}
#endif