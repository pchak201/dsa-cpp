#include <iostream> 
#include <vector> 
using std::vector; 
#include <algorithm>


void inputVector(vector<int>&, int); 
void displayVector(const vector<int>&); 
vector<int> intersection(vector<int>& nums1, vector<int>& nums2); 
bool notIn(const vector<int>& arr, int n); 

int main()
{ 
    vector <int> v; 
    int n; 
    std::cout<< "Enter the size of the vector : "; 
    std::cin>> n; 
    inputVector(v,n); 
    std::cout<< "\nThe duplicate elements are : "; 
    displayVector(findDuplicates(v)); 
}

void inputVector(vector<int> &v, int n)
{
    int elem; 
    for (int i=0; i<n ;i++)
    { 
        std::cout<< "Enter element " << i+1 << " : "; 
        std::cin>> elem; 
        v.push_back(elem); 
    }
}

void displayVector(const vector<int>& v)
{ 
    std::cout<< "\nThe elements of the vector are : \n"; 
    for (int num: v)
        std::cout<< num << " "; 
    std::cout<< "\n"; 
}

// // this is the brute force approach - time complexity is O(n^m) - very bad

// vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
// { 
//     vector<int> inter; 
//     for (int i=0; i<nums1.size(); i++)
//     { 
//         bool checked=false; 
//         for (int j=0; j<i; j++)
//         { 
//             if (nums1[i]==nums1[j])
//             { 
//                 checked=true; 
//                 break; 
//             }
//         }
//         if (!checked)
//         {
//             for (int j=0; j<nums2.size(); j++)
//             { 
//                 if (nums1[i]==nums2[j])
//                 { 
//                     if(notIn(inter,nums1[i]))
//                     { 
//                         inter.push_back(nums1[i]); 
//                     }
//                 }
//             }
//         }
//     }
//     return inter; 
// }


// this is the two pointer approach - more efficient - time complexity is O(n+m)
vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
{
    vector<int> dup ; 
    sort(nums1.begin(), nums1.end()); 
    sort(nums2.begin(), nums2.end()); 
    int i=0, j=0; 
    while (i<nums1.size() && j<nums2.size())
    {
        if (nums1[i]<nums2[j])
        { 
            i++; 
        }
        else if (nums1[i]>nums2[j])
        { 
            j++;  
        }
        else if (nums1[i]==nums2[j])
        { 
            if (notIn(dup,nums1[i]))
                dup.push_back(nums1[i]); 
            i++; 
            j++; 
        }
    }
    return dup; 
}
bool notIn(const vector<int>& arr, int n)
{ 
    for (int elem : arr)
    { 
        if (elem==n)
            return false; 
    }
    return true; 
}
