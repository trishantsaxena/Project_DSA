#include<iostream>
class Solution
{

public:


    void QSort(int a[], int start, int end){


        if (start >= end)
        {
            return;
        }
            int pivot = end;
        int i = start -1;
        int j = start;
        while (j < pivot)
        {
            if (a[j] < a[pivot])
            {   
                ++i;
                std::swap(a[i], a[j]);
            }
            j++;
        }
        ++i;
        std::swap(a[i], a[pivot]);

        QSort(a, start, i-1);
        QSort(a, i+1, end);
        
    }

    int missingNumber(int arr[], int n){
        int missing = 1;
        int start = 0;
        int end = n-1;
        QSort(arr, start, end);
        int i = 0;

        while (i < n)   
        {
            if (arr[i] == missing)
            {
                missing++;
            }
            ++i;
        }

        return(missing);
        
    }
};

int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    Solution ob;

    std::cout<<ob.missingNumber(arr,8);

    return(0);
}


