#include<iostream>
using namespace std;
int sort(int arr[],int sz){
    if(sz==0||sz==1){
        return true;
    }
   return arr[sz-1]>=arr[sz-2] && sort(arr,sz-1);
}
int main(){
    int arr[]={1,2,3,4,5,6};
    cout<<sort(arr,6)<<endl;
    return 0;
}