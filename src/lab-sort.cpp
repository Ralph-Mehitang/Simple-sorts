	/* Ralph Mehitang
	   Cosc 320
	   Date: September 11,2018
	   Professor Anderson
	*/
	#include <stdio.h>
	#include <iostream>
	#include <chrono>
	
	using namespace std;
	//swap function for sorts
	void swap(int *a, int *b)
	{
		int temp = *a;
		*a = *b;
		*b = temp;
	}


	/* Function to print an arr */
	void printarr(int *arr, int size)
	{
		//while i is less than size of array goes through and prints out each index.
		int i;
		for (i=0; i < size; i++)
			cout<<(arr[i])<<" ";
	}

	//bubble sort function
	void bubbleSort(int *arr, int len)
	{
		int i, j;
		int count=0;
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
	//insertion sort function
	void insertionsort(int *arr, int len){
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
	void selectsort(int *arr, int len){

		int min;
		int count=0;
		for (int i = 0; i< (len-1); i++)
		{
			min=i; //sets min to first index in arr
			for (int j = i+1; j < len; j++)
			{
				if(*(arr+j) < *(arr+min))
				{
					min = j; //sets j as new minimum num
				}
				swap(*(arr+min),*(arr+i));
				count++;
			}
		}
		cout<< "it took "<< count<<" swaps" <<endl;
	}
	//function to check if array is sorted or not

	int sortedarr(int *arr, int len){
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

	// driver function
	int main(){
		char n,s;
		int len;
		cout<<"How many numbers total do you want to be generated in array?"<<endl;
		cin>>len;

		//creates and fills array with random values up to size of len from user input
		int *arr= new int [len];
		for(int i=0; i < len; i++)
		{
			arr[i] = (rand()%100)+1;
		}
//takes in user input to create size of array and choose which sort implementation user wants to use.
		cout<<"Which sort would you like to use? (1 for bubble, 2 for insertion,3 for selection)"<<endl;
		cin>>s;
		if(s=='1'){
			cout<<"Original Array "<<endl;
			printarr(arr,len);
			bubbleSort(arr,len); // calls bubble sorted
			cout<<endl;
			cout<<"Now this is the sorted array:"<<endl;
			printarr(arr,len);
			auto start = std::chrono::system_clock::now();
	bubbleSort(arr,len); //time takes for sorting

	auto end = std::chrono::system_clock::now();
	std::chrono::duration<double> elapsed_seconds = end-start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);
	std::cout << "finished at " << std::ctime(&end_time)
	<< "elapsed time: " << elapsed_seconds.count() << "s\n";
		}
		else if(s=='2'){
			cout<<"Original Array "<<endl;
			printarr(arr,len);
			insertionsort(arr,len); // calls insertion sort
			cout<<endl;
			cout<<"Now this is the sorted array:"<<endl;
			printarr(arr,len);
				auto start = std::chrono::system_clock::now();
insertionsort(arr,len); // time takes for sorting
auto end = std::chrono::system_clock::now();
std::chrono::duration<double> elapsed_seconds = end-start;
std::time_t end_time = std::chrono::system_clock::to_time_t(end);
std::cout << "finished at " << std::ctime(&end_time)
<< "elapsed time: " << elapsed_seconds.count() << "s\n";
		}
			else if(s=='3'){
			cout<<"Original Array "<<endl;
			printarr(arr,len);
			selectsort(arr,len);
			cout<<endl;
			cout<<"Now this is the sorted array:"<<endl;
			printarr(arr,len);
auto start = std::chrono::system_clock::now();
selectsort(arr,len); // time takes for sorting code
auto end = std::chrono::system_clock::now();
std::chrono::duration<double> elapsed_seconds = end-start;
std::time_t end_time = std::chrono::system_clock::to_time_t(end);
std::cout << "finished at " << std::ctime(&end_time)
<< "elapsed time: " << elapsed_seconds.count() << "s\n";
		}
		else 
			cout<<"wrong input"<<endl;
		cout<<endl;
		
		//if statements that print out confirmation if array has been sorted.

		if(sortedarr(arr,len))
			cout<<"array has been sorted"<<endl;

		else
			cout<<"Array has not been sorted"<<endl;
			

		return 0;

	}

//worked with billy on certain sort implementations