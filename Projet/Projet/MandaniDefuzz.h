#ifndef MANDANIDEFUZZ_H
#define MANDANIDEFUZZ_H

#include "mainAnd.h"

namespace SemantiqueFloue {

	template <class T>
	class MandaniDefuzz : And<T> {
	public:

		MandaniDefuzz() {}
		virtual ~MandaniDefuzz() {}
		virtual T evaluate(Model::Expression<T>*, Model::Expression<T>*);
	};

}
#endif