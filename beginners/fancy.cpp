#include <iostream>
#include <string>
#include<stdio.h>
#include<stdlib.h> 
using namespace std;

int main() {
	// your code goes here
	int T,i,a,pos=0;
	string s[20],o[20];
    cin>>T;
	for(i=0;i<T;i++)
	{   cin>>a;
        cin.ignore();
        if(a==1){
            gets(s[i]);
        }
	}
    for(i=0;i<T;i++){
        cout<<s[i]<<endl;
    }
	// for(int i=0;i<T;i++){
    //     pos=0;
	//     pos=s[i].find("not");
	//     if(pos>0){
	//         o[i]="Real Fancy";
	//     }
	//     else{
	//         o[i]="regularly fancy";
	//     }
	    
	// }
	// for(int i=0;i<T;i++){
	//     cout<<o[i]<<"\n";
	// }
	return 0;
}
