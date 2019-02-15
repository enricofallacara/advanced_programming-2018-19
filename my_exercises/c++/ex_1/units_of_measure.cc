#include <iostream>
#include <string>

using namespace std;

int main(){

double number=0;
string uom;

cout<<"Enter the number and the unit of measure"<<endl;
cin>>number>>uom;

if(uom == "inch"){
        cout<<"According to SI: "<<number<<" "<<uom<<" are "<<number*0.0254<<" meters"<<endl;
}
else if(uom == "foot"){
        cout<<"According to SI: "<<number<<" "<<uom<<" are "<<number*0.3048<<" meters"<<endl;
}
else if(uom == "yard"){
        cout<<"According to SI: "<<number<<" "<<uom<<" are "<< number * 0.9144<<" meters"<<endl;
}
else if(uom == "mile"){
        cout<<"According to SI: "<<number<<" "<<uom<<" are "<<number * 1609.344<<" meters"<<endl;
}
else{
        cout<<"Wrong unit of measure"<<endl;
}

}