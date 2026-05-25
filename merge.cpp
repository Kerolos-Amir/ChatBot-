#include <iostream>
using namespace std;
void merge(int arr[], int s,int m, int e)
{
    int i,j,k;
    int n1 =m-s+1;
    int n2 =e-m;
    int *left_list=new int[n1];
    int *right_list=new int[n2];
    for (i=0 ; i<n1; i++)
        left_list[i]=arr[s+i];
    for (j=0; j<n2; j++)
        right_list[j]=arr[m+1+j];

    i=j=0;
    k=s;
    while( i<n1&& j<n2){
        if (left_list[i] <= right_list[j]){
            arr[k] =left_list[i];
            i++;
        }
        else
        {
            arr[k]= right_list[j];
            j++;
        }
        k++;
    }       
    while (i<n1){
        arr[k]=left_list[i];
        i++;
        k++;
    } 
    while (j < n2){
        arr[k]=right_list[j];
        j++;
        k++;
    }
}
void mergeSort(int a[],int start,int end){
int mid=0;
if (end>start){
    mid= (start + end)/2;
    mergeSort(a, start,mid);
    mergeSort(a, mid+1,end);
    merge(a,start,mid,end);
}
}
int main(){
    int arr[]={99,6,76,15,58,35,86};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++)
        cout<< arr[i]<<" ";
        cout<< endl;
        system("pause");
}