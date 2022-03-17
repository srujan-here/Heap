#include<bits/stdc++.h>
using namespace std;
#define f(a) for(int i = 0; i <a;i++)

int find(int b[],int k,int a){

priority_queue<int> p1;

f(a){
    p1.push(b[i]);
    if(p1.size()>k){
        p1.pop();
    }
}

return p1.top();



}

int main(){
    int a,k1,k2;
    cin>>a>>k1>>k2;
    int b[a];

    f(a)
    cin>>b[i];

    int t1=find(b,k1,a);
    int t2=find(b,k2,a);
    int sum=0;


    f(a){
        if(b[i]>t1&&b[i]<t2){
            sum+=b[i];

        }
    }
cout<<sum<<endl;

}