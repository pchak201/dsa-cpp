#include <iostream> 
#include <vector> 

int main()
{ 
    std::vector<int> v(20,1) ; 
    int n; 
    std::cout<< "Enter the size of the vector : "; 
    std::cin>> n ; 
    for (int i=0; i<n; i++)
    { 
        int elem; 
        std::cout<< "Enter element " << i+1 << " : "; 
        std::cin>> elem; 
        v.push_back(elem); 
        std::cout<< "\nThe size of the array is : " << v.size(); 
        std::cout<< "\nThe capacity of the array is : " << v.capacity() << "\n\n"; 
    }

    for (int elem : v)
    { 
        std::cout<< elem << " "; 
    }
    std::cout<< "\n"; 
}