#include<iostream>
#include"Match.h"
using namespace std;

    Match::Match()
    {

    }
    Match::Match(string a,string b,string c,bool d,bool e,bool f,Venue g)
    {


        name = a;
        oponent1 = b;
        oponent2 = c;
        if(d == true)
        {
        isTournament = "Yes";
        }
        else if(d == false)
        {
        isTournament = "No";
        }
        if(e == true)
        {
        isSeries = "Yes";
        }
        else if(e == false)
        {
        isSeries = "No";
        }
        if(f == true)
        {
        isIndependant = "Yes";
        }
        else if(f == false)
        {
        isIndependant = "No";
        }
        Ven.setName(g.getName());
        Ven.setLocation(g.getLocation());
        Ven.setCapacity(g.getCapacity());
        Ven.setMatchesPlayed(g.getMatchesPlayed());
    }

    void Match::setName(string g)
    {
        name = g;
    }
    string Match::getName()
    {
        return name;
    }

    void Match::setOponent1(string h)
    {
        oponent1 = h;
    }
    string Match::getOponent1()
    {
        return oponent1;
    }

    void Match::setOponent2(string i)
    {
        oponent2 = i;
    }
    string Match::getOponent2()
    {
        return oponent2;
    }

    void Match::setIsTournament(string j)
    {
        isTournament = j;
    }
    string Match::getIsTournament()
    {
        return isTournament;
    }

    void Match::setIsSeries(string k)
    {
        isSeries = k;
    }
    string Match::getIsSeries()
    {
        return isSeries;
    }

    void Match::setIsIndependant(string l)
    {
        isIndependant = l;
    }
    string Match::getIsIndependant()
    {
        return isIndependant;
    }

    void Match::displayData()
    {
        cout << endl << "\t\t\t\t\tMatch's Name:\t\t\t\t" << getName();
        cout << endl << "\t\t\t\t\tTeam 1:\t\t\t\t\t" << getOponent1();
        cout << endl << "\t\t\t\t\tTeam 2: \t\t\t\t" << getOponent2();
        cout << endl << "\t\t\t\t\tIs Tournament's Match? \t\t\t" << getIsTournament();
        cout << endl << "\t\t\t\t\tIs Series's Match?\t\t\t" << getIsSeries();
        cout << endl << "\t\t\t\t\tIs Independant Match? \t\t\t" << getIsIndependant();
        cout << endl << "\t\t\t\t\tVenue's Name:\t\t\t\t" << Ven.getName();
        cout << endl << "\t\t\t\t\tVenue's Location:\t\t\t" << Ven.getLocation();
        cout << endl << "\t\t\t\t\tCrowd Capacity: \t\t\t" << Ven.getCapacity();
        cout << endl << "\t\t\t\t\tTotal Matches Played Here: \t\t" << Ven.getMatchesPlayed() << endl;
     }
