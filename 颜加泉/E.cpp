#include<cstdio>
#include<algorithm>
#include<iostream>
#include <vector>
#include <map>
const int maxn = 2e5;
const int INF =1e9;
//#include<bits/stdc++.h>
using namespace std;
int a[maxn];
int visit[maxn] = { false };
struct e{
	int x;
	int y;

}E[maxn];
bool cmp(pair<int, int>* p1, pair<int, int>* p2) {
	return p1->second>p2->second;
}
struct node {
	node* next;
	int v;
};


int main() {
	int n;
	scanf_s("%d",&n);
	
	vector<pair<int, int>*> mm;
	for (int i = 0; i < n; i++) {
		scanf_s("%d",&a[i]);
		pair<int, int>* p=new pair<int,int>(i, a[i]);
		mm.emplace_back(p);
	}
	sort(mm.begin(), mm.end(), cmp);//����value�Ӵ�С����
	int x, y;
	for (int i = 0; i < n;i++) {
		scanf_s("%d%d", &x, &y);
		E[i].x = x;
		E[i].y = y;
	}
	//Ҷ�ӽڵ�ֵ��С�����ڵ�ֵ�������������Ϊ���ڵ㣬�������ڵ�������Ϊ������
	for (int i = 0; i < n; i++) {
		if (visit[i]) {
			node* n = new node();

		}


	}

	


	return 0;
}