#include<iostream>
#include"Player.h"
using namespace std;

    Player::Player()
    {

    }
    Player::Player(string a,string b,string c,int d,string e,string f)
    {
        name = a;
        nationality = b;
        playFor = c;
        matchesPlayed = d;
        playerType = e;
        playerRanking = f;
    }

    void Player::setName(string g)
    {
        name = g;
    }
    string Player::getName()
    {
        return name;
    }

    void Player::setNationality(string h)
    {
        nationality = h;
    }
    string Player::getNationality()
    {
        return nationality;
    }

    void Player::setPlayFor(string i)
    {
        playFor = i;
    }
    string Player::GetPlayFor()
    {
        return playFor;
    }

    void Player::setMatchesPlayed(int j)
    {
        matchesPlayed = j;
    }
    int Player::getMatchesPlayed()
    {
        return matchesPlayed;
    }

    void Player::setPlayerType(string k)
    {
        playerType = k;
    }
    string Player::getPlayerType()
    {
        return playerType;
    }

    void Player::setPlyerRanking(string l)
    {
        playerRanking = l;
    }
    string Player::getPlayerRanking()
    {
        return playerRanking;
    }

    void Player::displayData()
    {
        cout << endl << "\t\t\t\t\tPlayer's Name:\t\t\t\t" << getName();
        cout << endl << "\t\t\t\t\tPlayer's Nationality:\t\t\t" << getNationality();
        cout << endl << "\t\t\t\t\tPlayer's Team: \t\t\t\t" << GetPlayFor();
        cout << endl << "\t\t\t\t\tMatches Played: \t\t\t" << getMatchesPlayed();
        cout << endl << "\t\t\t\t\tPlayer Type:\t\t\t\t" << getPlayerType();
        cout << endl << "\t\t\t\t\tPlayer's Ranking: \t\t\t" << getPlayerRanking() << endl;
    }
