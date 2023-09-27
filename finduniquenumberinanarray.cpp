//find unique
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        int arr[100];
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=ans^arr[i];
        }
        cout<<ans;
        
    }
    return 0;
}