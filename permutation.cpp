#include <iostream>
#include<bits/stdc++.h>

using namespace std;

    
    void permu(int n,string s,int arr[],vector<char>&vs){
        if (vs.size()==n){
            for (auto it:vs){
                cout<<it<<" ";
                
            }
            cout<<"\n";
            return;
        }
        for (int i=0;i<n;i++){
            if (arr[i]==0){
                arr[i]=1;
                vs.push_back(s[i]);
                permu(n,s,arr,vs);
                arr[i]=0;
                vs.pop_back();
            }
        }
    }

int main()
{
    
    int arr[3]={0};
    string s="abc";
    int n=s.size();
    
    vector<char>vs;
    permu(n,s,arr,vs);
}
