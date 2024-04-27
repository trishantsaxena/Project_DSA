/* 
    Given a fixed-length integer array arr, 
    duplicate each occurrence of zero, shifting 
    the remaining elements to the right.

    Note that elements beyond the length of the original 
    array are not written. Do the above modifications to 
    the input array in place and do not return anything.

    Input: arr = [1,0,2,3,0,4,5,0]
    1 0 2 3 0 4 5 0
    Output: [1,0,0,2,3,0,0,4]
    Explanation: After calling your function, the input array is modified to: [1,0,0,2,3,0,0,4]

 */
#include<iostream>
void getSize(int &size){
    std::cout<<"\nEnter Size:\t";
    std::cin>>size;
}
void getElements(int* &arr,int &size){
    std::cout<<"\nEnter Elements:\t";
    for (int  i = 0; i < size; i++)
    {
        std::cin>>arr[i];
    }
    
}
void printArray(int* &arr,int &size){
    std::cout<<"\nNew Array:\t";
    for (int i = 0; i < size; i++)
    {
        std::cout<<*(arr+i)<<" ";
    }
    std::cout<<"\nNew Size:\t"<<size;
    
}
bool checkZero(int* &arr, int size){

    for (int i = 0; i < size; i++)
    {
        if (*(arr+i) == 0)
        {
            return(true);

        }
        
    }
    return(false);
}
void copy(int* &arr, int size, int i){
    std::cout<<"\nEntered In Copy Function.";
    int j = size-2;
    while (j != i)
    {
        *(arr+(j+1)) = *(arr+j);
        j--;
    }
    
}
int countZero(int* &arr, int size){
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (*(arr+i) == 0)
        {
                count++;
        }
        
    }
    return(count);
}
void DuplicateZero(int* &arr, int size){

    int check = countZero(arr,size);

    if (check == size) return;
    

    std::cout<<"\nEntered in DuplicateZero Function.";
    for (int   i = 0; i < size; i++)
    {
        if (*(arr+i) == 0 && *(arr+(i+1)) !=0)
        {   std::cout<<"\nEntered In IF-Statement";
            copy(arr, size, i);
            *(arr+(i+1)) = *(arr+i);
            i++;
        }
    }
    

 
}
int main(){
    int size;
    getSize(size);
    int* arr = new int[size];
    getElements(arr,size);
    DuplicateZero(arr, size);
    std::cout<<"\nBack to main";
    printArray(arr,size);
    return(0);
}
// 8 4 5 0 0 0 0 7

// 0 4 1 0 0 8 0 0 3