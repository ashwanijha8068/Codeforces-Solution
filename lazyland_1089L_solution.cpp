#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v;
    set<int> st;
    for (int i=0;i<n;i++) {
        int x;
        cin >> x;
        v.push_back(x);
        st.insert(x);
    }
    map<int, vector<int>> mp;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        vec.push_back(x);
    }
    for(int i=0;i<n;i++){
        mp[v[i]].push_back(vec[i]);
    }
//
//    for(auto el:v){
//        cout<<el<<" ";
//    }
//    cout<<endl;
//    for(auto el:vec){
//        cout<<el<<" ";
//    }
//cout<<endl;
//    for(int i=1;i<=k;i++){
//        cout<<i<<"== ";
//
//        for(auto el:mp[i]){
//            cout<<el<< " ";
//        }
//        cout<<endl;
//    }

    if(st.size()>=k){
        cout<<0<<endl;
    }
    else{
        vector<int> ans;
        for(auto itr=st.begin();itr!=st.end();itr++) {

            if(mp[*itr].size()>1){
                sort(mp[*itr].begin(),mp[*itr].end());
                // mp[i].erase(mp[i].end());
                for(int j=0;j<mp[*itr].size()-1;j++){
                    ans.push_back(mp[*itr][j]);
                }
            }

        }
//        for(auto el:ans){
//            cout<<el<<" ";
//        }
        sort(ans.begin(),ans.end());
       long long  dos=0;
        int z=k-st.size();
        for(int i=0;i<z;i++){
            dos+=ans[i];
        }
        cout<<dos<<endl;
    }


}