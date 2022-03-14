#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    int minm=INT_MAX;
    int maxm=INT_MIN;
    for(int i=0; i<n; i++){
        minm=min(minm,arr[i]);
        maxm=max(maxm,arr[i]);
    }
    cout << minm << " " << maxm << endl;
}