#include<iostream>
#include<string.h>
#include<ctype.h>

using namespace std;

bool allCapital(char x[]){

	int length =strlen(x);
	
	bool return_value = true;

	for(int i =0 ; i<length ; i++){
	    if(isupper(x[i]))
		    continue;
	    else{
		    return_value =false; break;}
	}
	
	return return_value;
}


bool allCapitalbutOne(char* x){
	int length  =strlen(x);

	bool return_value = true;

	if(islower(x[0])){
		for(int i = 1 ; i<length ; i++){
			if(isupper(x[i]))
				continue;
			else{
				return_value = false; break;
			}
		}
	}
	else
		return_value = false;

	return return_value;
}

int main(){


	
	char word[100];

	cin>>word;
	
	if(allCapital(word))
	   { 
		   for(int i =0 , j=strlen(word) ; i<j ; i++)
			   word[i] = tolower(word[i]);
	   }
	else if(strlen(word)==1){
		word[0] = toupper(word[0]);
	}
	else if(allCapitalbutOne(word)){
		word[0] = toupper(word[0]);
		    for(int i =1 , j=strlen(word) ; i<j ; i++)
		            word[i] = tolower(word[i]);
	}

	
	
	cout<<word<<endl;
	return 0;
}
