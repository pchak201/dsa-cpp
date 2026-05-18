#include <iostream>
using std::cout, std::cin , std::endl ;

int main()
{ 
    int num=5; 
    int *ptr1 =&num; 
    int **ptr2 = &ptr1 ; 
    cout<< "The value of num is : " <<num<<endl;  
    cout<< "The address of ptr2 is : " <<*ptr1<<endl;  
    cout<< "The address of ptr2 is : " <<**ptr2<<endl;  
    cout<<endl; 
   
    cout<< "what's inside ptr1 : "<< ptr1<< endl;  
    cout<< "what's inside ptr1 : "<< *ptr2<< endl;  
    cout<< "what's inside ptr1 : "<< &num<< endl;  
    cout<<endl; 

    cout<< "what's inside ptr2 : "<< ptr2<< endl;  
    cout<< "What's inside ptr2 : "<< &ptr1<< endl;  
    cout<<endl; 
}
