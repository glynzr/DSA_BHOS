#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli digitsum(lli x){
    if(x<10) return x;
    return x%10+digitsum(x/10);
}

int main(){
    lli n;
    cin>>n;
    cout<<digitsum(n);

}
