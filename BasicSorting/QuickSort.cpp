#include<iostream>
void getSize(int &n){
    std::cout<<"\nEnter Size:\t";
    std::cin>>n;
}
void getInput(int arr[], int size){

    for (int  i = 0; i < size; i++)
    {
        std::cin>>arr[i];
    }
}
void QuickSort(int a[], int start, int end){
    if(start >= end){
        return;
    }
    int pivot = end;
    int i = start -1;
    int j = start;

    while (j < pivot)   
    {
        if (a[j] < a[pivot])
        {
            i++;
            std::swap(a[i], a[j]);
        }
        j++;
    }
    // if (i != start-1)
    // {

    // }
                ++i; // Yaha pr i ki value pivot pr hai, jo do partition create karega.
            std::swap(a[i], a[pivot]); // iss step pr mera a[pivot] apni sahi jagah pr aa jaega,


    // ab hume do partition mil gaye, pivot k right mai and pivot k left mai.

    // Dono partitions k liye, same kaam karna hai

    // left array -> start se pivot -1 jaega and right array -> pivot+1 se end tak.

    QuickSort(a, start, i-1);

    QuickSort(a, i+1, end);
    
}
void printOutput(int a[], int n){
    if(n == 0) return;

    std::cout<<*a<<" ";
    printOutput(a+1, n-1);
}
int main(){
    int size;
    getSize(size);
    int *arr = new int[size];
    getInput(arr,size);
    int start = 0, end = size-1;
    QuickSort(arr, start, end);
    printOutput(arr,size);
    delete[] arr;
    return(0);
}