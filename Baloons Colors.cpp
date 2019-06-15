#include<bits/stdc++.h>
using namespace std;
int main () {
int t;
cin>>t;

while(t--){
      bool f= true , q = true;
    int n,x,y;
    cin>>n>>x>>y;
    for(int i=0;i<n;i++){
        int z;
        cin>>z;
        if(i==0){
            if(z == x){
                f=false;
                    continue;
            }
        }

        if(i==(n-1)){
            if(z==y){
                q=false;
                  break;
            }
        }


}
if(f == false){
    if(q== true){
        cout<<"EASY"<<endl;
    }
    else cout<<"BOTH"<<endl;
}
else {
    if(q==true){
        cout<<"OKAY"<<endl;
    }
    else{
        cout<<"HARD"<<endl;
    }
}


}
}
