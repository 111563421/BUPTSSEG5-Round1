#define F
#ifdef F
#include <iostream>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
/*F��*/

struct Node {
    int x;
    int y;
    Node(int x,int y):x(x),y(y){}
};


int main() {
    //˼·���԰�����Ʒ����Щ�������������򣬻����˰���˳���ƶ�����Щ����ȡ����Ʒ
    //�����һ����Ʒ��Ҫ����������������ƶ�������ΪNO
    //�ƶ�ʱ��������������

    //����ȡ��������Ʒ������:������֮��������У�������������λ�õ�������A��B, A.x<=B.x && A.y<=B.y
	
	/*
	����û���ü�д���򣬵����Ѿ���������˼·��

	1. �������е�����꣬�ŵ�һ������nodes�У�������x���ֵ��С������������
	2. �ж�����������Ƿ�����������A[i].x<=A[i+1].x && A[i].y<=A[i+1].y
	3. �������������2������������ΪNO
	4. ����������������(0,0)��ʼ������nodes�����е�˳��ȡ��Ʒ
	5. ��(x0,y0)��(x1,y1)���ƶ�����������(x1-x0)����������(y1-y0)��
	
	
	*/
    return 0;
}
#endif