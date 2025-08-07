#include<iostream>
using namespace std;
// 1,2,3,4,5,6,7
// in binary search the data must be sorted data
int binarySearch(int arr[],int n,int target){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = (start + end)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            start = mid+1;
        }else if(arr[mid]>target){
            end = mid-1;
        }
    }
    if(start>end){
        return -1;
    }

}
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int x = binarySearch(arr,7,7);
    if(x != -1)
    cout<<"Found at "<<x<<" index";
    else cout<<"Not found";

}