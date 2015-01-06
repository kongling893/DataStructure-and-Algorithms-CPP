#ifndef SORT_HPP
#define SORT_HPP

#include<iostream>
using namespace std;

template<typename T>
bool camp(T p1, T p2)
{
      return p1<p2;
}



template<typename T>
void swap(T *p1, T *p2)
{
      T temp;
      temp=*p1;
      *p1=*p2;
      *p2=temp;
}



template<typename T>//Quick sort
T* quickSort(T* array_begin, T* array_end, bool(*cmp) (T,T) = camp<T>) 
{


}


template<typename T> //insertion sort algorithm
T* insertSort(T* array_begin, T* array_end, bool(*cmp) (T,T) = camp<T>) 
{
	T* it = array_begin;

	while(it!=array_end-1)
	{
		for(T* it2=it+1;it2!=array_begin;it2--)
		{
			if(cmp(*it2,*(it2-1)))
				swap(it2,it2-1);              
		}
		it++;
	}
}

template<typename T> //shell sort 
T* shellSort(T* array_begin, T* array_end, bool(*cmp) (T,T) = camp<T>) 
{
	size_t n = static_cast<size_t> (array_end - array_begin);
	int dk = n/2;  
    while( dk >= 1){  
        for(T* it = array_begin+ dk; it!=array_end-1; it++){  
        if(cmp(*it, *(it-dk))){         
            T* j = it-dk;     
            T x = *it;            
            *it = *(it-dk);          
            while(cmp(x, *j)){     
                *(j+dk) = *j;  
                j -= dk;            
            }  
            *(j+dk) = x;        
        }  
    	}  
        dk = dk/2;  
    }  
}

template<typename T>
T* mergeSort(T* array_begin, T* array_end, bool(*cmp) (T,T) = camp<T>) 
{


}


template<typename T> //Bubble sort
T* bubbleSort(T* array_begin, T* array_end, bool(*cmp) (T,T) = camp<T>) 
{
	T* it = array_begin;
	bool flag=true;
	while(flag)
	{
		flag = false;
		for(T* it2=it+1;it2!=array_end;it2++)
		{
			if(cmp(*it2,*(it2-1)))
				{swap(it2,it2-1); flag =true;}              
		}
	}
}

template<typename T>//Selection sort
T* selectSort(T* array_begin, T* array_end, bool(*cmp) (T,T) = camp<T>) 
{
	for(T* it = array_begin;it!=array_end;it++)
	{
		T* min = it;
		for(T* it2 = it+1;it2!=array_end;it2++)
		{
			if(cmp(*it2,*min)) min = it2;
		}
		if(min!=it) swap(it,min);
	}
}

template<typename T>//Selection sort 2: find the minimum and maximum number at the same time
T* selectSort2(T* array_begin, T* array_end, bool(*cmp) (T,T) = camp<T>) 
{
	int i=0;
	for(T* it = array_begin;it!=array_end-i;it++)
	{
		T* min = it;
        T* max = it;
		for(T* it2 = it+1;it2!=array_end-i;it2++)
		{
			
			if(cmp(*it2,*min)) min = it2;
            if(cmp(*max,*it2)) max = it2;
		}
		T t_min = *min;
        T t_max = *max;
		if(t_min!=*it) swap(it,min);
        if(t_max!=*(array_end-i-1)) swap(array_end-i-1,max);
		i++;
	}
}


template<typename T>
T* heapSort(T* array_begin, T* array_end, bool(*cmp) (T,T) = camp<T>) 
{


}
#endif
