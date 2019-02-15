#include <iostream>
#include <string>

int getInt();
double getDouble();

int main(){

int a;
double b;

std::cout<<"Insert a integer:"<<std::endl;
a = getInt();
std::cout<<"The integer that has been entered is:"<<a<<std::endl;

std::cout<<"Insert a double:"<<std::endl;
b = getDouble();
std::cout<<"The double that has been entered is:"<<b<<std::endl;

}

int getInt(){

int x;
while(!(std::cin >> x)){ 
    std::cin.clear();
    std::cin.ignore();                    
}
return x;
}

double getDouble(){

double y;
while(!(std::cin >> y)){ 
    std::cin.clear();
    std::cin.ignore();                    
}
return y;
}


