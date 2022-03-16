#include<bits/stdc++.h>
using namespace std;
#define f(a) for(int i = 0; i <a;i++)


int main(){
    int a,k;
    cin >> a >> k;
    int b[a];

    f(a)
    cin >> b[i];

    priority_queue<int,vector<int>,greater<int> > p1;

    f(a){
        p1.push(b[i]);
        if(p1.size()>k){
            p1.pop();
        }

    }
    cout<<p1.top()<<endl;

    while(!p1.empty()){
        cout<<p1.top()<<" ";
        p1.pop();
    }cout<<endl;
}