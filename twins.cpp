#include<iostream>

void swap(int* x, int* y){

	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
}

void sort(int* x,int length){

	for(int i =0 ; i<length-1 ; i++)
	    for(int j = 0 ; j<length-i -1 ; j++)
		    if(x[j]<x[j+1])
			    swap(&x[j],&x[j+1]);
}
			    


using namespace std;

int main(void){


	int n ;  cin>>n;

	int array[n];

	int half =0 , count = 0 , pick =0;

	for(int i=0; i<n ;i++){

		cin>>array[i];
		half+=array[i];
	}

	half/=2;
	
	sort(array,n);

	for(int i =0 ; pick<=half ; i++){
		pick+=array[i];
		count++;
		
	}
	
	
	cout<<count;
	
	return 0;
}
