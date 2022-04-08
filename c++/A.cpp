#include <bits/stdc++.h>
using namespace std;

int main(){
    int MAX_T, t=0; cin>>MAX_T;
    while(t++<MAX_T){
        int r,c; cin>>r>>c;
        r = 2*r+1; c = 2*c+1;
        vector<vector<char>> chars = {{'+', '-'}, 
                                      {'|', '.'}};
        
        cout<<"Case #"<<t<<": "<<endl;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(i<2 and j<2){
                    cout<<".";
                    continue;
                }
                cout<<chars[i%2][j%2];
            }
            cout<<endl;
        }
    }
}
