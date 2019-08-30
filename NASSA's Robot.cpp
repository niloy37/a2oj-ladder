#include<bits/stdc++.h>
using namespace std;
int main () {
int t;
cin>>t;
string s;
int x,y;
while(t--){
    cin >> s;
    x = 0 ; y = 0; int rc = 0;
    for(char c : s){ //modified to casual loop during submission

        if(c == 'U'){//subn
            y++;
        }
        else if(c == 'R'){
            x++;

        }
        else if(c == 'D'){
            y--;
        }
        else if(c == 'L'){
            x--;
        }
        else
            rc++;

}
        cout<< x-rc <<" "<< y-rc <<" " << x+rc <<" " << y+rc<<endl;

}




}
//my battery is low and it's getting dark!
