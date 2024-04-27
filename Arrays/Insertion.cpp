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
void Insert(int* &arr, int &size,int pos, int val){
    if (pos <= 0)
    {
        //Insertion at beginning
        size++;
        int i = size-2;
        while (i!=-1)
        {
            *(arr+(i+1)) = *(arr+i);
            i--;
        }
        arr[i+1] = val;
        
    }

    else if (pos >= size)
    {
        /* Insertion at End */
        size++;
        *(arr+(size-1)) = val;
    }
    
    else{
        /* Insertion at middle  */
        int i =0;
        while (pos != 1)
        {
            pos--;
            i++;
        }
        size++;
        int j = size-2;
        while (j != i-1)
        {
            *(arr+(j+1)) =  *(arr+j);
            j--;
        }
        *(arr+i) = val;
    }
    
}
int main(){

    int size, pos,val;

    getSize(size);

    int *arr = new int[size];

    getElements(arr,size);

    std::cout<<"\nEnter Postion:\t";
    std::cin>>pos;
    std::cout<<"\nEnter Value:\t";
    std::cin>>val;

    Insert(arr,size,pos,val);

    printArray(arr,size);
    return(0);
}