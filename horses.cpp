#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		long long int mindiff = INT_MAX;
		sort(arr,arr+n);
		for(int i=n-1;i>0;i--)
		{
			long long diff = arr[i] - arr[i-1];
			if(mindiff>diff)
			{
				mindiff = diff;
			}
		}
		cout<<mindiff<<endl;

	}
	return 0;
}