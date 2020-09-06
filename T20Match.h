#ifndef included_T20MATCH_H
#define included_T20MATCH_H
#include"Match.h"
using namespace std;
class T20Match : public Match
{
private:
    int totalOvers;
    int totalDays;
    string dayNight;

public:
    T20Match();
    T20Match(int,int,string);

    void setTotalOvers(int);
    int getTotalOvers();

    void setTotalDays(int);
    int getTotalDays();

    void setDayNight(string);
    string getDayNight();

    void displayData();
};

#endif // included_T20MATCH_H






