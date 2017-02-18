#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;



int main(){


	char input[100];

	cin>>input;

	for(int i =0,j =strlen(input) ; i<j-2; i+=2){
	      for(int k = 0 ; k<j-2-i ; k++){
		if(input[k]>input[k+2])
			swap(input[k],input[k+2]);
			

	      }
	}
	cout<<input;

	return 0;
}
