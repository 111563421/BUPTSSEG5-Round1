#include<bits/stdc++.h>

using namespace std; 
const int maxn = 10010;
int step;
int m;
int n;
int dfs(int s, int step)
{
	if(s>m)
		return -1;
	if(s==m)
		return step;
	int temp = dfs(s*2, step+1);//��2 
	if(temp!=-1)return temp;
	else  // ��*2�߲�ͨʱ����*3 
		temp = dfs(s*3,step+1);
	return  temp;
}
int main()
{
	while(cin >> n >> m)
	{
		step=0;
		if(m==n)
			step = 0;
		else if(m%n!=0)
			step=-1;
		else if(m%n==0) 
			{
			int tmp = m/n;
			if(tmp%2!=0 & tmp%3!=0)
				step = -1;
			else
				step=dfs(n,0);
			}
		
		
		cout << step <<endl;
	}
	
}
