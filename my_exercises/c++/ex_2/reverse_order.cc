#include <iostream>
#include <string>

template <typename T1>
T1* init(int n);
template <typename T2>
void reverse(T2 ptr, int n);

int main(){

    int n{0};
    
    std::cout<<"Insert the length of the array of Integers"<<std::endl;
    std::cin>>n;

    int* ptrInt = init<int>(n);
    reverse(ptrInt,n);
    delete[] ptrInt;

    std::cout<<"---------------------------------"<<std::endl;
    std::cout<<"Insert the length of the array of Doubles"<<std::endl;
    std::cin>>n;

    double* ptrDouble = init<double>(n);
    reverse(ptrDouble,n);
    delete[] ptrDouble;
}
   
template <typename T1>
T1* init(int n){
    
    T1* vect{new T1[n]};
    for(int i{0};i<n;i++){
        std::cout<<"Give me the "<<i+1<<"-element of the array"<<std::endl;
        std::cin>>vect[i];
    }
    T1* point{&vect[0]};
    return point;   
}

template <typename T2>
void reverse(T2 ptr, int n){

    std::cout<<"---------------------------------"<<std::endl;
    std::cout<<"Reversed array: "<<std::endl;
    for(int i{0}; i<n;i++){
     std::cout<<*(ptr+n-i-1)<<std::endl;
    }
}