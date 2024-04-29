#include<iostream>
using namespace std;

int binary_Search(int a[], int start, int end, int target){
    int mid = (start + end)/ 2;

    if(a[mid] == target){
        return mid; 
    }

    else if(a[mid] < target){
        binary_Search(a,mid+1,end,target);
    }

    else if(a[mid] > target){
        binary_Search(a,start,mid-1,target);
    }

    else{
        return -1;
    }

}

int main(){
    int a[] = {10,20,30,40,50,60,70};
    int n = sizeof(a)/sizeof(a[0]);
    int target = 100;

    int b = binary_Search(a,0,n-1,target);

    cout << b;


    return 0;
}