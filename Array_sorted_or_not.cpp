#include <iostream>
using namespace std;
bool sorted (int arr[],int n){
    if (n==1){
        return true;
    }
    bool rest_arr = (arr+1 ,n-1);
    return (arr[0]<arr[1] && rest_arr);

    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i =0;i<n;i++){
        cin>>arr[i];
    }

    if (sorted(arr,n)==true){
        cout<<"arr is sorted"<<endl;
    }
    else cout<<"arr not sorted"<<endl;
}