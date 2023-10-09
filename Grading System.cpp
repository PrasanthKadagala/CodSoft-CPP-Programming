#include<iostream>
#include<string>
using namespace std;
int main(){
	string names[100];
	double grades[100];
	int stu_num;
				
	cout<<"		You Can Enter upto 100 Students	"<<endl;
	cout<<"Enter Number of Students: ";
	cin>>stu_num;
	
	//validating input no. of students
	if (stu_num<=0 ||stu_num>100)
	{
		cout<<"Enter Valid Number of Students"<<endl;		
	}
	
	//taking students names and grades
	for(int i=0;i<stu_num;i++)
	{
		cout<<"Enter Student Name: ";
		cin>>names[i];
		cout<<"Enter "<<names[i]<<"\'s Grade: ";
		cin>>grades[i];
	}
	
	//Showing Collected Data
	cout<<"\nCollected Data:"<<endl;
	for(int i=0;i<stu_num;i++)
	{
		cout<<i+1<<". "<<names[i]<<":"<<grades[i]<<endl;
	}
	
	//Calculating Least and Highest Grades
	double sum=0;
	double max_grade=grades[0],min_grade=grades[0];
	for(int i=0;i<stu_num;i++){
		sum+=grades[i];
		if(max_grade<grades[i]){
			max_grade=grades[i];
		}
		if(min_grade>grades[i]){
			min_grade=grades[i];
		}
	}
	
	double average=(sum/stu_num);
	
	//Showing Result
	cout<<"\nLeast Grade is: "<<min_grade<<endl;
	cout<<"Highest Grade is: "<<max_grade<<endl;
	cout<<"Average Grade is: "<<average<<endl;
	return 0;
}
