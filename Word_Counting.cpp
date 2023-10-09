#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;
int main(){
	string filename;
	
	//taking filename
	cout<<"Enter FileName: ";
	cin>>filename;
	ifstream file(filename);
	
	//checking file
	if(!file.is_open()){
		cout<<"Error! Can't Open File";
		exit(0);
	}
	
	//counting number of words
	int word=1;
	char space;
	while(!file.eof()){
			file.get(space);
			if(space==' ' || space=='\n')
				word++;
	}
	file.close();
	cout<<"No. of Words: "<<word<<endl;
	return 0;
}
