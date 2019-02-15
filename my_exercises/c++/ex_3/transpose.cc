#include <array>
#include <iostream>
#include <math.h>

template <typename T1>
void traspose(T1& matrix, int col, int raw);
template <typename T2>
void printMatrix(T2 matrix, int step);

int main(){
  
    std::array<int,20> matrix{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int col{5};
    int raw{4};

    std::cout<<"The original matrix is: "<<std::endl;
    printMatrix<std::array<int,20>>(matrix,col);
    std::cout<<"-----------------------------"<<std::endl;

    traspose<std::array<int,20>>(matrix,col,raw);
    std::cout<<"The transpose matrix is: "<<std::endl;
    printMatrix<std::array<int,20>>(matrix,raw);
    std::cout<<"-----------------------------"<<std::endl;

    std::array<int,9> matrixS{1,2,3,4,5,6,7,8,9};
    col = 3;
    raw = 3;
    std::cout<<"The original matrix is: "<<std::endl;
    printMatrix<std::array<int,9>>(matrixS,col);
    std::cout<<"-----------------------------"<<std::endl;

    traspose<std::array<int,9>>(matrixS,col,raw);
    std::cout<<"The transpose matrix is: "<<std::endl;
    printMatrix<std::array<int,9>>(matrixS,raw);
    std::cout<<"-----------------------------"<<std::endl;


} 

template <typename T1>


void traspose(T1& matrix, int col, int raw) {
    std::array<int,matrix.size()> matrixTras;
    int j{0};
    int k =0;
    for (auto i = 0u; i < matrix.size(); ++i){
        if(k == raw){
                k=0;
                j++;
        } 
        matrixTras[i]=matrix[j + k * col];
        k++;
    }
    matrix = matrixTras;
}

template <typename T2>

void printMatrix(T2 matrix, int step){
    int j{1};
    for (auto i = 0u; i < matrix.size(); ++i){
        std::cout <<"       "<<matrix[i];
        if(j==step){
            std::cout<<std::endl;
            j=0;
        } 
        j++;
    }
}




