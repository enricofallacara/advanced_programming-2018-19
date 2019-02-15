#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>


int main(){
    std::vector<double> v;
    double sum{0};
    double temp{0};
    double mean{0};
    double median{0};
    int i{0};

    while(std::cin>>temp){
        v.push_back(temp);
        sum =  sum + v[i];
        i++;
    }
    
    std::sort( v.begin(), v.end() );
    mean = sum / (v.size());
    std::cout<<"The mean is equal to: "<<mean<<std::endl;
    if(v.size() % 2 == 0) median = (v[(v.size()/2)] + v[(v.size()/2) + 1])/2;
    else median = v[floor(v.size()/2)];
    std::cout<<"The median is equal to: "<<median<<std::endl;

}