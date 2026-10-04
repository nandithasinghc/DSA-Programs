#include<iostream>
using namespace std;
int main() {
    int a[6]={100,4,200,1,3,2};
    int n=6;
    int largest=0;
    for(int i=0;i<n;i++) {
        bool found = false;
        for(int j=0;j<n;j++) {
            if(a[j] == a[i]-1) {
                found = true;
            }
        }
        if(found==false){
            int current=a[i];
            int count=1;
            bool nextFound=true;
        while(nextFound) {
            nextFound=false;
            for(int j=0;j<n;j++){
                if(a[j]==current+1) {
                    current=a[j];
                    count++;
                    nextFound=true;
                }
            }
        }
        if(count>largest) {
            largest=count;
        }
    }
    }
    cout<<largest;
    return 0;
}