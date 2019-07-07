#include<bits/stdc++.h>

using namespace std;

int main () {
int t;
cin>>t;
while(t--){
	int c=0,maxC=0;
	char ch;
	string a;
	cin>>a;
	for(int i=0;i<(int)a.size();i++){
		c=0;
	for(int j=0;j< (int)a.size();j++){
				if(a[i] == a[j]){
					c++;
				}
				if(maxC < c){
					maxC = c;

				 ch = a[i];
				}
				if(maxC == c ){
					if(ch>a[i])
						ch=a[i];
				}
		}
	}
	cout<<maxC<<" "<<ch<<endl;
 }


}


