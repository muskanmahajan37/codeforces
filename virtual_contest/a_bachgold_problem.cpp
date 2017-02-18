#include<stdio.h>
#include<iostream>
#include<vector>

using namespace std;

bool isprime(int x){

 bool flag = true;	
 
 for(int i =2 ; i<x/2 ;i++){
     if(x%i==0)
	flag=false;}

return flag;}
 


int main(){

	int x;
	
	cin>>x;

	vector<int>num;

	for(int i = 2 ; i<x ;i++)
	   if(isprime(i))
	      num.push_back(i);
	
	for(int i = 0 ; i<num.size();i++)
	  {  if(x%num[i]==0){
	         cout<<x/num[i]<<endl;
	     for(int j = 0 ; j<x/num[i] ;j++)
		     cout<<num[i]<<" ";
 			  cout<<endl;
               break;}
	     else{
		   for(int k=0 ; k<num.size();k++){
			if(num[i]+num[k]==x)
			   {cout<<2<<endl;
			cout<<num[i]<<" "<<num[k]<<endl; break;}}
	   }
	   }

return 0;
}
	
	

	 	






		
