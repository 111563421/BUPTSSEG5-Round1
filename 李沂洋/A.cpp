#include <iostream>
#include <bits/stdc++.h>
#define maxn 110
#define LL long long
using namespace std;
int t;
int n, m;
int a[maxn];
int p[maxn];
int index;
int findMinIndex(int startindex,int endindex)
{
	int min = a[startindex];
	int key = startindex;
	for (int i = startindex + 1;i <= endindex;++i)
		if (a[i] < min)
		{
			min = a[i];
			key = i;
		}
	return key;
}
int main()
{
	
	cin >> t;
	
	while (t--)
	{
		cin >> n >> m;
		for (int i = 0;i < n;++i)
			cin >> a[i];
		for (int i = 0;i < m;++i)
			cin >> p[i];
		//���մ�С���󣬰�a�е�ÿһ��Ԫ���˵�ǰ��
		bool ok = true;
		for (int i = 0;i < n;++i)
		{
			//��ȡ��СԪ������
			index = findMinIndex(i, n - 1);
			if (index == i)
				continue;
			int num = 0;
			//ͨ��������Ŧ�������ж��ܷ����͹�ȥ
			for (int j = 0;j < m;++j)
			{
				if (p[j] - 1 >= i&&p[j] - 1 <= index - 1)
					num++;
			}
			if (num == (index - i))
				ok = true;
			else
			{
				ok = false;
				break;
			}
		}
		if (ok)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		
	}
	system("pause");
	return 0;
}

/*����
#include <iostream>
#include <bits/stdc++.h>
#define maxn 110
#define LL long long
using namespace std;
int t;
int n, m;
int a[maxn];
int p[maxn];
int index;
int findMinIndex(int startindex,int endindex)
{
int min = a[startindex];
int key = startindex;
for (int i = startindex + 1;i <= endindex;++i)
if (a[i] < min)
{
min = a[i];
key = i;
}
return key;
}
int main()
{

cin >> t;

while (t--)
{
cin >> n >> m;
for (int i = 0;i < n;++i)
cin >> a[i];
for (int i = 0;i < m;++i)
cin >> p[i];
//���մ�С���󣬰�a�е�ÿһ��Ԫ���˵�ǰ��
for (int i = 0;i < n;++i)
{
//��ȡ��СԪ������
index = findMinIndex(i, n - 1);
//�����ܷ�ͨ��p�ƶ���ȥ
bool itcan = true;
while (index != i&& itcan)
{
bool ok = false;
for (int j = 0;j <m;++j)
{
if (p[j]-1 == index - 1)
{
//����������
int temp = a[index];
a[index] = a[index - 1];
a[index - 1] = temp;
index = index - 1;
ok = true;
break;
}
}
if (ok)
continue;
else
{
itcan = false;
break;
}
}
if (!itcan)
{
cout << "NO" << endl;
break;
}
else {
cout << "YES" << endl;
break;
}


}

}
system("pause");
return 0;
}*/