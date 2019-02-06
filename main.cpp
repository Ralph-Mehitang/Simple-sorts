#include "lab-sort.h"
#include <iostream>
#include <stdio.h>
#include <chrono>
using namespace std;

//create driver program
void driverprog(){
	int input;
	int sortedar []= {1,2,3,4,5,6,7,8,9,10};
	int sortedlar [] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 
50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 
60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 
70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 
80, 81, 82, 83, 84, 85, 86, 87, 88};
	int duplicatear []= {1,4,3,1,4,3,10,66,20,20,66,10,98,33,56,33,98,56};
	int backwardssort []= {20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
	labsort vim= labsort();
	
	while(input!=5){
	
	cout<<"------------------"<<endl;

	cout<<"Main Menu"<<endl;
	cout<<"press 1 to test randomly generated numbers: \n";
    cout<<"press 2 to test arrays that are already sorted: \n";
	cout<<"press 3 to test arrays that contain duplicate elements: \n"; 
	cout<<"press 4 to test arrays that are sorted backwards: \n";
	cout<<"press 5 to end the program: \n";
	cin>>input;
			
	switch(input){


	case 1: {
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
			

	
	break;

}	//test for arrays that are already sorted	
	case 2: {
		cout<<"first sorting using small size sorted arr"<<endl;
			for(int i=0; i<sizeof(sortedar)/sizeof(int);i++){
				cout<<sortedar[i]<<" ";
					}
			auto start = std::chrono::system_clock::now();
			vim.bubbleSort(sortedar,sizeof(sortedar)/sizeof(int)); // time takes for sorting code
			vim.printarr(sortedar,sizeof(sortedar)/sizeof(int));
auto end = std::chrono::system_clock::now();
std::chrono::duration<double> elapsed_seconds = end-start;
std::time_t end_time = std::chrono::system_clock::to_time_t(end);
std::cout << "finished at " << std::ctime(&end_time)
<< "elapsed time: " << elapsed_seconds.count() << "s\n";
//------------------------------------------------------------
		cout<<"\n "<<endl;
		cout<<"Now sorting using large sized alrady sorted array"<<endl;
		vim.printarr(sortedlar,sizeof(sortedlar)/sizeof(int));
		cout<<" "<<endl;
		start = std::chrono::system_clock::now();
		vim.bubbleSort(sortedlar,sizeof(sortedlar)/sizeof(int)); 
		vim.printarr(sortedlar,sizeof(sortedlar)/sizeof(int));
end = std::chrono::system_clock::now();
elapsed_seconds = end-start;
end_time = std::chrono::system_clock::to_time_t(end);
std::cout << "finished at " << std::ctime(&end_time)
<< "elapsed time: " << elapsed_seconds.count() << "s\n";
break;

}
	//test for duplicated arrays
	case 3: {
			vim.printarr(duplicatear,sizeof(duplicatear)/sizeof(int));
			auto start = std::chrono::system_clock::now();
vim.selectsort(duplicatear,sizeof(duplicatear)/sizeof(int));
			vim.printarr(duplicatear,sizeof(duplicatear)/sizeof(int));
auto end = std::chrono::system_clock::now();
std::chrono::duration<double> elapsed_seconds = end-start;
std::time_t end_time = std::chrono::system_clock::to_time_t(end);
std::cout << "finished at " << std::ctime(&end_time)
<< "elapsed time: " << elapsed_seconds.count() << "s\n";
break;
		}
//testing backward sorted arrays
	case 4: {
	vim.printarr(backwardssort,sizeof(backwardssort)/sizeof(int));
	auto start = std::chrono::system_clock::now();
	vim.bubbleSort(backwardssort,sizeof(backwardssort)/sizeof(int));
	vim.printarr(backwardssort,sizeof(backwardssort)/sizeof(int));
auto end = std::chrono::system_clock::now();
std::chrono::duration<double> elapsed_seconds = end-start;
std::time_t end_time = std::chrono::system_clock::to_time_t(end);
std::cout << "finished at " << std::ctime(&end_time)
<< "elapsed time: " << elapsed_seconds.count() << "s\n";
break;
	}
}
cout<<" "<<endl;
}
}

//main method call
int main(){
	cout<<"Welcome to sorts Lab1"<<endl;
	driverprog();


// driver function
}
