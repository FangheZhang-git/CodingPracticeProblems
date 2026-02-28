//
//  main.cpp
//  Practice
//
//  Created by Fanghe Zhang on 2/13/26.
// Binary Search Practice

#include <iostream>
using namespace std;
    int Binary_Search(int arr[],int n,int key){
        int low=0,high=n-1,mid;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid] ==key)
                return mid;
            else if (arr[mid]>key)
                high = mid-1;
            else{
                low=mid+1;
            }
        }
        return -1;
    }
    int main(){
        int arr[5];
        for(int i=0;i<5;i++){
            cout<<"please enter the number";
            cin>>arr[i];
        }
        int key=16;
        int n=sizeof(arr)/sizeof(arr[0]);
        
        int result= Binary_Search(arr,n,key);
        
        if(result !=-1){
            cout<<"Found at index"<<" "<<result;
        }
        else{
            cout<<"Not found";
        }
        return 0;
    }

