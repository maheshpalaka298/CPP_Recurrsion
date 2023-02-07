#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void printSubsets(int ind,int arr[],int n,vector<int> vc){
    if (ind==n){
        for (auto it:vc)
            cout<<it<<" ";
            cout<<"\n";
            return;
        }
    vc.push_back(arr[ind]);
    printSubsets(ind+1,arr,n,vc);
    vc.pop_back();
    
    printSubsets(ind+1,arr,n,vc);
    }
    

int main()
{
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(int);
    vector<int>vc;
    printSubsets(0,arr,n,vc);
}

//Another Method
void printSubsets(int ind,vector<int>&nums,int n,vector<int>&v,vector<vector<int>>&ans){
        //vector<int>vc;
        //vector<int>vg;
        if (ind==n){
            ans.push_back(v);
            return ;
            
        }
        v.push_back(nums[ind]);
        printSubsets(ind+1,nums,n,v,ans);
        v.pop_back();
        printSubsets(ind+1,nums,n,v,ans);
        //return vc;

    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>vcc;
        int n=nums.size();
        for (int i=0;i<(1<<n);i++)
        {
         vector<int>vc;
         for (int j=0;j<n;j++)
           {
                if .l(i&(1<<j))
                {
                    vc.push_back(nums[j]);
                }
            }
           vcc.push_back(vc);

        }
        return vcc;

        int n=nums.size();
        vector<int>v;
        vector<vector<int>>ans;
        printSubsets(0,nums,n,v,ans);
        return ans;        


    }
