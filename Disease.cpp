#include<iostream>
#include"Disease.h"
using namespace std;

    Disease::Disease()
    {

    }
    Disease::Disease(string a,string b,string c)
    {
        name = a;
        level = b;
        category = c;
    }

    void Disease::setName(string d)
    {
        name = d;
    }
    string Disease::getName()
    {
        return name;
    }

    void Disease::setLevel(string e)
    {
        level = e;
    }
    string Disease::getLevel()
    {
        return level;
    }

    void Disease::setCategory(string f)
    {
        category = f;
    }
    string Disease::getCategory()
    {
        return category;
    }

    void Disease::displayData()
    {
        cout << endl << "\tDisease Name:\t\t\t" << name;
        cout << endl << "\tDisease Level:\t\t\t" << level;
        cout << endl << "\tDisease Category:\t\t" << category << endl;
    }
