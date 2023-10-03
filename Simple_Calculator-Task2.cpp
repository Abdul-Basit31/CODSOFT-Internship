//This is my Second task of CODSOFT-Internship
//Name : ABDUL BASIT

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num1,num2;
	char X;
	while (true){
	cout<<"\nEnter the first Number: ";
	cin>>num1;
	cout<<"Enter the Second Number: ";
	cin>>num2;
	cout<<"\nPress a for addition.\n";
	cout<<"Press b for subtraction.\n";
	cout<<"Press c for Multiplication.\n";
	cout<<"Press d for division.\n";
	cin>>X;
	if(X=='a')
	cout<<num1+num2;
	else if(X=='b')
	cout<<num1-num2;
	else if(X=='c')
	cout<<num1*num2;
	else if(X=='d')
	cout<<num1/num2;
	else
	cout<<"Invalid Operation";}
}
