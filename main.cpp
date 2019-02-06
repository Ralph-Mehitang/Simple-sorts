#include "lab-sort.h"
#include <iostream>
#include <stdio.h>
#include <chrono>
using namespace std;
/*Ralph Mehitang
 * Cosc-320 
 * Joseph Anderson
 * Lab-1 Sorts
 */
//create driver program
void driverprog(){
	int input;
	labsort vim= labsort();
	//menu option
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
		auto start = std::chrono::system_clock::now(); //time takes for sorting
		vim.bubbleSort(arr,len); // calls bubble sorted	
	auto end = std::chrono::system_clock::now(); 
		cout<<endl;
			cout<<"Now this is the sorted array:"<<endl;
			vim.printarr(arr,len);

	std::chrono::duration<double> elapsed_seconds = end-start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);
	std::cout << "finished at " << std::ctime(&end_time)
	<< "elapsed time: " << elapsed_seconds.count() << "s\n";
		}
		else if(s=='2'){
			cout<<"Original Array "<<endl;
			vim.printarr(arr,len);

				auto start = std::chrono::system_clock::now();
			vim.insertionsort(arr,len); // calls insertion sort
auto end = std::chrono::system_clock::now();
			cout<<endl;
			cout<<"Now this is the sorted array:"<<endl;
			vim.printarr(arr,len);
std::chrono::duration<double> elapsed_seconds = end-start;
std::time_t end_time = std::chrono::system_clock::to_time_t(end);
std::cout << "finished at " << std::ctime(&end_time)
<< "elapsed time: " << elapsed_seconds.count() << "s\n";
		}
			else if(s=='3'){
			cout<<"Original Array "<<endl;
			vim.printarr(arr,len);
			auto start = std::chrono::system_clock::now();
vim.selectsort(arr,len); // time takes for sorting code
auto end = std::chrono::system_clock::now();
			cout<<endl;
			cout<<"Now this is the sorted array:"<<endl;
			vim.printarr(arr,len);
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
			

	
delete [] arr;
	break;

}	//test for arrays that are already sorted	
	case 2: {	
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
		
		
		cout<<"Which sort would you like to use? (1 for bubble, 2 for insertion,3 for selection)"<<endl;
		cin>>s;
		if(s=='1'){
		cout<<"Original Array "<<endl;
		vim.bubbleSort(arr,len);	
		vim.printarr(arr,len);
			auto start = std::chrono::system_clock::now();
	vim.bubbleSort(arr,len); //time takes for sorting

	auto end = std::chrono::system_clock::now();
			cout<<endl;
			cout<<"Now this is the sorted array:"<<endl;
			vim.printarr(arr,len);
			
	std::chrono::duration<double> elapsed_seconds = end-start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);
	std::cout << "finished at " << std::ctime(&end_time)
	<< "elapsed time: " << elapsed_seconds.count() << "s\n";
		}
		else if(s=='2'){
			cout<<"Original Array "<<endl;
		vim.bubbleSort(arr,len);	
			vim.printarr(arr,len);
			auto start = std::chrono::system_clock::now();
vim.insertionsort(arr,len); // time takes for sorting
auto end = std::chrono::system_clock::now();
			cout<<endl;
			cout<<"Now this is the sorted array:"<<endl;
			vim.printarr(arr,len);
std::chrono::duration<double> elapsed_seconds = end-start;
std::time_t end_time = std::chrono::system_clock::to_time_t(end);
std::cout << "finished at " << std::ctime(&end_time)
<< "elapsed time: " << elapsed_seconds.count() << "s\n";
		}
			else if(s=='3'){
			cout<<"Original Array "<<endl;
			vim.bubbleSort(arr,len);
			vim.printarr(arr,len);
			auto start = std::chrono::system_clock::now();
vim.selectsort(arr,len); // time takes for sorting code
auto end = std::chrono::system_clock::now();
			cout<<endl;
			cout<<"Now this is the sorted array:"<<endl;
			vim.printarr(arr,len);
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
			

delete [] arr;
	
	break;
	}
	//test for duplicated arrays
	case 3: 	{
	char n,s;
	int len;
		cout<<"How many numbers total do you want to be generated in array?"<<endl;
		cin>>len;

		//creates and fills array with random values up to size of len from user input
		int *arr= new int [len];
		for(int i=0; i < len; i++)
		{
			arr[i] = (rand()%20)+1;
		}	

		cout<<"Which sort would you like to use? (1 for bubble, 2 for insertion,3 for selection)"<<endl;
		cin>>s;
		if(s=='1'){
		cout<<"Original Array "<<endl;
		vim.printarr(arr,len);
			auto start = std::chrono::system_clock::now();
	vim.bubbleSort(arr,len); //time takes for sorting

	auto end = std::chrono::system_clock::now();
			cout<<endl;
			cout<<"Now this is the sorted array:"<<endl;
			vim.printarr(arr,len);
			
	std::chrono::duration<double> elapsed_seconds = end-start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);
	std::cout << "finished at " << std::ctime(&end_time)
	<< "elapsed time: " << elapsed_seconds.count() << "s\n";
		}
		else if(s=='2'){
			cout<<"Original Array "<<endl;
			vim.printarr(arr,len);
			auto start = std::chrono::system_clock::now();
vim.insertionsort(arr,len); // time takes for sorting
auto end = std::chrono::system_clock::now();
			cout<<endl;
			cout<<"Now this is the sorted array:"<<endl;
			vim.printarr(arr,len);
std::chrono::duration<double> elapsed_seconds = end-start;
std::time_t end_time = std::chrono::system_clock::to_time_t(end);
std::cout << "finished at " << std::ctime(&end_time)
<< "elapsed time: " << elapsed_seconds.count() << "s\n";
		}
			else if(s=='3'){
			cout<<"Original Array "<<endl;
			vim.printarr(arr,len);
			auto start = std::chrono::system_clock::now();
vim.selectsort(arr,len); // time takes for sorting code
auto end = std::chrono::system_clock::now();
			cout<<endl;
			cout<<"Now this is the sorted array:"<<endl;
			vim.printarr(arr,len);

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
			
delete [] arr;
		break;
		}
