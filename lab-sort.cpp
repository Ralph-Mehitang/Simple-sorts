#include "lab-sort.h"
using namespace std;
//swap function for sorts
void labsort::swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
/* Function to print an arr */
void labsort::printarr(int *arr, int size)
{
	//while i is less than size of array goes through and prints out each index.
	int i;
	for (i=0; i < size; i++)
		cout<<(arr[i])<<" ";
} 

//bubble sort function
void labsort::bubbleSort(int *arr, int len)
{
	int i, j;
	int count=0; //count how many sorting iterations took place.
	for (i = 0; i < len-1; i++)	 {
		// Last i elements are already in place 
		for (j = 0; j < len-i-1; j++)
		{	
			if (arr[j] > arr[j+1])
			{
				swap(&arr[j], &arr[j+1]);
				count++;
			}
		}
		
	}
	cout<< "it took "<< count<<" swaps" <<endl;

}
void labsort::revbubblesort(int* arr, int len){
	int i, j;
	int count=0; //count how many sorting iterations took place.
	for (i = 0; i < len-1; i++)	 {
		// Last i elements are already in place 
		for (j = 0; j < len-i-1; j++)
		{	
			if (arr[j] < arr[j+1])
			{
				swap(&arr[j], &arr[j+1]);
				count++;
			}
		}
		
	}
	cout<< "it took "<< count<<" swaps" <<endl;

}
//insertion sort function
void labsort :: insertionsort(int *arr, int len){
	int i, j;
	int count=0;
	int k;
	for(i=1; i < len;i++)
	{
		k = *(arr+i);
		j = i-1;
		while((j >= 0) && (*(arr+j) > k))

		{
			*(arr+j+1) = *(arr+j);
			j = j-1;
			count++;

		}
		*(arr+j+1) = k;
		

	}
	cout<< "it took "<< count<<" swaps" <<endl;

}
//selection sort function
void labsort :: selectsort(int *arr, int len){

	int min;
	int count=0;
	for (int i = 0; i< (len-1); i++)
	{
		min=i; //sets min to first index in arr
		for (int j = i+1; j < len; j++)
		{
			if(arr[j] < arr[min])
			{
				min = j; //sets j as new minimum num
			}
			swap(&arr[min],&arr[i]);
			count++;
		}
	}
	cout<< "it took "<< count<<" swaps" <<endl;
}
//function to check if array is sorted or not

int labsort :: sortedarr(int *arr, int len){
	//if the Array has one or no element or the
	// rest are already checked and approved returns true;
	if (len == 1 || len == 0)
	return 1;

	// If unsorted pair are found return false
	if (arr[len-1] < arr[len-2])
		return 0;

	// Keep on checking recursively
	return sortedarr(arr, len-1);

}




