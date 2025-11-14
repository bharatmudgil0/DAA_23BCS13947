// Question 1 in the External Pratical

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int n=s.length(),m=t.length();
    vector<int> freq(26,0);
    for(int i=0;i<n;i++) freq[t[i]-'a']++;
    int cnt = 0;
    int minans = INT_MAX;
    int start = 0,last = 0;
    vector<int> ans = freq;
    for(int i=0;i<n;i++){
        if(ans[s[i]-'a'] > 0){
            ans[s[i]]--;
            cnt+=1;
            if(cnt == 1){
                start = i;
            }
            if(cnt == m){
                last = i;
                int len = last - start+1;
                minans = min(minans,len);
                cnt = 0;
                ans = freq;
            }
        }
    }
    cout<<minans<<endl;

    return 0;
}
