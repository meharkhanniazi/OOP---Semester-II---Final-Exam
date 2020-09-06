#ifndef included_ONEDAYMATCH_H
#define included_ONEDAYMATCH_H
#include"Match.h"
using namespace std;
class OneDayMatch : public Match
{
private:
    int totalOvers;
    int totalDays;

public:
    OneDayMatch();
    OneDayMatch(int,int);

    void setTotalOvers(int);
    int getTotalOvers();

    void setTotalDays(int);
    int getTotalDays();

    void displayData();
};

#endif // included_ONEDAYMATCH_H





