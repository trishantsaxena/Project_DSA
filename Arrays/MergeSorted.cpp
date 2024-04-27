#include<iostream>
#include<vector>
void getSize(int &m, int &n){
    std::cout<<"Enter Size1\t";
    std::cin>>m;
    std::cout<<"\nEnter Size2\t";
    std::cin>>n;
}
void takeInput(std::vector<int> &arr1,int m, std::vector<int> &arr2, int n){
    std::cout<<"\nEnter Array1: \t";
    for (int i = 0; i < m; i++)
        std::cin>>arr1[i];

    std::cout<<"\nEnter Array2: \t";
    for (int j = 0; j < n; j++)
        std::cin>>arr2[j];
    
}

std::vector<int> mergerSorted(std::vector<int> &arr1,int m, std::vector<int> &arr2, int n){
    std::vector<int> ans(m+n);
    if (m == 0) return(arr2);
    else if (n == 0) return(arr1);
      
    int i,j,k; i=j=k=0;

    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
            ans[k++] = arr1[i++];

        else
            ans[k++] = arr2[j++];
    }
    

        while (i<m)
                ans[k++] =arr1[i++];

        while (j<n)
                ans[k++] = arr2[j++];

return(ans);    
}
void printOutput(std::vector<int> &res){
    std::cout<<"\nMerged Sorted Array:\t";
    for (int i = 0; i < res.size(); i++)
    {
        std::cout<<res[i]<<" ";
    }
    
}
int main(int argc, char const *argv[])
{
    int size1, size2;
    getSize(size1, size2);

    std::vector<int> arr1(size1);
    std::vector<int> arr2(size2);

    takeInput(arr1, size1, arr2, size2);
    std::vector<int> res = mergerSorted(arr1, size1, arr2, size2);

    printOutput(res);

    return 0;
}
