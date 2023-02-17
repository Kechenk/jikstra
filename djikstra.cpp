#include <stdio.h>
#include <stdbool.h>
#include <iostream>

#define inf 9999

using namespace std;

int n;
int table[100][100];

int djikstra (int start, int end) {
    int dist[n];
    bool visited[n];
    int i, j, v;

    for (int i=1;i<=n;i++){
    dist[i]=inf;
    }

    for (int i=1;i<=n;i++){
    visited[i]=false;
    }

    dist[start]=0;
    while (true) 
    {
        int u=-1;
        int minDist=inf;
        //
        for (int i=1;i<=n;i++){
            if((visited[i]==false)&&(dist[i]<minDist)){
                u=1;
                minDist=dist[i];
            }
        }
        //
        visited[u]=true;
        //
        for(int v=1;v<=n;v++){
            if(table[u][v]!=0){
                if(dist[v]>dist[u]+table[u][v]){
                    dist[v]=dist[u]+table[u][v];
                }
            }
        }
    }
    return dist[end];
    
}

int main() {
    int start, end;
    int i, j;
    cout << "Enter Node" << endl;
    cin >> n;
    cout << "Enter node but in matrix" << endl;
    //
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cin >> table[i][j];
        }
    }

    int ans=0, x;
    while(ans==0) {
        cout << "Enter starting Node" << endl;
        cin >> start;
        cout << "Enter last Node" << endl;
        cin >> end;
        //entering djikstra
        cout << "Minimal distance from node " << "to node\n" << start << end << djikstra(start,end);

        repeat:
        cout << "Do you want to start again ?(y/n)" << endl;
        cin >> x;
        if (x=='y'||x=='Y'){
            ans=0;
        }else if(x=='n'||x=='N'){
            cout << "See ya later" << endl;
            ans=1;
        }else{
            cout << "Input is not expected" << endl;
            goto repeat;
        }
    }
    return 0;
}
