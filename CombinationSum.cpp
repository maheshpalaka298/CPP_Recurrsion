#include<bits/stdc++.h>



void printCombination(int ind,int n,vector<int>&ca,int tar,vector<vector<int>>&ans,vector<int>&vc){
        if (ind==n){
            if (tar==0){
                ans.push_back(vc);
            }
            return;
            
        }
        if (tar>=ca[ind]){
            vc.push_back(ca[ind]);
            printCombination(ind,n,ca,tar-ca[ind],ans,vc);
            vc.pop_back();
        }
        printCombination(ind+1,n,ca,tar,ans,vc);
    }
int main()
{
        vector<int>ca;
        int tar;

        int n=ca.size();
        vector<vector<int>>ans;
        vector<int>vc;
        printCombination(0,n,ca,tar,ans,vc);
        return ans;
    }
}
