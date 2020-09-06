#include<iostream>
#include"Venue.h"
using namespace std;

    Venue::Venue()
    {

    }
    Venue::Venue(string a,string b,double c,int d)
    {
        name = a;
        location = b;
        capacity = c;
        matchesPlayed = d;
    }

    void Venue::setName(string e)
    {
        name = e;
    }
    string Venue::getName()
    {
        return name;
    }

    void Venue::setLocation(string f)
    {
        location = f;
    }
    string Venue::getLocation()
    {
        return location;
    }

    void Venue::setCapacity(double g)
    {
        capacity = g;
    }
    double Venue::getCapacity()
    {
        return capacity;
    }

    void Venue::setMatchesPlayed(int h)
    {
        matchesPlayed = h;
    }
    int Venue::getMatchesPlayed()
    {
        return matchesPlayed;
    }

    void Venue::displayData()
    {
        cout << endl << "\t\t\t\t\tVenue's Name:\t\t\t\t" << getName();
        cout << endl << "\t\t\t\t\tVenue's Location:\t\t\t" << getLocation();
        cout << endl << "\t\t\t\t\tCrowd Capacity: \t\t\t" << getCapacity();
        cout << endl << "\t\t\t\t\tTotal Matches Played Here: \t\t" << getMatchesPlayed() << endl;
    }
