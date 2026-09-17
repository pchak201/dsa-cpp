#include <iostream> 
#include <vector>

int max (std::vector<int> &arr)
{ 
    int max = INT_MIN; 
    for (int i=0; i<arr.size(); i++)
    { 
        if (arr[i]>max)
            max=arr[i];
    }
    return max;
}

int main()
{ 
    std::vector<int> arr = {5,2,1,6,6,7,3,3,4};
    
    for (int i=0; i<arr.size(); i++)
    { 
        std::cout<< arr[i] << " ";
    }
    std::cout<<"\n";
    std::vector<int> hash_array (max(arr)+1,0);
    for (int i=0; i<arr.size(); i++)
        hash_array [arr[i]] +=1;

    int key ;
    std::cout << "Enter the element : ";
    std::cin>>key; 
    std::cout<< key << " appears in the array " << hash_array[key] << " number of times \n"; 
}