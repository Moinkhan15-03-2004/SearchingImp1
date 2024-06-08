#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,4,5,9,18,21};
    int n = 7;
    int target = 18;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(target==arr[i]){
            flag = true;
            break;
        }
    }
    if(flag==true) cout<<"Target is present";
    else cout<<"Target is not present";
}