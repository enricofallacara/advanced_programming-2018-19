#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


int main(){

    std::string cond{"y"};
    std::vector<std::string> v;
    std::string word;

    while(cond=="y"){
        std::cout<<"Insert a word:"<<std::endl;
        std::cin>>word;
        v.push_back(word);
        std::cout<<"Do you want to continue?[y/n]"<<std::endl;
        std::cin>>cond;
    }

    std::sort( v.begin(), v.end() );
    for (auto i = 0u; i < v.size(); ++i){
        if(i!=v.size()-1){
            for(auto j = i+1; j < v.size(); ++j)
                    if(v[j]==v[i]) v.erase(v.begin()+j);
        }
        else if(i==v.size()-1 && v[i]== v[i-1]) v.erase(v.begin()+i);           
    }
     
    for (auto i = 0u; i < v.size(); ++i) std::cout<<v[i]<<" ";
    std::cout<<std::endl;
}