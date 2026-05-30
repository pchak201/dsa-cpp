#include <iostream> 
#include <array> 

int main()
{ 
    // int arr[5] = {1,2,3,4,5}; 
    // this is the same as the one below
    std::array<int,5> arr = {1,2,3,4,5}; 
    // int size = sizeof(arr)/sizeof(arr[0]); 
    int size = arr.size(); 

    std::cout<< "\n"; 
    std::cout<< "The elements of the array are : \n"; 
    for (int elem : arr)
    { 
        std::cout<< elem << " "; 
    }
    std::cout<< "\n"; 
    std::cout<< "\n"; 

    std::cout<< "The size of the array is : " << size << "\n"; 
    // std::cout<< arr[0]; 
    std::cout<< "Element at 2nd index is : " << arr.at(2)<< "\n"; 

    std::cout<< "The first element is : " << arr.front()<< "\n"; 
    std::cout<< "The last element is : " << arr.back()<< "\n"; 
    std::cout<< "Empty or not : " << std::boolalpha << arr.empty(); 

    std::cout<< "\n"; 
    std::cout<< "\n"; 
    arr.fill(10); 
    std::cout<< "The updated elements of the array now are : \n"; 
    for (int elem : arr)
    { 
        std::cout<< elem << " "; 
    }
    std::cout<< "\n"; 

    std::cout<< "\nNow, adding 1 to each element \n"; 
    for (int &elem : arr)
    { 
        elem+=1 ;
    }
    // if &num wasn't used, the array would be copies as a copy and the changes wouldn't be reflected outside the scope

    std::cout<< "The updated array now is : \n"; 
    for (int elem : arr)
    { 
        std::cout<< elem << " "; 
    }
    std::cout<< "\n"; 
}
