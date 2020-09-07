#ifndef included_PLAYER_H
#define included_PLAYER_H
#include"Team.h"
class Team;
using namespace std;
class Player
{
private:
    string name;
    string nationality;
    string playFor;
    int matchesPlayed;
    string playerType;
    string playerRanking;
    Team Tm;

public:
    Player();
    Player(string,string,string,int,string,string,Team);

    void setName(string);
    string getName();

    void setNationality(string);
    string getNationality();

    void setPlayFor(string);
    string GetPlayFor();

    void setMatchesPlayed(int);
    int getMatchesPlayed();

    void setPlayerType(string);
    string getPlayerType();

    void setPlyerRanking(string);
    string getPlayerRanking();

    void displayData();
};

#endif // included_PLAYER_H




