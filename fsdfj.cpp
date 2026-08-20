#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;cin>>n;
    vector<int> v(n-1);
    for(int i=0;i<n-1;i++) cin>>v[i];
    int high=n-1,low=0;
    while(high>low){
        int mid=(high+low)/2;
        if(v[mid]==mid+1){
            low=mid+1;
        }
        else{
            high=mid;
        }
    }
    cout<<high+1;
}