#ifndef included_MATCH_H
#define included_MATCH_H
#include"Venue.h"
class Venue;
using namespace std;
class Match
{
private:
    string name;
    string oponent1;
    string oponent2;
    string isTournament;
    string isSeries;
    string isIndependant;
    Venue Ven;

public:
    Match();
    Match(string,string,string,bool,bool,bool,Venue);

    void setName(string);
    string getName();

    void setOponent1(string);
    string getOponent1();

    void setOponent2(string);
    string getOponent2();

    void setIsTournament(string);
    string getIsTournament();

    void setIsSeries(string);
    string getIsSeries();

    void setIsIndependant(string);
    string getIsIndependant();

    void displayData();
};

#endif // included_MATCH_H


