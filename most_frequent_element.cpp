#include<iostream>
using namespace std;
int main() {
    int a[]={1,2,2,3,1,4,2};
    int n=7;
    int maxFrequency=0;
    int mostFrequent=-1;
    for(int i=0;i<n;i++){
        bool found=false;
        for(int j=0;j<i;j++){
            if(a[j]==a[i]){
                found=true;
            }
        }
            if(found){
                continue;
            }
            int count=0;
        for(int j=0;j<n;j++) {
            if(a[j]==a[i]){
                count++;
            }
        }
        if(count>maxFrequency){
            maxFrequency=count;
            mostFrequent=a[i];
        }
    }
    cout<<mostFrequent<<" "<<maxFrequency<<" times";
    return 0;
} 