#include <iostream>
#include <bits/stdc++.h>
#define maxn 110
#define LL long long
using namespace std;
/*
 ���⣺����һ������a��Ȼ�����һ������p���������p�е���������3����ʾ�ĵ���������ƶ���a��Ԫ�صĵ�3��Ԫ����ô��ô�ƶ�
 �أ�Ҳ�ܼ򵥣�����3��3+1λ�ý��������ƶ������أ�û�����ơ���ôp��ʵ���Ǹ�������ЩԪ�ؿ����ƶ��������Ϊ������Ŧ�㣬
 ��ô�ƶ�Ҳ���������ˣ���ô��ĿҪ����ʲô�أ��ʣ��Ƿ���ͨ�����޴��ƶ�ʹ������a��������һ���ǵݼ����С�
 
 ������⣺ͨ���������Ƿ��֣���Ϊ���޴��ƶ���������ʵa��һ�������޴��ƶ����ˣ������������޴ε��ƶ�������Ҳ����˵����ҵ���
 ĳ��Ԫ�ص�λ�ã������ŵ���ǰ�棬��ô�м��ƶ�����Ԫ�أ�һ�������ƶ���ȥ������ԭ������Ȼ�������ջ���λ�õ��Ǹ�Ԫ�أ���
 
 ˼·�������������⣬����Ϊ������Ӧ�ÿ��Բ�ֳ����ɸ������⣬�������Ȱ�����a����С��Ԫ�����һ��Ԫ�ػ���λ�ã����ʱ��
 �����С�����Ѿ���������λ���ˣ�Ȼ������ͱ���ˣ���a��������ʣ������ѡ��һ����С�������ٴ��ŵ��������е���ǰ�棬�ظ�ִ�У�
 �������ÿ���������Ծ�λ����ô����ζ��YES����������ж��Ƿ����ƶ��Ĺ�ȥ�أ�������������˼·��
 
 �ж��Ƿ���Խ�һ���������е���СԪ���ƶ����������е�ͷ����
 1.��p�е�Ԫ�أ���һ���м���Ԫ���ڴӡ��������е�ͷ������Ԫ���±�-1����±꼯��������ǿ������Ԫ�ص�������λ���ж��ٸ�ת����Ŧ
 ���ҽ�������Ŧ������=��Ԫ�ص��±�- ������ͷ���±�ʱ����ʾ���㹻��ת��վ�������˹�ȥ��
 �����Ļ�����a��ÿ��Ԫ�ض��ж�һ�飬������һ�������ϣ��ͱ�ʾ����a�޷�ͨ��p���һ���ǵݼ����С�
 
 2.�ڶ��ַ�����ʵҲ�ǻ������˼�룬������Щ���أ�������forѭ��ģ���������λ���̣���û��ʹ��ת����Ŧ����������ʾ�Ƿ����ת�˹�ȥ��
 
 �ܽ᣺�������ַ�����ͨ������Ŀ�����������������ֶ������˵ڶ���case�ϣ�˼���˺ܾã������˱Ƚϳ���ʱ�䡣
*/
int t;
int n, m;
int a[maxn];
int p[maxn];
int index;
//�������������������a������±�startindex���±�endindex��������ڣ���С�������±겢����
int findMinIndex(int startindex,int endindex)
{
	int min = a[startindex];//��ʼ��Ϊ��һ�������±��Ӧ��ֵ
	int key = startindex;//��ʼ��Ϊ��һ�������±�
	//����a��startindex+1��endindex ͨ���Ƚ��ҵ���С�������Լ���С�����±�
	for (int i = startindex + 1;i <= endindex;++i)
		if (a[i] < min)
		{
			min = a[i];
			key = i;
		}
	//��������������������С�����±�
	return key;
}
int main()
{
	
	cin >> t;
	
	while (t--)
	{
		cin >> n >> m;
		//����
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
			//������ô���������ͷ�����ǾͲ��������
			if (index == i)
				continue;
			//��ʼ����Ŧ����
			int num = 0;
			//ͨ��������Ŧ�������ж��ܷ����͹�ȥ
			for (int j = 0;j < m;++j)
			{
				//p[j]-1��Ϊ��ת�����������ж���������ͷ���������е���СԪ��֮���ж��ٸ���Ŧ
				if (p[j] - 1 >= i&&p[j] - 1 <= index - 1)
					num++;
			}
			//�����Ŧ��������=��Ԫ�ص��±�- ������ͷ���±꣬��ô��Ȼ�������ȥ
			if (num == (index - i))
				ok = true;
			else
			{
				//������
				ok = false;
				//����Ĳ����ˣ�ֱ����̭
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
//�������������������a������±�startindex���±�endindex��������ڣ���С�������±겢����
int findMinIndex(int startindex,int endindex)
{
	int min = a[startindex];//��ʼ��Ϊ��һ�������±��Ӧ��ֵ
	int key = startindex;//��ʼ��Ϊ��һ�������±�
	//����a��startindex+1��endindex ͨ���Ƚ��ҵ���С�������Լ���С�����±�
	for (int i = startindex + 1;i <= endindex;++i)
		if (a[i] < min)
		{
			min = a[i];
			key = i;
		}
	//��������������������С�����±�
	return key;
}
int main()
{

	cin >> t;

	while (t--)
	{
		cin >> n >> m;
		//����
		for (int i = 0;i < n;++i)
			cin >> a[i];
		for (int i = 0;i < m;++i)
			cin >> p[i];
		//���մ�С���󣬰�a�е�ÿһ��Ԫ���˵�ǰ��
		for (int i = 0;i < n;++i)
		{
			//��ȡ��СԪ������
			index = findMinIndex(i, n - 1);
			//�������е�������Ԫ���Ƿ��ܷ�ͨ��p�ƶ���ȥ
			bool itcan = true;
			while (index != i&& itcan)
			{
				//�����ж�ĳ��Ԫ���Ƿ����ת�˹�ȥ
				bool ok = false;
				for (int j = 0;j <m;++j)
				{
					//�����ǰ��СԪ���±�-1��λ������������Ŧ����ô������ͬʱok��1
					if (p[j] - 1 == index - 1)
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
				//�����ǰԪ�ؿ��ԣ���ô��һ����һ��Ԫ��
				if (ok)
					continue;
				//����ֱ����̭��������
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
}
*/