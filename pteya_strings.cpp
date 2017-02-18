#include<cctype>
#include <iostream>
#include <algorithm> 
#include <string>  

using namespace std;

int main()
{
	    string input;
	    cin >> input;	
	    string input2 ;
	    cin>>input2;

	    for(int i=0 ;i<input.length() ; i++){

		    input[i] = toupper(input[i]);
		    input2[i] = toupper(input2[i]);
	    }
	  	
	    if(input.compare(input2)==0)
		    cout<<0;
	    else if(input.compare(input2)>0)
		    cout<<1;
	    else 
		    cout<<-1;
	
	    return 0;
}

