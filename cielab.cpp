#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	long long int a,b,diff;
	cin>>a>>b;
	diff = a-b;
	int lastdigit = diff%10;
	lastdigit = (lastdigit + 1)%10;
	if(lastdigit==0)
		lastdigit++;
	diff = diff/10;
	diff = diff*10 + lastdigit;
	cout<<diff;
	return 0;
}