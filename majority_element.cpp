#include<iostream>
using namespace std;
int a[7]={2,2,1,1,1,2,2};
int n=7;
int main() {
for(int i=0;i<n;i++){
    bool alreadyChecked=false;
    for(int j=0;j<i;j++) {
        if(a[j]==a[i]) {
            alreadyChecked=true;
        }
    }
        if(alreadyChecked) {
            continue;
        }
        int count=0;
        for(int j=0;j<n;j++){
        if(a[j]==a[i]){
            count++;
        }
    }
        if(count>n/2){
            cout<<a[i]<<"repeated"<<count<<"times";
            break;
        }
    }
    return 0;
}