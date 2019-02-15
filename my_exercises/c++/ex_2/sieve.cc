#include <iostream>
#include <cmath>

int main() 
{ 
    int n{0};
    std::cout<<"This program prints on screen the first prime numbers up to n, so give me n:"<<std::endl;
    std::cin>>n;
    
    bool prime[n+1]; 
    for(int i = 0; i<n+1;i++) prime[i]=true;
    for (int p=2; p<=std::sqrt(n); p++){ 
        if (prime[p] == true){                   // If prime[p] is not changed, then it is a prime 
            for (int i=p*2; i<=n; i =i+p)        // Updates all multiples of p 
                prime[i] = false; 
        } 
    } 

    std::cout << "The prime numbers smaller or equals to "<<n<<" are:"<<std::endl;
    for (int p=2; p<=n; p++) 
       if (prime[p]) 
          std::cout << p << " "; 
          
} 