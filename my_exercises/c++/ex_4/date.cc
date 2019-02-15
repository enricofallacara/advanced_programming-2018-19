#include <iostream>

enum class Month{january=1,february,march,april,may,june,july,august,september,october,november,december};

class Date{
    private:

    unsigned int day;
    Month month;
    unsigned int year;
    void add_Day();

    public:
    Date(unsigned int d, const unsigned int m, unsigned int y);
    unsigned int getDay();
    Month getMonth();
    unsigned int getYear();   
    void add_Days(const unsigned int n);
};

Date::Date(unsigned int d, unsigned int  m, unsigned int y)
    :day{d},
     month{Month(m)},
     year{y}
     {
//           std::cout << "custom ctor\n";

     }

unsigned int Date::getDay(){
    return day;
}

Month Date::getMonth(){
    return month;
}

unsigned int Date::getYear(){
    return year;
}

void Date::add_Day(){
    
 switch (month) {
    case Month::january: case Month::march: case Month::may:
    case Month::july: case Month::august: case Month::october:

        if(day==31){day=1;
                    month=Month(int(month)+1);} 
        else day++;
        break;

    case Month::february:

        if(day==28){day=1;
                    month=Month(int(month)+1);} 
        else day++;
        break;
    
    case Month::april: case Month::june: case Month::november:
    case Month::september:

        if(day==30){day=1;
                    month=Month(int(month)+1);} 
        else day++;
        break;
    case Month::december:

    if(day==30){day=1;
                month=Month::january;
                year++;} 
        else day++;
        break;    
    
    }

}
void Date::add_Days(const unsigned int n){
    for(int i=0;i<n;i++){
        add_Day();
    }
}

bool operator == ( Date& lhs, Date& rhs){
    if(lhs.getDay()==rhs.getDay() && lhs.getMonth()==rhs.getMonth() && lhs.getYear() == rhs.getYear()) return true;
    else return false;
}

bool operator !=(Date& lhs, Date& rhs){
 if(lhs.getDay()!= rhs.getDay()|| lhs.getMonth()!=rhs.getMonth()|| lhs.getYear()!=rhs.getYear()) return true;
 else return false;
}

std::ostream& operator <<(std::ostream& os, Date& d){
 os<<d.getDay()<<" ";
 os<<int(d.getMonth())<<" ";
 os<<d.getYear();
 return os;
}

int main(){
    unsigned int d{27};
    unsigned int y{1999}; 
    unsigned int m{12};
    Date date{d,m,y};
    Date date2{27,12,1999};
    std::cout<<"First date: "<<date<<std::endl;
    std::cout<<"Second date: "<<date2<<std::endl;
    if(date == date2)   std::cout<<"Dates are equal"<<std::endl;
    std::cout<<"Let's apply the add_Days(5) function to the first date"<<std::endl;
    date.add_Days(5);
    std::cout<<"First date: "<<date<<std::endl;
    std::cout<<"Second date: "<<date2<<std::endl;
    if(date != date2)   std::cout<<"Dates are not equal anymore"<<std::endl;

}
