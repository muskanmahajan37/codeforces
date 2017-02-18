#include<iostream>
#include<string.h>
#include<ctype.h>

using namespace std;

int main(){


	
	char word[100];

	cin>>word;
	
		
	if(islower(word[0]))
	   word[0]=toupper(word[0]);

	for(int i = 1 , j= strlen(word) ; i<j ; i++)
	    if(isupper(word[i]))
		word[i] = tolower(word[i]);
	
	cout<<word<<endl;
	return 0;
}
