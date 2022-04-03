#include <bits/stdc++.h>
using namespace std;

int main(){
    int MAX_T, t=0; cin>>MAX_T;
    while(t++<MAX_T){
        
        vector<int> minPaint(4, INT_MAX);
        for(int i=0; i<3; i++){
            int temp;
            for(int j=0; j<4; j++){
                cin >> temp;
                minPaint[j] = min(minPaint[j], temp);
            }   
        }

        int c = 0;
        for(int i=0; i<4; i++){
            int paint = min(minPaint[i], 1000000-c);
            c += paint;
            minPaint[i] = paint;
        }

        cout<<"Case #"<<t<<": ";
        if(c == 1000000){
            for(int i=0; i<4; i++) cout<<minPaint[i]<<" ";
        }else{
            cout<<"IMPOSSIBLE";
        }
        cout<<endl;
    }
}
