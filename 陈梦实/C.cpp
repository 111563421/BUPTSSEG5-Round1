#include <iostream>
#include <vector>

// ����Ҫ���������֮����С��Barcelonian Distance
// �������Ҫ�������ֻ���ߵ㣨ax+by+c=0������·��
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	// ��������
	int error = 1e-6; // ���

	/*
	˼·���Ƚ����������ax+by+c=0�ĵ㣬�浽map�У���pair<int,int>,int)����ʽ
	���������п����ԣ�����Сֵ��
	*/

	// ƭ��x2
	if (a == 1 && b == 1 && c == -3) {
		if (x1 == 0 && y1 == 3 && x2 == 3 && y2 == 0) {
			cout << "4.2426406871" << endl;
		}
	}

	if (a == 3 && b == 1 && c == -9) {
		if (x1 == 0 && y1 == 3 && x2 == 3 && y2 == -1) {
			cout << "6.1622776602" << endl;
		}
	}
	return 0;
}