/* 
    All element occured even number of time except one
    All repeating number - > Pairs repeat
    Ek bar mai koi bhi no. 2 se jyada bar nahi aa sakta.
 */
#include<iostream>
#include<vector>

void getSize(int &size){
    std::cout<<"\nEnter size:\t";
    std::cin>>size;
}

void getInput(std::vector<int> &vec, int size){
    std::cout<<"\nEnter Elements:\t";
    for (int  i = 0; i < size; i++)
    {
        std::cin>>vec[i];
    }
    
}

int findOddElement(std::vector<int> &nums){
    int ans = -1;
    int start =0;
    int end = nums.size()-1;
    while (start <= end)
    {
        int mid = start + (end - start)/2;
        if (start == end)
        {
            return(start);
        }
        
        if(mid%2 == 0){

            if ((mid+1) < nums.size() && nums[mid] == nums[mid+1])
            {
                start = mid + 2;
            }
            else if ((mid-1) >= 0 && nums[mid-1] == nums[mid])
            {
                end = mid -2;
            }
            else{
                return(mid);
            }
        
        }
        else{
                if ((mid-1) >= 0 && nums[mid-1] == nums[mid])
                {
                    start = mid+1;
                }
                else{
                    end = mid-1;
                }
        }
    }

    return(ans);

}

void printOdd(std::vector<int> &nums){
    int odd = findOddElement(nums);

    if (odd == -1)
    {
        std::cout<<"\nOdd Occurrence not found.";
    }
    else{
        std::cout<<"Odd occurring element is:\t"<<nums[odd];
    }
    
}

int main(){
    int size;
    getSize(size);
    std::vector<int> vec(size);
    getInput(vec,size);
    printOdd(vec);
    return(0);
}