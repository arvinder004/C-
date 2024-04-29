#include<iostream>

using namespace std;

void swapn(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int a[], int n){
    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i+1; j<i; j++){
            if(a[j] < a[min])
                min = j;
        }
        if(min != i)
            swap(a[min], a[i]);
    }
}

int main(){
    int a[] = {12,35,63,59,23,56,48,12,32,59,56,23};
    int n = sizeof(a)/sizeof(a[0]);

    cout<<"array before sorting"<<endl;
    for(int i=0; i<n; i++){
        cout<<a[i]<<"   ";
    }

    selection_sort(a,n);

    cout<<endl<<"array after sorting"<<endl;
    for(int i=0; i<n; i++){
        cout<<a[i]<<"   ";
    }

    return 0;
}