#include<bits/stdc++.h>
using namespace std;
#define f(a) for(int i = 0; i <a;i++)

int main(){
    int a,x,k;
    cin >> a>> x >> k;
    int b[a];
    f(a)
    cin >> b[i];

    priority_queue<pair<int,int> > p1;

    f(a){
        p1.push(make_pair(abs(b[i]-x),b[i]));

        if(p1.size()>k){
            p1.pop();
        }

    }
    while(!p1.empty()){
        cout<<p1.top().second<<" ";
        p1.pop();
    }cout<<endl;
}