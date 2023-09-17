#include<iostream>
#include<vector>
#include<chrono>

int findLastOccurence(std::vector<int> &nums, int target) {
    int ans;
    int start = 0;
    int end = nums.size() - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (nums[mid] == target) {
            ans = mid;
            start = mid + 1;
        }
        else if (nums[mid] < target) {
            start = mid + 1;
        }
        else if (nums[mid] > target) {
            end = mid - 1;
        }
    }
    return ans;
}

void printExecutionTime(const std::chrono::high_resolution_clock::time_point& start,
                       const std::chrono::high_resolution_clock::time_point& end) {
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\nExecution Time: " << duration.count() << " milliseconds" << std::endl;
}

int main() {
    int size;
    int target;
    std::cout << "Size of array: \t";
    std::cin >> size;
    std::vector<int> vec(size);
    std::cout << "\nEnter elements: \n";
    for (int i = 0; i < size; i++) {
        std::cin >> vec[i];
    }
    std::cout << "Enter Target: \t";
    std::cin >> target;

    // Record the start time
    auto start_time = std::chrono::high_resolution_clock::now();

    // Call the function you want to measure
    int result = findLastOccurence(vec, target);

    // Record the end time
    auto end_time = std::chrono::high_resolution_clock::now();

    std::cout << "\n" << target << " Last occurence is " << result;

    // Print the execution time
    printExecutionTime(start_time, end_time);

    return 0;
}
