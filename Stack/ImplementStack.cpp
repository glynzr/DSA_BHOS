#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli n;
    cin>>n;
    stack <int> S;
    for(lli i=0;i<n;i++){
        int command;
        cin>>command;
        if(command==1){
            int x;
            cin>>x;
            S.push(x);

        }else{
            cout<<S.top()<<"\n";
            S.pop();
        }
    }

}
