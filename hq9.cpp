#include<iostream>
#include<string>

using namespace std;

int main(void){

	string input;

	cin>>input;

	
	bool output = false;


	for(int i = 0  , length  = input.length() ; i<length ; i++){
		
		if(input[i]=='H' || input[i] =='Q' || input[i]=='9' ){
			output = true;
			break;
		}
	}

	if(output)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

	return 0;

	}
