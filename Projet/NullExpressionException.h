#ifndef NULLEXPRESSIONEXCEPTION_H
#define NULLEXPRESSIONEXCEPTION_H

#include <exception>
#include <string>

namespace Model {
	class NullExpressionException : public std::exception {
	public:
		NullExpressionException(std::string m) : m(m) {};
		virtual ~NullExpressionException() {};

	private:
		std::string m;
	};
}

#endif