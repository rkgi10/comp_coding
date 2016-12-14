#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int jobarr[n];
		int chefjobarr[n], assjobarr[n];
		int chefjobcount=0,assjobcount=0;
		for(int i=0;i<n;i++)
		{
			jobarr[i]=0;
		}
		for(int i=0;i<m;i++)
		{
			int a;
			cin>>a;
			jobarr[a-1] = 1;
		}
		int chefsturn =1;
		for(int i=0;i<n;i++)
		{
			if(jobarr[i]==1)
			{

			}
			else
			{
				if(chefsturn)
				{
					chefjobarr[chefjobcount] = i+1;
					chefjobcount++;
					chefsturn =0;
				}
				else
				{
					assjobarr[assjobcount] = i+1;
					assjobcount++;
					chefsturn =1;
				}
			}
		}

		for(int i=0;i<chefjobcount;i++)
		{
			cout<<chefjobarr[i]<<" ";
		}
		cout<<endl;
		for(int i=0;i<assjobcount;i++)
		{
			cout<<assjobarr[i]<<" ";
		}
		cout<<endl;
	}	
	return 0;
}