#include<iostream>
#include<algorithm>
#include<string.h>
#include<queue>
using namespace std;
//����������洢ÿһ��λ��,����x,y����,�Լ����������Ƿ��а��� 
typedef struct Node{
	int x;
	int y;
	int c;//�Ƿ��а��� 
};
queue<Node> Q;//���� 
void DFS(int x,int y,int a,int sum);//���� 
void finish();
int t;//������������ 
int n[1005];//ÿ�����������°����ĸ��� 
int maxx[105];//�ò���������,�������ﵽ�����xֵ 
int maxy[105];// �ò���������,�������ﵽ�����yֵ 
int map[105][1005][1005];//�洢ÿ�����������µĵ�ͼ��Ϣ,���������а��� 
int mark[105][1005][1005];//���ÿ������������,�������߹���λ��,��ֹ�ظ� 
char dir[105][1005][1005];//ÿ������������,�����˵���ĳ�����õķ��� 
/*
˼·:
������ҵ��뷨��������,Ҳ����BFS,DFSѡ��һ��,��������BFS
BFS 
�������������Ž�,�Ҿ���������BFS,����д��һ�뷢��������,�ڶ����������������ȥ
���ڵڶ�����������,����������,Ȼ������,���ұߵĽ����չ,������,�������յ�
 ��Ȼ�������յ�,����ʵ���ϲ�û���Ѽ����㹻�İ���....����������
�ϻ�˵��һ��, ��ʵ���Ǹо�BFS����,��������BFS����������
DFS
BFS����,����DFS
DFSд����,ҲӦ������ȷ��,���ж��Ƿ����Ѽ����㹻�İ���
��������DFS�������Ǻܶ�����,�һ�Ҫ����������һ�����ŵĳ���
������������ѡ,��û��ʱ��д��,ֻ������ 

 
*/ 
int main()
{
	cin>>t;
	memset(map,0,sizeof(map));
	for(int i=1;i<=t;i++)//����ȫ�������������洢 
	{
		
		maxx[i]=0;
		maxy[i]=0;
		cin>>n[i];
		for(int j=0;j<n[i];j++)
		{
			int x,y;
			cin>>x;
			cin>>y;
			if(x>maxx[i])
			maxx[i]=x;
			if(y>maxy[i])
			maxy[i]=y;
			map[i][x][y]=1;
		}
		 
	}
	 
	/*
	for(int i=1;i<=t;i++)
	{
		
		for(int j=0;j<=20;j++)
		{
			for(int k=0;k<=20;k++)
			cout<<map[i][j][k];
			cout<<endl;
		}
		 cout<<endl;
	}
	*/
	for(int i=1;i<=t;i++)//DFS 
	{
		
		mark[i][0][0]=1;
		DFS(0,0,i,0);//DFS���� 
	} 
	for(int i=1;i<=t;i++)//BFS,�տ�ʼ����BFS��,����д��һ�뷢���ƺ�����ô�� 
	{					//�͸���DFS�� 
		while(!Q.empty())//����ϸ���������ʱ,������Ľ�� 
		Q.pop();
		Node node;//��������� 
		node.x=0;
		node.y=0;
		node.c=0;
	} 
	
}
void DFS(int x,int y,int a,int sum)//��ǰλ�õ�x,y����,aΪ��Ӧ�Ĳ�������,
									//sumΪ�ռ��İ������� 
{
	//cout<<"x is "<<x<<" y is "<<y<<endl;
	if(x==maxx[a]&&y==maxy[a]&&sum<n[a])//�������߽粢�һ�û�ҵ��㹻�İ��� 
	{									//˵�������ռ�ʧ���� 
		cout<<"NO"<<endl;
		return;
	}
	if(map[a][x][y]==1)//�����ǰλ�����а���,sum++���м��� 
	sum+=1;
	if(sum==n[a])//����ռ��İ��������ﵽҪ��,˵�������ռ��ɹ� 
	{
		//cout<<a<<":"<<endl;
		finish();
		return;
	}
	
	int direction[2][2]={1,0,0,1};//R��U 
	for(int i=0;i<2;i++ )//������,������ 
	{
		int nextx=x+direction[i][0];//�¸�λ�õ�x���� 
		int nexty=y+direction[i][1];//�¸�λ�õ�y���� 
		if(nextx>maxx[a]+1||nextx<0||nexty>maxy[a]+1||nexty<0) 
		continue;//�ڱ߽紦,���ܼ����� 
		if(mark[a][nextx][nexty]==0)//�¸�λ��û�б��߹� 
		{
			if(i==0)
			dir[a][nextx][nexty]='R';//��¼�ϸ�λ�õ����λ�����õķ��� 
			else
			dir[a][nextx][nexty]='D';//��¼�ϸ�λ�õ����λ�����õķ��� 
			mark[a][nextx][nexty]=1;//�¸�λ�ô��ϱ��,�ѱ��߹� 
			DFS(nextx,nexty,a,sum);//���¸�λ�� 
			mark[a][nextx][nexty]=0;//����,�ѱ����� 
		}
	}
	
	
}
void finish()
{
	cout<<"YES"<<endl;//�ɹ��ռ������Ĵ�����,����ûʱ��д�� 
}
void  BFS(int a)
{
	while(!Q.empty())//Q���յ������,ÿ�δӶ�ͷ����һ�����,�����ݸýڵ�� 
	{				//�ұ߻����ϱ߽�����չ,�������Ҫ��,�����
					//����.....�о�����ⲻ������д,��ûд��,����DFS�� 
		Node node;
		node=Q.front();
		Q.pop();
		int x=node.x;
		int y=node.y;
		int c=node.c;
	}
	
}
