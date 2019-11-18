#include "parfum.h"
using namespace std;

parfum::parfum(){
    volume;
    name;
    price;
    color;
    smell;
}

parfum:: parfum(int parfumvolume, string parfumname, int parfumprice, string parfumcolor, string parfumsmell){
    volume=parfumvolume;
    name=parfumname;
    price=parfumprice;
    color=parfumcolor;
    smell=parfumsmell;
}
    int parfum::getVolume(){
    return volume;
}
    string parfum::getName(){
    return name;
}
    int parfum::getPrice(){
    return price;
}
    string parfum::getColor(){
    return color;
}
    string parfum::getSmell(){
    return smell;
}
void parfum::get_information(){
    cout<< "\nName of parfum is " <<"\""<<getName() << "\"" <<" |"<<
    " Volume  is " << getVolume() << " |"<<
    " Price is " << getPrice() <<" |"<<
    " Color is " << getColor() <<" |"<<
    " Smell is " << getSmell() << "\n";
}
    parfum::~parfum(){}