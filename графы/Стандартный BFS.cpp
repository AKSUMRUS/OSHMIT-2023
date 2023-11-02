#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> g;
vector<bool> used;

void bfs(int v) {
    // Объявляем очередь
    queue<int> q;
    used[v] = true;
    // Добавляем в очередь изначальную вершину
    q.push(v);

    // Пока в очереди кто-то стоит, идем по ней
    while (!q.empty()) {
        int u = q.front();
        // Берём первого из очереди
        cout << "Вошел в " << u+1 << "\n";
        // Удаляем первого из очереди
        q.pop();
        // Перебираем его детей
        for(auto y: g[u]) {
            if(!used[y]) {
                // Трогаем непотроганных
                cout << " Добавил " << y+1 << " в конец\n";
                // Добавляем потроганных в конец очереди
                q.push(y);
                // Помечаем, чтобы его больше не трогали
                used[y] = true;
            }
        }

        cout << "Вышел из " << u+1 << "\n";
    }

}

int main() {
    
    int n,m;
    cin >> n >> m;

    g.resize(n);
    used.resize(n, false);
    
    // Вводим рёбра
    for(int i = 0;i < m;i++) {
        int a,b;
        cin >> a >> b;
        --a;
        --b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    bfs(0);

    return 0;
}
