#include <iostream>
using namespace std;
void merge(int arr[], int s, int m,int e){
    int i,j,k;
    int n1=m-s+1;
    int n2=e-m;
    int *left_list=new int[n1];
    int *right_list=new int[n2];
    for(i=0;n1>i;i++)
    left_list[i]=arr[s+i];
    for(j=0; n2>j; j++)
    right_list[j]=arr[m+1+j];
    i=j=0;
    k=s;
    while(n1>i&&n2>j){
    if (left_list[i]<right_list[j]){
        arr[k]=left_list[i];
        i++;
    } else{
    arr[k]=right_list[j];
    j++;}
    k++;
    }
    while(n1>i){
        arr[k]=left_list[i];
        i++;
        k++;
    }
    while(n2>j){
        arr[k]=right_list[j];
        j++;
        k++;
    }

}
void mergeSort(int a[], int start, int end){
    int mid=0;
    if(end>start){
        mid=(start+end)/2;
        mergeSort(a, start,mid);
        mergeSort(a,mid+1,end);
        mergeSort(a,start,mid,end)
    }

}
int main(){
    int arr[]={10,20,30,40,50};
    n=sizeofarr/sizeof(arr[0]);
    mergeSort(arr,0,n-1)
    for(i=0;n>i;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
        system("pause");
    
    
}
