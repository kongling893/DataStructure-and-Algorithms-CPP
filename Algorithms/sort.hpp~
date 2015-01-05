#ifndef SORT_HPP
#define SORT_HPP

#include<iostream>
using namespace std;

template<typename T>
bool camp(T *p1, T *p2)
{
      return *p1<*p2;
}



template<typename T>
void swap(T *p1, T *p2)
{
      T temp;
      temp=*p1;
      *p1=*p2;
      *p2=temp;
}



template<typename T>
T* quickSort(T* array_begin, T* array_end, bool(*cmp) (T*,T*) = camp<T>) 
{


}


template<typename T> //insertion sort algorithm
T* insertSort(T* array_begin, T* array_end, bool(*cmp) (T*,T*) = camp<T>) 
{
	T* it = array_begin;

	while(it!=array_end)
	{
		for(T* it2=it+1;it2!=array_begin;it2++)
		{
			if(cmp(it2,it2-1))
				swap(it2,it2-1);              
		}
		it++;
	}
}



template<typename T>
T* mergeSort(T* array_begin, T* array_end, bool(*cmp) (T*,T*) = camp<T>) 
{


}


template<typename T>
T* bubbleSort(T* array_begin, T* array_end, bool(*cmp) (T*,T*) = camp<T>) 
{
	T* it = array_begin;

	while(it!=array_end)
	{
		for(T* it2=it+1;it2!=array_end;it2++)
		{
			if(cmp(it,it2))
				swap(it,it2);              
		}
		it++;
	}
}

template<typename T>
T* selectSort(T* array_begin, T* array_end, bool(*cmp) (T*,T*) = camp<T>) 
{


}




template<typename T>
T* heapSort(T* array_begin, T* array_end, bool(*cmp) (T*,T*) = camp<T>) 
{


}




#endif
