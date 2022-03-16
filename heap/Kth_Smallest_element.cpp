#include<bits/stdc++.h>
using namespace std;
#define f(a) for(int i = 0; i <a;i++)

int main(){
    priority_queue<int> p;

    int a,k;
    cin >> a>>k;
    int b[a];
    f(a)
    cin >> b[i];

    f(a)
    {
        p.push(b[i]);
        if(p.size()>k){
            p.pop();
        }
        

    }
    cout<<p.top()<<endl;

    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
    }cout<<endl;
}