#include <iostream>
using namespace std;
 
void fun(int n)
{
	if(n==0)
	return ;
     else
     {
     	fun(n-1);
     	cout<<n;
	 }
}
int main(){
	 fun(10);
}