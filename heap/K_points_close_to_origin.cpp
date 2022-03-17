#include<bits/stdc++.h>
using namespace std;
#define f(a) for(int i = 0; i <a;i++)

int main(){
    int a,k;
    cin >> a>>k;
    vector<pair<int,int> > v1;
   for(int i=0;i<a;i++){
       int x,y;
       cin >> x>>y;
       v1.push_back(make_pair(x,y));
   }

   priority_queue<pair<int,pair<int,int> > >p1;

   for(auto t:v1){
       int temp=pow(t.first,2)+pow(t.second,2);
       p1.push(make_pair(temp,t));

       if(p1.size()>k){
           p1.pop();
       }


   }

   while(!p1.empty()){
       cout<<p1.top().second.first<<" "<<p1.top().second.second<<endl;
       p1.pop();
   }


}