#include<bits/stdc++.h>
using namespace std;
#define f(a) for(int i = 0; i <a;i++)


int main(){
    int a,k;
    cin >> a>> k;
    int b[a];
    f(a)
    cin >> b[i];

    priority_queue<int,vector<int>,greater<int> > p1;
    vector<int> t;

    f(a){
        p1.push(b[i]);
        if(p1.size()>k){
            t.push_back(p1.top());
            p1.pop();
        }
    }
   while(!p1.empty()){
       t.push_back(p1.top());
       p1.pop();
   }

   for(int n:t){
       cout<<n<<" ";
   }cout<<endl;
}