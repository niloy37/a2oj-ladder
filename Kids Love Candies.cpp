#include<bits/stdc++.h>
using namespace std;
int main () {
int t;
cin>>t;
while(t--){
        int kidcount=0;
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        while(x>=k){
            x=x-k;
            kidcount++;
        }
    }
    cout<<kidcount<<endl;
}

}
