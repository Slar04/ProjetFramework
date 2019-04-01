#ifndef EXPRESSION_H
#define EXPRESSION_H

<<<<<<< HEAD
//#include "pch.h"

namespace Model {

	template <class T>
	class Expression {


	};

=======
namespace core {
	template <class T>
	class Expression {
		Expresion() {}
		virtual ~Expresion() {};
		
		virtual T evaluate() const = 0;
	};
>>>>>>> 97abd2187b0bd8b04d4934d94972b9eda174aeef
}
#endif