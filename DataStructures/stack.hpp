#ifndef STACK_HPP
#define STACK_HPP


template<typename T>
class stack;


template<typename T>
bool operator==(const stack<T> &lhs, const stack<T> &rhs);


template<typename T>
class stack
{
        friend bool operator==<T>(const stack<T> &lhs, const stack<T> &rhs);

}

#endif
