#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int k;cin>>k;
    int sum = 0,ans=0;
    int i=0,j=0;
    while(j<n){
        if(sum == k){
            ans++;
            sum-=arr[i];
            i++;
        }else if(sum < k){
            sum+=arr[j];
            j++;
        }else{
            sum-=arr[i];
            i++;
        }
    }
    if(sum == k) ans++;
    cout<<ans<<endl;


    return 0;
}
