#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int size=0;
	cout<<"Bubble Sorting... "<<endl;
	cout<<"Enter the Array Size: ";
	cin>>size;
	int arr [size];
	int ctr=0, x=0, y=0, temp=0, sum=0, num=0;
	cout<<"Enter the "<<size<<" elements: "<<endl;
	for (ctr=0;ctr<size;ctr++){
		cin>>arr[ctr];
	}
	cout<<"Your Data: ";
	for (ctr=0;ctr<size;ctr++){
		cout<<" "<<arr[ctr];
	}
	//Bubble Sort
	for (x=0; x<size-1; x++){
		for (y=0; y<size-1; y++){
			if (arr[y]>arr[y+1]){
				temp=arr[y];
				arr[y]=arr[y+1];
				arr[y+1]=temp;
			}
		}
	}
	
	cout<<"\nAfter using selection or bubble sort... "<<endl;
	cout<<"Sorted Data: ";
	for (ctr=0;ctr<size;ctr++){
		cout<<" "<<arr[ctr];
	}
	
	getch();
	return 0;
}
