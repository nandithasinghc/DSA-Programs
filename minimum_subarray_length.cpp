#include<iostream>
using namespace std;
int main() {
    int n=6;
    int bestStart=-1;
    int a[]={2,3,1,2,4,3};
    int minLength=n+1;
    int target=7;
    int start=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
        while(sum>=target){
            int length=i-start+1;
            if(length<minLength){
                minLength=length;
                bestStart=start;
            }
            sum=sum-a[start];
                start++;
        }
    }
cout<<"Minimum Length:"<<minLength<<endl;
cout<<"Subarray: ";
for(int j=bestStart;j<bestStart+minLength;j++){
    cout<<a[j]<<" ";
}
return 0;
}