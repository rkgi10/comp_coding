#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	long long int n,k,count=0;
	scanf("%lld %lld",&n,&k);
	while(n--)
	{
		long long int t;
		scanf("%lld",&t);
		if(t%k==0)
		{
			count++;
		}
		else
		{
			//do nothing
		}
	}
	printf("%lld\n",count);
	return 0;
}