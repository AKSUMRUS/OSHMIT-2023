#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> g;
vector<bool> used;

void dfs(int v) {
    // Помечаем вершину посещенной
    used[v] = true;

    cout << "Зашел в " << v+1 << "\n";

    // Трогаем детей
    for(auto u: g[v]) {
        // Если ребёнок не потроган
        if(!used[u]) {
            // То захожу в ребёнка
            dfs(u);
        }
    }
    // Потрогал всех детей
    // Возвращаюсь в отца
    cout << "Выхожу из " << v+1 << "\n";
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

    // Запускаю обход от вершины 0
    dfs(0);

    return 0;
}
