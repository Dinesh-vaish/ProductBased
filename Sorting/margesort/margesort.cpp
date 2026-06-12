#include<iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int left , int mid, int right)
{
int n1=mid-left+1;
int n2=right-mid;
int L[n1], R[n2];
for(int i=0;i<n1;i++) L[i]=arr[left+i];
for(int j=0;j<n2;j++) R[j]=arr[mid+1+j];
int i=0,j=0,k=left;
while(i<n1 && j<n2)  arr[k++]=(L[i]<=R[j]) ? L[i++]: R[j++];
while(i<n1) arr[k++]=L[i++];
while(j<n2) arr[k++]=R[j++];
}
 void mergesort(vector<int>& arr, int left ,int right){
    if(left<right)
    {
        int mid=left+(right-left)/2;
        mergesort(arr, left,mid);
        mergesort(arr, mid+1,right);
        merge(arr,left,mid,right);
    }
 }

int main()
{
    vector<int> arr={12,11,13,5,6,7};
int n = arr.size();
    mergesort(arr, 0, n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

