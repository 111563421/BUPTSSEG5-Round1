#include<iostream>
#include<algorithm>
using namespace std;
int n;
int a[105];//a���������洢���� 
/*
˼·:
����ûʲô�ر��,��ΪҪ�������С,�Ͱ������������������ͬ����С
����Ļ�,�Ḷ������Ĵ���
Ӧ����̰�ĵ�˼��
���������,ÿ����Ԫ�����ֵ���� 
*/ 
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	sort(a+1,a+1+n);//������a���п������� 
	int sum=0;
	for(int i=1;i<=n;i+=2)//��1��ʼ,ÿ��������һ���ж� 
	{
		int k=abs(a[i]-a[i+1]);//��������������ľ���ֵ 
		sum+=k;//�ӵ�sum�� 
	}
	cout<<sum;
}
