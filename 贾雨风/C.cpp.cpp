#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		int a[n];
		for(int j=0;j<n;j++){
			cin>>a[j];
		}
		sort(a,a+n);
		int maxcount=0;
		int temp=0;
		int repeat[n];
		for(int j=0;j<n;j++){
			repeat[j]=0;
		}
		for(int j=0;j<n;j++){
			int count=0;
			for(int k=j+1;k<n;k++){
				if(a[k]==a[j]){						//�����ظ��ĸ��� 
					count++;
					j=k-1;
				}	
			}
			if(count>maxcount){					
				maxcount=count+1;
				temp=j;
			}
			repeat[j]=count+1;					//����ÿ�����ظ��������ܸ��� 
		}
		int sum=0;
		int tag=0;
		for(int j=0;j<n;j++){					//�����ܸ����� 
			sum=repeat[j]+sum;
			if(repeat[j]!=0){
				tag++;							//��һ���ظ��ľͼ�1 
			}
		}
		int Nrepeat=n-sum+tag;					//������������治�ظ������ָ��� 
		if(Nrepeat==maxcount){					//�����Ϊ���ֵ-1 
			cout<<maxcount-1<<endl;
		}
		else if(Nrepeat<maxcount){				//���ظ�������С��������ظ������� 
			cout<<Nrepeat<<endl;
		}
		else{
			cout<<maxcount+1<<endl;				//�ظ���С������ظ���+1 
		}
	}
}
