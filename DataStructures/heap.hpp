#ifndef  HEAP_HPP
#define HEAP_HPP

#include <vector>


template<class ElemType,class Compare = less<ElemType> > 
class heap
 {
 private:
 	vector<ElemType> heapVec; // The basic structure is vector
 	int size; // how many elements in this heap
 	Compare comp; // the comparision rule
 public:
 	heap();
 	~heap();
 	heap heapify( vector<ElemType> vec); // creat a heap from a given unsorted array
 	void update();
 	void insert(ElemType Elem);
 	ElemType top();
 	void pop(); 
 	/* data */
 }; 

template <class ElemType,class Compare>  
void heap<ElemType,Compare>::pop()  
{  
	// the heap is empty
	if ( size == 0 ) {
		return;
	}
	//otherwise, we do the following work
	// The top element is at the tail of the inner vector. 
	ElemType adjustValue = heapDataVec[size-1];  
	//堆顶元素为容器的首元素  
	heapVec[numCounts] = heapVec[StartIndex];  
	  
	--size;  
	  
	update();  
}  


#endif