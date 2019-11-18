#include "parfum.h"
#include <iostream>
using namespace std;

int main() {
    parfum first (50, "Clive Christian V For Men", 6791, "brown", "nutmeg");
    first.country = "United Kingdom";
    first.get_information();;
    cout<<"Country:"<<first.country<<endl;
    first.alcohol = 80;
    cout<<"Alcohol percent:"<<first.alcohol<<'%'<<endl;


    parfum second (100, "Bond No9 Queens", 3503, "purple", "blackberry");
    second.country = "USA";
    second.get_information();
    cout<<"Country:"<<second.country<<endl;
    second.alcohol = 85;
    cout<<"Alcohol percent:"<<second.alcohol<<'%'<<endl;


    parfum third (100, "Lanvin Arpege", 839, "orange", "peach");
    third.country = "France";
    third.get_information();
    cout<<"Country:"<<third.country<<endl;
    third.alcohol = 90;
    cout<<"Alcohol percent:"<<third.alcohol<<'%'<<endl;
}