#include<iostream>
using namespace std;
void fact(int n){
    if(n==0){
        cout<<"0"<<endl;
        return;
    }
    cout<<n*(n-1)<<endl;

}
int main(){
    fact(3);
}