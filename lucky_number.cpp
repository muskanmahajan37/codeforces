#include<iostream>

using namespace std;


int main(void){

	int number;

	cin>>number;
	
	bool lucky = true;

	while(number!=0){

		
	  if(number%10 ==7 || number%10==4){

		  number/=10;

		  continue;}
	  
	  else if(number%4==0 || number%7==0)
	  	break;
	  else
	  {
		  lucky = false;
		  break;}
	}

	if(lucky)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

	return 0;
}

