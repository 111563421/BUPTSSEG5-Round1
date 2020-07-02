#include <iostream>
#include <map>
#include <vector>

using namespace std;


int main() {
	int t; // ������
	while (cin >> t) {
		for (int round = 0; round < t; round++) {
			int n, m; // n��a����ĳ��ȣ�m��p����ĳ���
			map<int, int> p, hash;
			cin >> n >> m;
			vector<int> a;
			int temp;
			for (int i = 0; i < n; i++) {
				cin >> temp;
				a.push_back(temp);
			}
			for (int i = 0; i < m; i++) {
				cin >> temp;
				if (p.find(temp) == p.end()) {
					p[temp] = 1;
				}
			}
			// ����������
			// ��ʼ��������ð�����򲢼�¼ÿһ�ν���λ�ã������p������бȶԣ�
			for (int i = 0; i < a.size(); i++) {
				for (int j = 0; j < a.size() - 1; j++) {
					if (a[j] > a[j + 1]) {
						int temp = a[j + 1];
						a[j + 1] = a[j];
						a[j] = temp;
						if (hash.find(j + 1) == hash.end()) {
							hash[j + 1] = 1;
						}
					}
				}
			}
			// ð�ݽ�������ʼ�ȶԽ���λ��
			bool flag = false;
			for (auto i : hash) {
				if (p.find(i.first) == p.end()) {
					flag = true;
				}
			}
			if (flag) {
				cout << "NO" << endl;
			}
			else {
				cout << "YES" << endl;
			}
		}
	}

	return 0;
}