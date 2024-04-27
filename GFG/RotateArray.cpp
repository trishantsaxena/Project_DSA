#include<iostream>
#include<vector>
    void getSize(int &size){
        std::cout<<"Enter size:\t";
        std::cin>>size;
    }
    void getElements(std::vector<int> &arr,int size){
        std::cout<<"\nEnter Elements:\t";
        for (int i = 0; i < size; i++)
        {
            std::cin>>arr[i];
        }
        std::cout<<"\n";
        
    }
    int getKey(int &key){
        std::cout<<"Enter key:\t";
        std::cin>>key;
    }
    void rotateArray(std::vector<int> &arr,int size,int key){
        std::vector<int> narr(key);
        for (int i = 0; i < key; i++){
            narr[i] = arr[i];
        }
        
        for (int i = size-1; i >= key; i--){
           // arr[i-key] = arr[i];
           arr[i] =  arr[i-key];
        }
        
        for (int i = size-key; i < size; i++){
            arr[i] = narr[i-key-1];
        }
        
    }
    void printArray(std::vector<int> &arr,int size){
        std::cout<<"\nLeft rotated array:\t";
        for (int i = 0; i < size; i++)
        {
            std::cout<<arr[i]<<" ";
        }
    }
int main(){
    int size,key;
    getSize(size);
    std::vector<int> arr(size);
    getElements(arr,size);
    getKey(key);
    rotateArray(arr,size,key);
    printArray(arr,size);
    return(0);
}