#include <iostream>
#include <vector>
#include <algorithm>

// �������һ�����飨ż����Ԫ�أ���������ӣ�Ŀ��ֵΪ���ж����Ԫ�صĲ�ֵ�͡�
// Ҫ��ò�ֵ����С��
using namespace std;

int main() {
	int n; // ѧ����
	while (cin >> n) {
		vector<int> a; // skill of the i-th student
		int temp;
		for (int i = 0; i < n; i++) {
			cin >> temp;
			a.push_back(temp);
		}
		// ��������input���

		// �������ȡÿ�������ֵĲ�ֵ�����в�ֵ�Ӻͼ�Ϊ�𰸣���С��
		sort(a.begin(), a.end());
		int ans = 0;
		for (int i = 1; i < n;) {
			ans += a[i] - a[i - 1];
			i += 2;
		}
		cout << ans << endl;
	}
	return 0;
}
