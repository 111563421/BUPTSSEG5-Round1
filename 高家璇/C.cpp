#include <stdio.h>
struct carray{
	int number;
	int count;
};
//��ʦ������ҵ�˼·���ҳ�ÿһ��test���ظ���������������һ���ж��ٲ�ͬ�������Ƚ�������С��
//˭��С�𰸾���˭�������ͬ���1���Ǵ𰸣�ʾ����test���ˣ�����OJ������
//��ʦ�Ҳ�֪����������Բ��ԣ��ҵ�����ǣ���һ�鲻�����ظ����֣��ڶ�����붼��һ�������� 
int main(){
	int count;
	int ans[10000];
	scanf("%d",&count);
	int i;
	for(i=0;i<count;i++){
		int get;
		scanf("%d",&get);
		int s;
		int array[10000];
		int tmp[10000];
		struct carray countarray[10000];
		
		for(s=0;s<get;s++){
			scanf("%d",&array[s]);
		}
		int gg;
		bool isHave=false;
		for(s=0;s<get;s++){
			int l;
			for(l=0;l<gg;l++){
				if(array[s]!=tmp[l])
				{
					isHave=false;
				}else{
					isHave=true;
					break;
				}
			}
			if(!isHave)
			{
			tmp[gg]=array[s];
			gg++;
		}
		}
		isHave=false;
		int mm=0;
		for(s=0;s<get;s++){
			int l;
			bool fin=true;
			for(l=0;l<mm;l++){
				if(array[s]!=countarray[l].number)
				{
					isHave=false;
				}else{
					countarray[l].count=countarray[l].count+1;
					fin=false;
				}
			}
			if((!isHave)&&fin)
			{
			countarray[mm].number=array[s];
			countarray[mm].count=1;
			mm++;
		}
		}
		int max=0;
		for(s=0;s<mm;s++){
			if(countarray[s].count>=max){
				max=countarray[s].count;
			}
		}
		if(max>gg){
			ans[i]=gg;
		}
		if(max<gg)
		{
			ans[i]=max;
		}
		if(max==gg){
			ans[i]=max-1;
		}
			int r;
		for(r=0;r<=get;r++){
			array[r]=0;
			tmp[r]=0;
			countarray[r].count=0;
			countarray[r].number=0;
			s=0;
			get=0;
			gg=0;mm=0;
		}

	}
	for(i=0;i<count;i++){
		printf("%d\n",ans[i]);
	}
}
