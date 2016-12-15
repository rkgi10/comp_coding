#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;
long long int maxi(long long int a, long long int b)
{
	if(a>=b)
		return a;
	else
		return b;
}
int main()
{
	int n;
	cin>>n;
	long long int budgets[n];
	long long int maxrevenue = INT_MIN;
	for(int i=0;i<n;i++)
	{
		long long int a;
		cin>>a;
		budgets[i] = a; 
	}
	sort(budgets,budgets+n);
	for(int i=0;i<n;i++)
	{
		long long int revenue = budgets[i]*(n-i);
		maxrevenue = maxi(maxrevenue,revenue);
	}
	cout<<maxrevenue<<endl;
	return 0;
}