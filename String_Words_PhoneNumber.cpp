#include <iostream>
#include<bits/stdc++.h>

using namespace std;

    
   
    void fun(int ind,int arr[],int N, map<int,string>&mpp,vector<char>&vc){
        if (ind==N){
            for (int i=0;i<vc.size();i++) cout<<vc[i];
            cout<<"\n";
            return;
        }
        for (auto it:mpp[arr[ind]]){
            //cout<<it<<" ";
            vc.push_back(it);
            fun(ind+1,arr,N,mpp,vc);
            vc.pop_back();
        }
    }

int main()
{
    int arr[]={2,3};
    int N=2;
    
    
    
    map<int,string>mpp;
    mpp[2]="abc";
    mpp[3]="def";
    mpp[4]="ghi";
    mpp[5]="jkl";
    mpp[6]="mno";
    mpp[7]="pqrs";
    mpp[8]="tuv";
    mpp[9]="wxyz";
    if (N==0) cout<<"in";
    vector<char>vc;
    fun(0,arr,N,mpp,vc);
}
