#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int maxn = 200010;//N������

vector<int> maps[maxn];
int w[maxn];
int visit[maxn] = { 0 };


int main()
{
	int n;
	cin >> n;
	for (int i = 1;i <= n;++i)
		cin >> w[i];
	//�����
	int x, y;
	//��ͼ
	for (int i = 0;i <= n;++i)
	{
		cin >> x >> y;
		maps[x].push_back(y);
		maps[y].push_back(x);
	}
	//Ȼ����Ѽ�¼����
	for (int i = 0;i < n;++i)
	{
		
	}

	system("pause");
	return 0;
}