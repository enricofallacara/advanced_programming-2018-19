#include <iostream>
#include <string>

int main(){

std::string line;
std::string compare = "";
int i={0};

while(std::getline(std::cin,line)){    
    if(line == compare|| i==0){
        i++;
        compare = line;
    }
    else{ 
        std::cout<<"    "<<i<<" "<<compare<<std::endl;
        i=1;
    }
    compare = line;
}

}
