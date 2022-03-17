#include<bits/stdc++.h>
using namespace std;
#define f(a) for(int i = 0; i <a;i++)

int main(){
    int a;
    cin >> a;
    int b[a];
    f(a)
    cin >> b[i];

    unordered_map<int,int> m1;
    f(a){
        m1[b[i]]++;
    }
    priority_queue<pair<int,int> > p1;

    for(auto t:m1){
        p1.push(make_pair(t.second,t.first));
    }

    while(!p1.empty()){
        
        for(int i=0;i<p1.top().first;i++){
            cout<<p1.top().second<<" ";
        }

        p1.pop();
    }cout<<endl;
}