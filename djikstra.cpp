#include <bits/stdc++.h>

#define ar array
#define ll long long
#define inf 999

using namespace std;

int n;
int t[100][100];

int djikstra(int s, int e){
    int dist[n];
    bool visited[n];
    int i, j, v;

    //install from dist[x]=infinite
        for (int i=1; i<=n; i++) {
            dist[i] = inf;
        }
    //install from visited[x]=false
        for (int i=1; i<=n; i++) {
            visited[i] = false;
        }

    dist[s]=0;
    while(true) {
        int u = -1;
        int minDist = inf;
        for (int i=1; i<=n; i++) {
            if ((visited[i] == false)&& (dist[i]<minDist)) {
                u = i;
                minDist = dist[i];
            }
        }
    }
    //end break
    if ((u==-1)||(dist[u]==inf)){
        break;
    }

}

void solve() {
    
}

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (--t)
        solve();    
}
