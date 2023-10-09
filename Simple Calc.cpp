#include<iostream>
using namespace std;
double sum(double x,double y){
	return x+y;
}
double sub(double x,double y){
	return x-y;
}
double mul(double x,double y){
	return x*y;
}
double div(double x,double y){
	return x/y;
}
int main(){
	cout<<"\t\t\tSIMPLE CALCULATOR\n";
	char op;
	double num1,num2;
	cout<<"Enter First Number: ";
	cin>>num1;
	cout<<"Enter Second Number: ";
	cin>>num2;
	cout<<"Enter Operator('+','-','*',/'): ";
	cin>>op;
	switch(op){
		case'+':
				cout<<"Sum of "<<num1<<" "<<"and "<<num2<<" "<<" is "<<sum(num1,num2)<<endl;
				break;
		case'-':
				cout<<"Subtraction of "<<num1<<" "<<"and "<<num2<<" is "<<sub(num1,num2)<<endl;
				break;
		case'*':
				cout<<"Multiplication of "<<num1<<" "<<"and "<<num2<<" is "<<mul(num1,num2)<<endl;
				break;
		case'/':
				cout<<"Division of "<<num1<<" "<<"and "<<num2<<" is "<<div(num1,num2)<<endl;
				break;
		default:cout<<"Enter Valid details!!!";
				break;
	}
	return 0;
}
