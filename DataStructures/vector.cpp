#ifndef VECTOR_HPP
#define VECTOR_HPP

#include<iostream>
#include<memory>

#ifndef DEBUG
        #define DEBUG 1
#endif


template<typename T, typename Alloc = alloc> >
class vector;



template<typename T>
bool operator==(const vector<T> &lhs, const vector<T> &rhs);




template<typename T, typename Alloc = alloc>
class vector
{
public: 
	typedef T value_type;
	typedef const T* const_iterator;
	typedef T* iterator;
	typedef simple_alloc<value_type,Alloc> data_allocator;
    
	vector() : begin_it(0), end_it(0), capacity(0), vec(NULL){}

	vector(size_t n = 0):capacity(n),vec(NULL)
	{
		if(capacity>0)
		{
			vec = data_allocator::allocate(n);
		}
	}

	vector(size_t n, const T& value) 
	{
    	vec = data_allocator::allocate(n);
		begin_it = vec;
    	iterator it = begin_it;
    	while(n--)
    	{

         	*it++ = value;

    	}
    	end_it = begin_it + n;
    	end_of_storage = end_it;
    }
	
	iterator begin(){return begin_it;}
	iterator end(){return end_it;}
	size_t size(){return static_cast<size_t>(end_it - begin_it);}
	size_t capacity(){return capacity;}
	bool empty(){return begin_it==end_it;}
	
	friend bool operator==(const vector<T> &lhs, const vector<T> &rhs);
        
        
protected:
	T *vec; 
	iterator begin_it;
	iterator end_it;
	iterator end_of_storage; 
	size_t capacity;
}

#endif
