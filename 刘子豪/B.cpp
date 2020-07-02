#define B
#ifdef B
#include <iostream>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;
/*B��*/

const int maxn = 105;

//��posλ��Ϊ��㣬����ƽ̨plat[i]������ƽ̨β�˵�λ��
int putPlat(vector<int>& ans, vector<int>& plat, int i,int pos) {
    int platlength = plat[i];
    int p;
    for (p = 0; p < platlength; p++) {
        ans[p + pos] = i + 1;
    }
    return p + pos - 1;
}

int main() {
    //̰�ķ�
    //��޵ķ�ƽ̨������ÿ��ƽ̨֮������ľ����Ϊd���������������������ô�����ΪNO

    //��������
    int n, m, d;
    cin >> n >> m >> d;
    vector<int> plat;
    for (int i = 0; i < m; i++) {
        int temp;
        cin >> temp;
        plat.push_back(temp);
    }

    //1 ���ȣ��ж��Ƿ���ڿ��еķ�ƽ̨����
    //����ʱ�������������*(d-1)+ƽ̨����֮��>=n�����м����=ƽ̨��+1
    int sum = 0;
    for (int p : plat) {
        sum += p;
    }
    if ((m + 1)*(d - 1) + sum >= n) {
        cout << "YES" << endl;

        //2 ���һ�����ʵ�ƽ̨����
        //���йؼ���ƽ̨������С�ķ���Ҫƽ��
        int seanum = n - sum;
        int intervalnum = m + 1;
        int t1 = seanum / intervalnum;
        int t2 = seanum % intervalnum;

        vector<int> ans(n, 0);
        int p = -1;
        for (int i = 1; i <= m; i++) {
            //�ȿռ���λ�ã��ٷ�ƽ̨plat[i-1]
            int interval_length = t1;
            if (i <= t2)
                interval_length++;
            p += interval_length + 1;
            p = putPlat(ans, plat, i - 1, p);
        }

        //������ɣ���������
        for (int i : ans) {
            cout << i << " ";
        }
        cout << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
#endif