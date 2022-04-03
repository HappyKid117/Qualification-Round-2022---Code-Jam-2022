#include <bits/stdc++.h>
using namespace std;

int main(){
    int MAX_T, t=0; cin>>MAX_T;
    while(t++<MAX_T){
        int n; cin>>n;
        vector<int> S(n);
        for(int i=0; i<n; i++){
            cin>>S[i];
        }

        sort(S.begin(), S.end());
        int ans=0;
        for(int i=0; i<n; i++){
            if(ans+1<=S[i]) ans++;
        }
        cout<<"Case #"<<t<<": "<<ans<<endl;
    }
}
