#include<bits/stdc++.h>						//����ͨ��ǰ������������ 
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int count=0;
	if(n==m){								//�ж�������0 
		cout<<0<<endl;
	}
	else{
		if(m%n!=0){							//���m����n�ı��� ���޷����� 
			cout<<-1<<endl;
		}
		else{
			int temp=m/n;				//ȡ��2��3��ɵı��� 
			for(int i=0;i<1;i--){
				if(temp/3==0){			//���ϳ���3������3�ĸ��� 
					break;
				}
				if(temp%3==0){
					temp=temp/3;
					count++;
				}
				else{
					break;
				}
			}
			for(int i=0;i<1;i--){	//���ϳ���2������2�ĸ���
				if(temp/2==0){
					break;
				}
				if(temp%2==0){
					temp=temp/2;
					count++;
				}
				else{
					break;
				}
			}
			cout<<count<<endl;	//��������2��3һ���ĸ��� 
		}
	}
}
