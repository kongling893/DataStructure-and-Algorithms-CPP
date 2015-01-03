#ifndef STACK_HPP
#define STACK_HPP

#include<iostream>


#ifndef DEBUG
        #define DEBUG 1
#endif


template<typename T>
class stack;



template<typename T>
bool operator==(const stack<T> &lhs, const stack<T> &rhs);


template<typename T>
class stack
{
public:        
        friend bool operator==(const stack<T> &lhs, const stack<T> &rhs);
        void push(T &x);
        void pop();
        T top();
        T getMin();
        bool isEmpty();
        void print();
        
private:
        T *stack; 
        
}

#endif
