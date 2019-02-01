#ifndef LABSORT_h
#define LABSORT_H
#include <iostream>
using namespace std;

class labsort{

public:

	void swap(int*, int*);
    void printarr(int*,int);
	void bubbleSort(int*, int);
	void insertionsort(int*, int);
	void selectsort(int*,int);
	int sortedarr(int*,int);
};
#endif
