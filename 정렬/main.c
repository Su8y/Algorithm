#include <stdio.h>

void quicksort(int *arr1,int start,int end){
    if(start >= end) return;
    int pivot = start;
    int left = start + 1, right = end , temp;
    while(left <= right){
        while(left <= end && arr1[left] >= arr1[pivot]){
            left++;
        }
        while(right > start && arr1[right] <= arr1[pivot]){
            right--;
        }
        if(left > right){
            temp = arr1[right];
            arr1[right] = arr1[pivot];
            arr1[pivot] = temp;
        }
        else{
            temp = arr1[right]; 
            arr1[right] = arr1[left];
            arr1[left] = temp;
        }
    }
    quicksort(arr1,start,right -1);
    quicksort(arr1,right+1,end);
}
int main(){
    int arr[5] = {5,3,6,1,2};
    quicksort(arr,0,5);
    printf("%d %d %d %d %d",arr[0],arr[1],arr[2],arr[3],arr[4]);
    return 0;

}

