#ifndef LAB4_PARFUM_H
#define LAB4_PARFUM_H
#include<string>
#include<iostream>
using namespace std;

class parfum {

private:
    string name;
    int volume;
    int price;

protected:
    string color;
    string smell;

public:
    string country;
    int alcohol;

    parfum();

    parfum(int parfumvolume, string parfumname, int parfumprice, string parfumcolor, string parfumsmell);

    int getPrice();

    string getColor();

    string getName();

    int getVolume();

    string getSmell();

    void get_information();

    ~parfum();
};

#endif