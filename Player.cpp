#include<iostream>
#include"Player.h"
using namespace std;

    Player::Player()
    {

    }
    Player::Player(string a,string b,string c,int d,string e,string f,Team g)
    {
        name = a;
        nationality = b;
        playFor = c;
        matchesPlayed = d;
        playerType = e;
        playerRanking = f;
        Tm.setName(g.getName());
        Tm.setRanking(g.getRanking());
        Tm.setCountry(g.getCountry());
        Tm.setMatchesPlayed(g.getMatchesPlayed());
        Tm.setMatchesWon(g.getMatchesWon());
        Tm.setMatchesLost(g.getMatchesLost());
        Tm.setMatchesTied(g.getMatchesTied());
        Tm.setMatchesDrawn(g.getMatchesDrawn());
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
        cout << endl << "\t\t\t\t\tPlayer's Ranking: \t\t\t" << getPlayerRanking();
        cout << endl << "\n\t\t\t\t\tPlayer's Team:\n";
        cout << endl << "\t\t\t\t\tTeam's Name:\t\t\t\t" << Tm.getName();
        cout << endl << "\t\t\t\t\tTeam's Ranking:\t\t\t\t" << Tm.getRanking();
        cout << endl << "\t\t\t\t\tTeam's Country \t\t\t\t" << Tm.getCountry();
        cout << endl << "\t\t\t\t\tMatches Played: \t\t\t" << Tm.getMatchesPlayed();
        cout << endl << "\t\t\t\t\tMatches Won:\t\t\t\t" << Tm.getMatchesWon();
        cout << endl << "\t\t\t\t\tMatches Lost: \t\t\t\t" << Tm.getMatchesLost();
        cout << endl << "\t\t\t\t\tMatches Tied: \t\t\t\t" << Tm.getMatchesTied();
        cout << endl << "\t\t\t\t\tMatches Drawn: \t\t\t\t" << Tm.getMatchesDrawn()<<endl;
    }
