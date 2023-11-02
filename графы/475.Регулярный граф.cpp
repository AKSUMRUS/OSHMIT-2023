#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> g;
vector<bool> used;
int ans = -1;
bool isTrue = true;

void dfs(int v) {
    int cnt = 0;
    used[v] = true;

    for(auto u: g[v]) {
        if(!used[u]) {
            dfs(u);
        }
        ++cnt;
    }

    if(ans == -1) {
        ans = cnt;
    } else if(ans != cnt) {
        isTrue = false;
    }  
}


int main() {
    
    int n,m;
    cin >> n >> m;

    g.resize(n);
    used.resize(n, false);

    for(int i = 0;i < m;i++) {
        int a,b;
        cin >> a >> b;
        --a;
        --b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    
    for(int i = 0; i < n;i++) {
        if(!used[i]) {
            dfs(i);
        }
    }

    if(isTrue) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
