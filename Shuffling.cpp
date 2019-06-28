#include<bits/stdc++.h>
using namespace std;

int main () {
int t;
cin>>t;
int n;
int x;
while(t--){
    cin>>n;

    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        cin>>x;
        arr[i] = x;
        arr2[i] = x;
    }
    sort(arr,arr+n);
    int z;
    int cc=0;
    for(z=0;z<n;z++){
        if(arr2[z] == arr[z])
            cc++;

    }
    cout<<cc<<endl;
}


}
