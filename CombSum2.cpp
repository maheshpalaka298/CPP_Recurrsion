#include <iostream>
#include<bits/stdc++.h>

using namespace std;

    
   void printCombination(int ind, int arr[], int n, vector<int>&vc,int t){
            if (t==0){
            for (int i=0;i<vc.size();i++) cout<<vc[i];
            cout<<"\n";
            return;
            }
        
        //pick call
        
        for (int i=ind;i<n;i++){
            
            if (arr[i]>t) break;
            if (i>ind and arr[i]==arr[i-1]) continue;
            
            
            vc.push_back(arr[i]);
            printCombination(i+1,arr,n,vc,t-arr[i]);
            vc.pop_back();
            

            
    }
   }
    /*void fun(int ind,int arr[],int N, map<int,string>&mpp,vector<char>&vc){
        if (ind==N){
            for (int i=0;i<vc.size();i++) cout<<". ";
            cout<<"\n";
            return;
        }
        for (auto it:mpp[arr[ind]]){
            cout<<it<<" ";
            vc.push_back(it);
            fun(ind+1,arr,N,mpp,vc);
            vc.pop_back();
        }
    }*/

int main()
{
    int arr[]={2,5,2,1,2};
    int n=5;
    int tar=5;
    vector<int>vc;
    sort(arr,arr+n);
    printCombination(0, arr, n, vc,tar);
    
    /*map<int,string>mpp;
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
    fun(0,arr,N,mpp,vc);*/
}
