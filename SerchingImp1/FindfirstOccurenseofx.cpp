#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,2,3,3,3,3,3,4,4,5,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 3;
    int lo = 0;

    int hi = n-1;
    
    bool flag = false;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==x){
            flag = true;
            cout<<arr[mid-1];
            break;
        }
        else if(arr[mid]<x) lo = mid;
        else hi = mid-1;
    }
    if(flag==false) cout<<arr[hi];
}
   