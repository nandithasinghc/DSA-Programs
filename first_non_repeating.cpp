#include<iostream>
using namespace std;
int main() {
    int a[]={1,2,3,2,4,3,5};
    int n=7;
    int count=0;
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(a[j]==a[i]){
            count++;
        }
    }
        if(count==1){
            cout<<a[i];
            break;
        }
    }
    return 0;
}