#include<iostream>
using namespace std;
void reverse(int i)
{
	if(i>5)
		return;
	cout<<i<<endl;
	reverse(i++);
	return;
}
int main()
{
	reverse(1);
	return 0;
}

