#ifndef NARYEXPRESSION_H
#define NARYEXPRESSION_H

namespace Model {
	template <class T>
	class NaryExpression {
	public:
		NaryExpression() {};
		virtual ~NaryExpression() {};
		
		virtual T evaluate(std::vector<const Expression<T>*>*) const = 0;
	};
}
#endif