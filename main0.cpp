#include <iostream>

using namespace std;

void __Sort3Numbers(int arr[], int l, int r){
    int middle = 1;

    int lt = l-1;//arr[l,...lt]<m
    int i = l;//arr[lt+1,...i-1]==m
    int gt = r+1;//arr[gt,...,r]>m

    while(i<gt){
        if(arr[i]<middle){
            swap(arr[i], arr[lt+1]);
            i++;
            lt++;
        }else if(arr[i]>middle){
            swap(arr[i],arr[gt-1]);
            gt--;
        }else{
            i++;
        }
    }



}

void Sort3Numbers(int arr[], int n){
    __Sort3Numbers(arr, 0, n-1);
}


int main() {
    int arr[10] = {3,3,3,2,2,2,1,1,1,1};
    Sort3Numbers(arr,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<sizeof(arr)/sizeof(arr[0]);
    return 0;
}
