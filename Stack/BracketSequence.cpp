#include <bits/stdc++.h>
using namespace std;
int main(){
    string input;
    cin>>input;
    stack<char> S;
    int flag=1;
    int count=0;
    for(int i=0;i<input.length();i++){
        if(input[i]!='(' && input[input.length()-1]!=')'){
            flag=0;
        }

        if(input[i]=='(') {S.push(input[i]); count++;}
        else{
            if(!S.empty())
            {S.pop();
            count--;}else{
                flag=0;
            }
        }
    }
    if(S.empty() && flag){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }

}
