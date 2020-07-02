#include <iostream>
#include <vector>

// �������������ӣ�˳���ܱ䣩�����Ƿ�����Ծ���Ӷ԰�
// ����ǰ�����������ƣ�һ�ξ��룬ÿ������ϱ������һ��������Ծ�ĳ��ȣ�

using namespace std;

int main() {
    int n, m, d;
    cin >> n >> m >> d;
    // n : �ӵĿ��
    // m : ������Ŀ
    // d : ��Զ��Ծ����
    vector<int> banks; // ��¼���ӳ���
    int temp;
    int banks_sum = 0;
    // ���ӳ������루ͬʱ�����ܳ���
    for (int i = 0; i < m; i++) {
        cin >> temp;
        banks.push_back(temp);
        banks_sum += temp;
    }
    // ��ʼ����ÿ������Զ��Ծ���룬����������Զ��Ծ���븲�����ص㣬���ܹ���Ծ��ȥ��
    int pos = 0;     // ��ʼλ��
    int end = n + 1; // �յ�
    for (int i = 0; i < m; i++) {
        pos += d;    // ����
        pos += banks[i] - 1; // �����ľ������Ҳ�
    }
    // ��ʱ�Ѿ����������һ��ľ������Ҳ࣬��ʱ�п��ܣ�
    // 1���Ѿ������յ㣻 2����δ�����յ�
    // ��ʱ����������һ�Ρ�
    pos += d;
    if (pos >= end) { // �����Զ���볬���յ㣬˵�����Ե���
        cout << "YES" << endl;

        vector<int> ans(n, 0); // ģ�����
        int now = 0;           // ��ǰλ��
        // ��Ӧÿһ��ľ���������
        for (int i = 0; i < m; i++) {
            int left = end - 1 - banks_sum; // �ж�ʣ�����
            if (now + d - 1 <= left) now += d; //����ӵ�ǰλ������Զ���벻����ʣ����룬��Ӹ�λ�ÿ�ʼ����ľ��
            else now = left + 1; // ��֮����˵��ʣ�������κ�λ�ö��ܵ����ʣ�������ұ�һ����ʼ��
            // ����
            for (int j = now - 1; j < now + banks[i] - 1; j++) { // ���ں��棬now���ڵ�����ʵ���Ǵ�1��ʼ�����ģ��������Ǵ�0��ʼ������Ҫ=1
                ans[j] = i + 1;
            }
            banks_sum -= banks[i]; // ����ʣ��ľ���ܳ�
            now += banks[i] - 1;   // ����λ�ã���������ģ������ң�
        }

        // ����ģ��������ϣ��������
        for (int i = 0; i < ans.size(); i++) {
            std::cout << ans[i] << " ";
        }

        cout << endl;
    }
    else { // ��Ȼ�޷������յ㣬GG��
        cout << "NO" << endl;
    }
    return 0;
}
