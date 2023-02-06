#include <iostream>

using namespace std;

int Sortedof(int *a,int n){
    if (n==1){
        return 1;
    }
    if (a[0]<a[1])  return Sortedof(a+1,n-1);
    else return -1;
}
int searchof(int *a,int n,int key){
    if (n==0){
        return -1;
    }
    if (a[0]==key){
        return 0;
    }
    int ind= searchof(a+1,n-1,key);
    if (ind==-1) return -1;
    else return ind+1;
}
int lastOccur(int *a,int n,int key){
    if (n==0) return -1;
    int ind =lastOccur(a+1,n-1,key);
    if (ind ==-1){
        if (a[0]==key){
            return 0;
        }
        else return -1;
    }
    return ind+1;
    
}

int main()
{
    int arr[]={1,2,6,5,3,4,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<Sortedof(arr,n);
    int key=5;
    cout<<searchof(arr,n,key);
    cout<<lastOccur(arr,n,key);

    return 0;
}
