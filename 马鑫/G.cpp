
//VS2017���л�������Ҫ�Ӵ�ͷ�ļ�
//#include "pch.h"


/*
	����G
*/

//#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;


int main()
{
	//�ֱ��¼ѧ����������ÿ��ѧ���ļ��ܵ㡢���ܵ�֮�����Ϣ
	int n, a[101], b = 0;
	//������������
	int i, j, k;

	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	//��������
	sort(a + 1, a + n + 1);

	for (j = 1; j < n; )
	{
		b += a[j + 1] - a[j];
		j += 2;
	}

	cout << b << endl;

	return 0;
}