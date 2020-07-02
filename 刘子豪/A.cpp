#define A
#ifdef A
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
/*A��*/

const int maxn = 105;

int main() {
    //����t
    int t;
    cin >> t;
    while (t--) {
        //������������
        int n, m;
        cin >> n >> m;
        vector<int> a;
        set<int> p;
        for (int i = 0; i < n; i++) { //��������a������
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        for (int i = 0; i < m; i++) { //���뼯��p������
            int temp;
            cin >> temp;
            p.insert(temp);
        }

        //��a����ģ��ð��������������Ԫ�صĽ�����Ҫ����p���������
        for (int i = n - 1; i >= 0; i--) {
            for (int j = 1; j <= i; j++) {
                if (p.find(j) != p.end() && a[j - 1] > a[j]) {
                    //���p���������[j]��[j-1]���н���������н���
                    int temp = a[j - 1];
                    a[j - 1] = a[j];
                    a[j] = temp;
                }
            }
        }

        //�������֮���a�����Ƿ�Ϊ��������
        bool ans = true;
        int prev = 0;
        for (int a0 : a) {
            if (prev > a0) {
                ans = false;
                break;
            }
            prev = a0;
        }
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
}
#endif