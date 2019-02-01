#include "lab-sort.h"
#include <iostream>
#include <stdio.h>
#include <chrono>
using namespace std;

//create driver program
void driverprog(){
	int sortedar []= {1,2,3,4,5,6,7,8,9,10};
	int sortelar [] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 
50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 
60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 
70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 
80, 81, 82, 83, 84, 85, 86, 87, 88}
	
	labsort vim= labsort();
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
			vim.printarr(arr,len);
			vim.bubbleSort(arr,len); // calls bubble sorted
			cout<<endl;
			cout<<"Now this is the sorted array:"<<endl;
			vim.printarr(arr,len);
			auto start = std::chrono::system_clock::now();
	vim.bubbleSort(arr,len); //time takes for sorting

	auto end = std::chrono::system_clock::now();
	std::chrono::duration<double> elapsed_seconds = end-start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);
	std::cout << "finished at " << std::ctime(&end_time)
	<< "elapsed time: " << elapsed_seconds.count() << "s\n";
		}
		else if(s=='2'){
			cout<<"Original Array "<<endl;
			vim.printarr(arr,len);
			vim.insertionsort(arr,len); // calls insertion sort
			cout<<endl;
			cout<<"Now this is the sorted array:"<<endl;
			vim.printarr(arr,len);
				auto start = std::chrono::system_clock::now();
vim.insertionsort(arr,len); // time takes for sorting
auto end = std::chrono::system_clock::now();
std::chrono::duration<double> elapsed_seconds = end-start;
std::time_t end_time = std::chrono::system_clock::to_time_t(end);
std::cout << "finished at " << std::ctime(&end_time)
<< "elapsed time: " << elapsed_seconds.count() << "s\n";
		}
			else if(s=='3'){
			cout<<"Original Array "<<endl;
			vim.printarr(arr,len);
			vim.selectsort(arr,len);
			cout<<endl;
			cout<<"Now this is the sorted array:"<<endl;
			vim.printarr(arr,len);
auto start = std::chrono::system_clock::now();
vim.selectsort(arr,len); // time takes for sorting code
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

		if(vim.sortedarr(arr,len))
			cout<<"array has been sorted"<<endl;

		else
			cout<<"Array has not been sorted"<<endl;
			

	}

int main(){
	cout<<"Welcome to Ralph Mehitangs Lab1"<<endl;
	driverprog();


// driver function
}
