#include<bits/stdc++.h> 
using namespace std;
//对前 10 个自然数(0 ~ 9)的阶乘存入表
//以免去对其额外的计算
const int fact[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
int main()
{
	string s;//全排列 
	cin>>s;
	int rank=0,n;
	n=s.length();
	int a[n+1];
	for(int i=0;i<n;i++)
	a[i]=s[i]-'0'; 
	for(int i=0;i<n;i++)
	{
		int cnt=0;// 在i之后，比i还小的还有几个 
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			cnt++;
		}
		rank+=cnt*fact[n-i-1];
	}
	//全排列之前有多少个 
	cout<<rank+1<<endl;
	return 0;
}
/*
例如2341，所求字典序rank=0 
1:第一位是2，那么第一位是1的都在前面，有rank+=1*3！；
2：第二位是3，第一位已经确定是2，那么比3小的就只有1，所以
第二位是1的排在前面，有rank+=1*2！；
.......
总rank=1*3！+1*2！+0*1！+0 *0！； 
*/
//字典序 k[n]*(n-1)!+k[n-1]*(n-2)!+k[n-2]*(n-3)!+....+k[1]*0! +1
