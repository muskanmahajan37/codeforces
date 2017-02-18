#include<iostream>
#include<string.h>

using namespace std;

int main(){


	char in_string[100];

	int n ;
	
	cin>>n>>in_string;
	
	int count = 0 ;

	for(int i = 0  ; i<n-1 ; i++)
	   if(in_string[i]==in_string[i+1])
		count++;

	cout<<count<<endl;

	return 0;
}
