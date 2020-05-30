#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <string>
#include <iterator>
using namespace std;
void swap(int& a,int&b){
	a=a*b;
	b=a/b;
	a=a/b;
}
int main(int argc, char const *argv[])
{
	int a,b;
	cout<<"Please give a number as 1st variable: ";
	cin>>a;
	cout<<"Please give a number as 2nd variable: ";
	cin>>b;
	swap(a,b);
	cout<<"The value of the 1st variable: "<<a<<endl;
	cout<<"The value of the 2nd variable: "<<b<<endl;



	return 0;
}