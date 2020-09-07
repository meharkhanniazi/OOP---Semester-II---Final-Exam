#include<iostream>
#include"Team.h"
using namespace std;

    Team::Team()
    {

    }
    Team::Team(string a,string b,string c,int d,int e,int f,int g,int h,Match i)
    {
        name = a;
        ranking = b;
        country = c;
        matchesPlayed = d;
        matchesWon = e;
        matchesLost = f;
        matchesTied = g;
        matchesDrawn = h;
        Mtch.setName(i.getName());
        Mtch.setOponent1(i.getOponent1());
        Mtch.setOponent2(i.getOponent2());
        Mtch.setIsTournament(i.getIsTournament());
        Mtch.setIsSeries(i.getIsSeries());
        Mtch.setIsIndependant(i.getIsIndependant());
    }

    void Team::setName(string a)
    {
        name = a;
    }
    string Team::getName()
    {
        return name;
    }

    void Team::setRanking(string b)
    {
        ranking = b;
    }
    string Team::getRanking()
    {
        return ranking;
    }

    void Team::setCountry(string c)
    {
        country = c;
    }
    string Team::getCountry()
    {
        return country;
    }

    void Team::setMatchesPlayed(int d)
    {
        matchesPlayed = d;
    }
    int Team::getMatchesPlayed()
    {
        return matchesPlayed;
    }

    void Team::setMatchesWon(int e)
    {
        matchesWon = e;
    }
    int Team::getMatchesWon()
    {
        return matchesWon;
    }

    void Team::setMatchesLost(int f)
    {
        matchesLost = f;
    }
    int Team::getMatchesLost()
    {
        return matchesLost;
    }

    void Team::setMatchesTied(int g)
    {
        matchesTied = g;
    }
    int Team::getMatchesTied()
    {
        return matchesTied;
    }

    void Team::setMatchesDrawn(int h)
    {
        matchesDrawn = h;
    }
    int Team::getMatchesDrawn()
    {
        return matchesDrawn;
    }

    void Team::displayData()
    {
        cout << endl << "\t\t\t\t\tTeam's Name:\t\t\t\t" << getName();
        cout << endl << "\t\t\t\t\tTeam's Ranking:\t\t\t\t" << getRanking();
        cout << endl << "\t\t\t\t\tTeam's Country \t\t\t\t" << getCountry();
        cout << endl << "\t\t\t\t\tMatches Played: \t\t\t" << getMatchesPlayed();
        cout << endl << "\t\t\t\t\tMatches Won:\t\t\t\t" << getMatchesWon();
        cout << endl << "\t\t\t\t\tMatches Lost: \t\t\t\t" << getMatchesLost();
        cout << endl << "\t\t\t\t\tMatches Tied: \t\t\t\t" << getMatchesTied();
        cout << endl << "\t\t\t\t\tMatches Drawn: \t\t\t\t" << getMatchesDrawn();
        cout << endl << "\n\t\t\t\t\tScheduled Match:\n";
        cout << endl << "\t\t\t\t\tMatch's Name:\t\t\t\t" << Mtch.getName();
        cout << endl << "\t\t\t\t\tTeam 1:\t\t\t\t\t" << Mtch.getOponent1();
        cout << endl << "\t\t\t\t\tTeam 2: \t\t\t\t" << Mtch.getOponent2();
        cout << endl << "\t\t\t\t\tIs Tournament's Match? \t\t\t" << Mtch.getIsTournament();
        cout << endl << "\t\t\t\t\tIs Series's Match?\t\t\t" << Mtch.getIsSeries();
        cout << endl << "\t\t\t\t\tIs Independant Match? \t\t\t" << Mtch.getIsIndependant()<<endl;
    }
