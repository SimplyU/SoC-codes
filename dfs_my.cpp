#include<bits/stdc++.h>
using namespace std;

void dfs (int node,vector<vector<int>> &adj,vector<int>&visited,vector<int>&arrival,vector<int>&parent,int &time_counter){
    arrival[node] = time_counter;
    time_counter++;

    for (auto i: adj[node]){
        if (!visited[i]){
            visited[i]=1;
            parent[i]= node;
            dfs(i,adj,visited,arrival,parent,time_counter);
        }
    }
}

int main (){
int n,m;
cin >> n >> m; // n denotes vertices and m denotes edges

int u,v;
vector<vector<int>> adj (n,vector<int>(0));

for (int i=0;i<m;i++){
    cin >> u >> v;
    u--;v--;
    adj[u].push_back(v);
    adj[v].push_back(u);
}

vector <int> visited (n,0);
vector <int> arrival (n,0);
vector <int> parent (n,0);

int time_counter = 0;

for (int i=0;i<n;i++){
    if (!visited[i]){
        visited[i]=1;
        dfs(i,adj,visited,arrival,parent,time_counter);
        parent[i]=-1;
    }
}
for (int i=0; i<n; i++) {
        cout<<i+1<<' '<<arrival[i]<<' '<<parent[i]+1<<"\n";
    }
return 0;
}