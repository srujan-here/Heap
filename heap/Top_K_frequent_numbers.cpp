#include<bits/stdc++.h>
using namespace std;
#define f(a) for(int i = 0; i <a;i++)

int main(){
    int a,k;
    cin >> a>> k;
    int b[a];

    f(a)
    cin >> b[i];
    unordered_map<int,int> m1;

    f(a){
        m1[b[i]]++;

    }

    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > p1;

    for(auto t:m1){

        p1.push(make_pair(t.second,t.first));

        if(p1.size()>k){
            p1.pop();
        }

    }

    while(!p1.empty()){
        cout<<p1.top().second<<" ";
        p1.pop();
    }cout<<endl;
}