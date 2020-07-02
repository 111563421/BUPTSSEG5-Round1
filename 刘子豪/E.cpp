#define E
#ifdef E
#include <iostream>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <cstdlib>
#include <ctime>
using namespace std;
/*E��*/

//��u����dfs�����cost, depth��ʾ��ʱu���������
int dfs(int u, vector<vector<int> >& graph, vector<int>& valtable, int depth, vector<int>& visited) {
    int cost = depth * valtable[u];
    visited[u] = 1;
    for (int v : graph[u]) {
        if(!visited[v])
            cost += dfs(v, graph, valtable, depth + 1, visited);
    }
    
    return cost;
}

int main() {
    //���������������е�ÿһ���㣬���ڸõ�V��ͨ��dfs���costֵ��ֱ���ҵ�����costֵ��Ӧ���Ǹ���
    //�����ε�̰�ķ���������ֵ����Ľڵ���root�ľ����Զ
    int n;
    cin >> n;

    vector<vector<int> > graph(n+1,vector<int>()); //ͼ���ڽӱ���
    vector<int> valtable(n+1,0); //���ÿ���ڵ��ֵ������ͨ���ڵ����Ų�������ֵ

    //����ڵ��ֵ
    for (int i = 1; i <= n; i++) {
        cin >> valtable[i];
    }
    //����ͼ�ıߣ������ڽӱ�
    int u, v;
    for (int i = 0; i < n - 1; i++) {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int maxcost = 0;
    for (int i = 1; i <= n; i++) {
        //��ÿһ������Ϊroot������dfs����
        vector<int> visited(n + 1, 0);
        maxcost = max(maxcost, dfs(i, graph, valtable, 0, visited));
    }

    cout << maxcost << endl;

}
#endif