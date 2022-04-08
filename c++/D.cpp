#include <bits/stdc++.h>
using namespace std;
#define int long long int

int ans;
int N = 1e5 + 7;
vector<int> values(N, 0);
vector<int> pointers(N, 0);
vector<vector<int>> G(N);

int getAns(int node){

    priority_queue<int> q;
    for(int i=0; i<G[node].size(); i++){
        q.push(-getAns(G[node][i]));
    }

    int m = values[node];
    if(!q.empty()){
        m = max(m, -q.top());
        q.pop();
    }

    while(!q.empty()){
        ans += -q.top();
        q.pop();
    }

    return m;
}

signed main(){
    int MAX_T=1, t=0;
    cin>>MAX_T;
    while(t++<MAX_T){
        ans = 0;
        int n; cin>>n;

        for(int i=1; i<=n; i++){
            cin>>values[i];
        }

        for(int i=1; i<=n; i++){
            cin>>pointers[i];
            G[pointers[i]].push_back(i);
        }

        ans += getAns(0);

        for(int i=0; i<=n; i++) G[i].clear();
        
        cout<<"Case #"<<t<<": "<<ans<<endl;

    }
}
