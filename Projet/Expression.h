#ifndef EXPRESSION_H
#define EXPRESSION_H

namespace Model {
	template <class T>
	class Expression {
		Expresion() {}
		virtual ~Expresion() {};
		
		virtual T evaluate() const = 0;
	};
}
#endif