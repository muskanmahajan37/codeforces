#include<iostream>
#include<string>
#include<cctype>

using namespace std;


int main(void){


	string input;

	cin>>input;

	input[0] = toupper(input[0]);

	cout<<input;

	return 0;
}
