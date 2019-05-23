#include <iostream>
#include <conio.h>
using namespace std;
float add(int num1, int num2);
float sub(int num1, int num2);
float mul(int num1, int num2);
float div(int num1, int num2);
float mod(int num1, int num2);

float add(int num1, int num2){
	return num1+num2;
}
float sub(int num1, int num2){
	return num1-num2;
}
float mul(int num1, int num2){
	return num1*num2;
}
float div(int num1, int num2){
	return num1/num2;
}
float mod(int num1, int num2){
	return num1%num2;
}

int main(){
	int choice = 0, num1, num2;
	char again = 'y';
	float result;
	
	do{
		cout<<"Menu\n1. Add\n2.Subract\n3.Multiply\n4.Divide\n5.Modulus"<<endl;
		cout<<"Enter Number of choice: ";
		cin>>choice;
		cout<<"Enter your two numbers: ";
		cin>>num1;
		cin>>num2;
		switch (choice){
			case 1:
				result = add(num1, num2);
			break;
			case 2:
				result = sub(num1, num2);
			break;
			case 3:
				result = mul(num1, num2);
			break;
			case 4:
				result = div(num1, num2);
			break;
			case 5:
				result = mod(num1, num2);
			break;
			default:
				cout<<"Wrong number. Please Try Again.";
		}
		cout<<"Result: "<<result<<endl;
		cout<<"Continue? Press Y ";
		cin>>again;
	}while(again == 'y');
	
	getch();
	return 0;
}

