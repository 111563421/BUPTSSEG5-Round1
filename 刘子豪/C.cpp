#define C
#ifdef C
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
/*C��*/


/*
	����û��ʵ�������Ĵ��룬����д�������б߽����ݵĴ�����д��һ�������������Ҫ˼·
*/

double minDistance(int a, int b, int c, int x1, int x2, int y1, int y2) {
    //�߽�����1����x1=x2��y1=y2ʱ�����·��һ��������avenue
    if (x1 == x2) {
        return abs(y1 - y2);
    }
    if (y1 == y2) {
        return abs(x1 - x2);
    }

    //�߽�����2����a��b�е�ĳһ��Ϊ0����ô���·��һ��������avenue
    if (a == 0 || b == 0) {
        return abs(y1 - y2) + abs(x1 - x2);
    }

    //һ������£���A��B����Ϊ�Խǵ㻭һ�����Σ����Ը���avenue����αߵĽ����������
    //����������ʱ�����ݽ������ڵı߲�ͬ����6�����������4������¿���ͨ����б�ߵõ����̵ľ���

    return 0;
}

int main() {
    //�������б�ߵĻ���̵ľ����Ϊabs(x1-x2)+abs(y1-y2)
    int a, b, c;
    cin >> a >> b >> c;
    int x1, x2, y1, y2;
    cin >> x1 >> x2 >> y1 >> y2;
    double ans = minDistance(a, b, c, x1, x2, y1, y2);
    cout << ans << endl;
    return 0;
}
#endif