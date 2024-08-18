#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[4][4]={{454, 55, 521 ,14},{11, 329 ,104, 989},{23447, 174 ,87 ,845},{25, 81, 53, 111}};

	int ele;
	cin>>ele;
	int s=0,r=-1,c=-1,z=-1,p=0,flag=0;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(a[i][j]==ele)
			{
				s=i+j;
				r=i;
				c=j;
                flag=1;
				break;
			}
		}
	}
	if(flag==0)
	{
		cout<<"Element does'nt exisist";
		return 0;
	}
	else
		 z=a[(r+s)%4][c];
	
	while(z)
	{
		 p+=z%10;
		 z/=10;
	}

	cout<<p;
	return 0;
	 
}