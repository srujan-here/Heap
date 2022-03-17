#include<bits/stdc++.h>
using namespace std;
#define f(a) for(int i = 0; i <a;i++)

int main(){

    int a;
    cin>>a;
    int b[a];
    f(a)
    cin >> b[i];

    priority_queue<int,vector<int>,greater<int> > p1;

    f(a){
        p1.push(b[i]);
       

    }
int cost=0;
    while(p1.size()>=2){
        int t1=p1.top();
        p1.pop();
        int t2=p1.top();
        p1.pop();

        cost+=t1+t2;
        p1.push(t1+t2);
    }

    cout<<cost<<endl;
}