#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==0){
        cout<<"No floor no ciel";
}
    else{
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int target;
        cin>>target;
        int store;
        for(int i=0;i<n;i++){
            if(arr[i]==target){
                store=i;
                break;
        }
        }
        int diff1=arr[store]-arr[store-1];
        int diff2=arr[store+1]-arr[store];
        if(diff1>diff2){
            cout<<arr[store+1];
        }
        else{
            cout<<arr[store-1];
        }


    }


}