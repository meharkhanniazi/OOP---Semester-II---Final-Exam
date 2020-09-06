#ifndef included_TESTMATCH_H
#define included_TESTMATCH_H
#include"Match.h"
using namespace std;
class TestMatch : public Match
{
private:
    int totalOvers;
    int totalDays;

public:
    TestMatch();
    TestMatch(int,int);

    void setTotalOvers(int);
    int getTotalOvers();

    void setTotalDays(int);
    int getTotalDays();

    void displayData();
};

#endif // included_TESTMATCH_H






