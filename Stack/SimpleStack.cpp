#include <bits/stdc++.h>
using namespace std;
stack <int> S;
void push(int x){

    S.push(x);
    cout<<"ok\n";
}

void pop(){
    cout<<S.top()<<"\n";
    S.pop();
}

void back(){
    cout<<S.top()<<"\n";
}

void size(){
    cout<<S.size()<<"\n";
}

void clear(){
    while(!S.empty()){
        S.pop();
    }
    cout<<"ok\n";
}
int main(){
    string command;
    while(cin>>command){
        if(command=="push"){ int x;cin>>x; push(x);}
        else if(command=="back") back();
        else if(command=="pop") pop();
        else if (command=="size") size();
        else if(command=="clear") clear();
        else if(command=="exit") {cout<<"bye\n";break;}
    }
    

}
