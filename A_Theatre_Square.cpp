#include<iostream>
#define NEWLINE '\n'

using namespace std;

int main(){

	int m , n , a;

	cin>>m>>n>>a;

	m=m%a ; n=n%a;

	cout<<m*n<<NEWLINE;

	return 0;
}