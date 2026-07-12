#include<iostream>
using namespace std;
int BS(int arr[],int target, int start ,int end){
    if(start<=end){
        int mid =(start+end)/2;
    if(arr[mid]==target){
        return mid;
    }
    else if(arr[mid]<=target){
        return BS(arr,target,mid+1,end);
    }
    else if(arr[mid]>=target){
        return BS(arr,target,start,mid-1);
  
    }
}
    else 
        return -1;
}
int main(){
    int arr[]={1,2,5,7,9,10};
    cout<<BS(arr,9,0,5)<<endl;
}
//time complexity is = o(log n)