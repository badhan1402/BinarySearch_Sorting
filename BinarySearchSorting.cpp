#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of array size ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target value ";
    cin>>target;
    // sorting
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-1-i; j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    int result = -1;
    
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==target){
            result = mid;
            break;
        }
        
        else if(arr[mid]>target){
            start = mid+1;
            result = mid;
        }else if(arr[mid]<target){
            end = mid-1;
            
        }

    }
    cout<<"output "<<result;


    
  
    



}