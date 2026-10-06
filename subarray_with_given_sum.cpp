#include<iostream>
using namespace std;
int main() {
    int a[]={1,4,20,3,10,5};
    int n=6;
    int target=33;
    int start=0;
    int sum=0;
    for(int i=0;i<n;i++) {
        sum=sum+a[i];
    while(sum>target) {
        sum=sum-a[start];
        start++;
    }
    if(sum==target){
        cout<<start<<" "<<i;
        break;
    }
}
    return 0;
}