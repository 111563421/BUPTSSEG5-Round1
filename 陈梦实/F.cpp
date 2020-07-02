#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
// ����Ҫ������µ������ϵİ�����ֻ�����ƺ����Ƶ�������ҵ�һ��·��
// �������·���ж��������ա�lexicographically�������ҵ���С·
// ����������ַ�����׼�ȽϷ�����һ����ͬ���ַ����Ƚ���asciiֵ
// ��ΪR��asciiֵС��U�����ԣ��������ҵ�ʱ�����������

using namespace std;

// λ����Ϣ
struct position {
    int x;
    int y;
    position() {
        x = 0;
        y = 0;
    }
};

// ���ڰ���������Ӧ���Ȱ�����˳���ٰ�����˳��
// ���ڵ�һ��sort��x�����������
bool cmpx(position& p1, position& p2) {
    if (p1.x < p2.x) {
        return true;
    }
    else {
        return false;
    }
}
// ���ڵڶ���sort��y�����������
bool cmpy(position& p1, position& p2) {
    if (p1.y < p2.y) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int t; // ������
    while (cin >> t) {
        for (int iii = 0; iii < t; iii++) {
            int n; // ������
            cin >> n;
            vector<position> packages;
            for (int i = 0; i < n; i++) {
                position a;
                cin >> a.x >> a.y;
                packages.push_back(a);
            }
            // ���а����������

            // ��������Խ�������µİ������ȼ�Խ��
            sort(packages.begin(), packages.end(), cmpx);
            sort(packages.begin(), packages.end(), cmpy);

            // ����ÿ�������������ң�������
            string ans;   // ·��
            position now; // ������λ��
            int i;
            for (i = 0; i < n; i++) {
                ;
                position target = packages[i]; // ��ȡ��һ��Ŀ��
                // �����һ��Ŀ���ڵ�ǰλ�õ������²࣬˵���Ҳ�����ĿҪ��·��
                if (now.x > target.x || now.y > target.y) {
                    cout << "NO" << endl; // GG
                    break;
                }
                // ������
                while (now.x < target.x) {
                    now.x += 1;
                    ans += "R";
                }
                // ������
                while (now.y < target.y) {
                    now.y += 1;
                    ans += "U";
                }
                // ������Ŀ��λ�ã����һ����������ʼ��ȡ��һ������
            }
            if (i == n) { // ���ȡ�������а���
                cout << "YES" << endl;
                cout << ans << endl; // ���·��
            }
        }
    }
    return 0;
}
