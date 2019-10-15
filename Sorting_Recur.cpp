#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[],int n){
    if (n<=1) return;
    int smallestindex=0, i;
    for (i=1; i<n;i++){
        if (arr[i]<arr[smallestindex]) smallestindex=i;
    }
    swap(arr[0],arr[smallestindex]);
    SelectionSort(arr+1,n-1);
}

void BubbleSort(int arr[],int n){
    if (n<=1) return;
    for (int i=0;i<n-1;i++){
        if (arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
    }
    BubbleSort(arr,n-1);
}

void Merge(int arr[], int sPos, int ePos){
    int mid=(sPos+ePos)/2;
    int temp[100];
    for (int i=sPos;i<=ePos;i++) temp[i]=arr[i];
    int i=sPos, j=mid+1, k=sPos;
    while (i<=mid && j<=ePos){
        if (temp[i]<temp[j]) {
            arr[k]=temp[i];
            k++;i++;
        } else {
            arr[k]=temp[j];
            k++;j++;
        }
    }
    while (i<=mid){
        arr[k]=temp[i];
        k++;i++;
    }
    while (j<=ePos){
        arr[k]=temp[j];
        j++;k++;
    }
}

void MergeSort(int arr[], int sPos, int ePos){
    if (sPos>=ePos) return;
    int mid=(sPos+ePos)/2;
    MergeSort(arr,sPos,mid);
    MergeSort(arr,mid+1,ePos);
    Merge(arr,sPos, ePos);
}
int Shuffle(int * arr,int s,int e){
    srand(time(NULL));
    int j,temp;
    for (int i=e;i>0;i--){
        ///creating random index
        j=rand()%(i+1); ///should be between remaining first i+1 elements
        swap(arr[i],arr[j]);
    }
}
int Partition(int * arr, int s, int e){
    int pivot=arr[e];
    int i=s-1;
    int j=s;
    for (;j<e;j++){
        if (arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]); //extend region of smaller elements than pivot
        }
    }
    //bring pivot element to sorted position
    swap(arr[i+1],arr[e ]);
    return i+1;
}
void QuickSort(int * arr, int s, int e){

    if(s>=e) return;
    int p=Partition(arr,s,e);
    QuickSort(arr,s,p-1);
    QuickSort(arr,p+1,e);
}
int main(){
    int arr[]={5,8,3,0,1,4,9,6,7,2};
    int n=10;
    Shuffle(arr,0,n-1);
    ///SelectionSort(arr,n);
    ///BubbleSort(arr,n);
    ///MergeSort(arr,0,n-1);
    QuickSort(arr,0,n-1);

    for (int i=0;i<n;i++) cout<<arr[i]<<" "; cout<<endl;
}
