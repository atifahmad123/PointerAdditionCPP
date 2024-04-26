#include<iostream>
using namespace std;
int main(){
	
	int addition;
	int *ptr1;
	int *ptr2;
	int a;
	int b;
	
	cout<< "Kindly enter a number."<<endl;
	cin >> a;
	cout<< "Kindly enter another number."<<endl;
	cin >> b;
	
	ptr1 = &a;
	ptr2 = &b;
	
	addition = *ptr1 + *ptr2;
	
	cout<<"The addition of these two numbers is: "<<addition<<endl;
	
	return 0;
}