#include <iostream>
#include <vector>

// �������⣺����һ������a��һЩ���䡣
// Ӧ��һ�����䣺�����������λ�õ�Ԫ��ȫ����һ��

// ��ĿҪ�󣺸���һ�������һЩ���䣬Ӧ����Щ����ʹ����������ֵ����Сֵ�Ĳ�ֵ���
// ������У�
// 1�����ܵ��������ֵ����Сֵ��ֵ����ֵ
// 2��Ӧ���˶��ٸ��������ﵽ�����ֵ��
// 3��λ��

using namespace std;

int main() {
	int n, m;
	while (cin >> n >> m) {
		vector<int> a;
		vector<pair<int, int>> q;
		int temp;
		for (int i = 0; i < n; i++) {
			cin >> temp;
			a.push_back(temp);
		}
		int l, j;
		for (int i = 0; i < m; i++) {
			cin >> l >> j;
			q.push_back(make_pair(l, j));
		}
		// ��������input���

	}

	return 0;
}