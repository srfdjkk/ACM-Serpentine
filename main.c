#include <iostream>
#include <math.h> 
#include <iomanip>
#include <string.h>
using namespace std;
#define num 101
int a[num][num];
int main()
{
	int n,count,x,y;
	cin>>n;
	memset(a,0,sizeof(a));
	count = a[x=0][y=n-1]=1;
	//给数组赋值
	while(count < n*n)
	{
        while(x+1<n && !a[x+1][y]) a[++x][y]=++count;
        while(y-1>=0 &&!a[x][y-1]) a[x][--y]=++count;
        while(x-1>=0 &&!a[x-1][y]) a[--x][y]=++count;
        while(y+1<n &&!a[x][y+1])  a[x][++y] =++count;
	}
	//输出二维数组
	for(int i=0;i<n;i++)
	{	for(int j=0;j<n;j++)
		{
			cout<<setw(5)<<a[i][j];
		}
		cout<<"\r\n"<<endl;
	}
}