//testing backward sorted arrays
	case 4: {
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
		vim.revbubblesort(arr,len);	
		vim.printarr(arr,len);
			auto start = std::chrono::system_clock::now();
	vim.bubbleSort(arr,len); //time takes for sorting
	auto end = std::chrono::system_clock::now();
			cout<<endl;
			cout<<"Now this is the sorted array:"<<endl;
			vim.printarr(arr,len);
			
	std::chrono::duration<double> elapsed_seconds = end-start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);
	std::cout << "finished at " << std::ctime(&end_time)
	<< "elapsed time: " << elapsed_seconds.count() << "s\n";
		}
		else if(s=='2'){
			cout<<"Original Array "<<endl;
			vim.revbubblesort(arr,len);
			vim.printarr(arr,len);
			auto start = std::chrono::system_clock::now();
vim.insertionsort(arr,len); // time takes for sorting
auto end = std::chrono::system_clock::now();
			cout<<endl;
			cout<<"Now this is the sorted array:"<<endl;
			vim.printarr(arr,len);
				
std::chrono::duration<double> elapsed_seconds = end-start;
std::time_t end_time = std::chrono::system_clock::to_time_t(end);
std::cout << "finished at " << std::ctime(&end_time)
<< "elapsed time: " << elapsed_seconds.count() << "s\n";
		}
			else if(s=='3'){
			cout<<"Original Array "<<endl;
			vim.revbubblesort(arr,len);
			vim.printarr(arr,len);
			auto start = std::chrono::system_clock::now();
vim.selectsort(arr,len); // time takes for sorting code
auto end = std::chrono::system_clock::now();
			cout<<endl;
			cout<<"Now this is the sorted array:"<<endl;
			vim.printarr(arr,len);
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
			

	
delete [] arr;
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
