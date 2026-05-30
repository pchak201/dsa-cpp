#include <iostream> 
#include <vector> 
using std::vector; 

vector<int> twoSum(vector<int>&, int); 

int main()
{ 
    std::vector<int> arr ={ 1,2,3,4,5} ; 
    int target; 
    std::cout<< "Enter the target : "; 
    std::cin>> target; 
    vector<int> ans=twoSum(arr,target); 
    for (int elem: ans)
    { 
        std::cout<< elem << " "; 
    }
    std::cout<< "\n"; 
} 

vector<int> twoSum(vector<int>& arr, int target)
{
    for (int i=0; i<arr.size(); i++)    
    { 
        for (int j=i+1; j<arr.size(); j++)
        { 
            if (arr[i]+arr[j]== target && i!=j)
            { 
                return {i,j}; 
            }
        }
    }
    return {}; 
}