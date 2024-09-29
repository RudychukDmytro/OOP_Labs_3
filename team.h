#ifndef TEAM_H
#define TEAM_H

#include <string>
#include <iostream>
#include <vector>

// Клас гравця
class FootballPlayer
{
    std::string name;
    int goals;
    int yellowCards;

public:
    // Конструктори
    FootballPlayer();
    FootballPlayer(const std::string &name, int goals, int yellowCards);
    FootballPlayer(const FootballPlayer &other);

    // Деструктор
    ~FootballPlayer();

    // Статичне поле
    static int playerCount;

    // Методи
    std::string getName() const;
    int getGoals() const;
    int getYellowCards() const;

    // Статичний метод
    static int getPlayerCount();

    // Метод для обчислень (приклад статичної функції поза класом)
    int scorePerGame(int gamesPlayed) const;

    friend void printPlayer(const FootballPlayer &player);
};

// Клас команди
class FootballTeam
{
    std::string teamName;
    int wins;
    int losses;
    std::vector<FootballPlayer> players;

public:
    // Конструктори
    FootballTeam();
    FootballTeam(const std::string &name, int wins, int losses);
    FootballTeam(const FootballTeam &other);

    // Деструктор
    ~FootballTeam();

    // Статичне поле
    static int teamCount;

    // Методи
    std::string getTeamName() const;
    void addPlayer(const FootballPlayer &player);
    FootballPlayer getTopScorer() const;

    // Статичний метод
    static int getTeamCount();

    friend void printTeam(const FootballTeam &team);
};

#endif
