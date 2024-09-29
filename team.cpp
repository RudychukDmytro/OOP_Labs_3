#include "team.h"

// Ініціалізація статичних змінних
int FootballPlayer::playerCount = 0;
int FootballTeam::teamCount = 0;

// Реалізація конструкторів, методів та деструкторів для FootballPlayer
FootballPlayer::FootballPlayer() : name("Unknown"), goals(0), yellowCards(0)
{
    std::cout << "Default constructor called for FootballPlayer\n";
}

FootballPlayer::FootballPlayer(const std::string &name, int goals, int yellowCards)
    : name(name), goals(goals), yellowCards(yellowCards)
{
    std::cout << "Parameterized constructor called for FootballPlayer\n";
}

FootballPlayer::FootballPlayer(const FootballPlayer &other)
    : name(other.name), goals(other.goals), yellowCards(other.yellowCards)
{
    std::cout << "Copy constructor called for FootballPlayer\n";
}

FootballPlayer::~FootballPlayer()
{
    std::cout << "Destroying player: " << name << std::endl;
}

std::string FootballPlayer::getName() const
{
    return name;
}

int FootballPlayer::getGoals() const
{
    return goals;
}

int FootballPlayer::getYellowCards() const
{
    return yellowCards;
}

int FootballPlayer::getPlayerCount()
{
    return playerCount;
}

// Реалізація конструкторів, методів та деструкторів для FootballTeam
FootballTeam::FootballTeam() : teamName("Unknown"), wins(0), losses(0)
{
    std::cout << "Default constructor called for FootballTeam\n";
}

FootballTeam::FootballTeam(const std::string &name, int wins, int losses)
    : teamName(name), wins(wins), losses(losses)
{
    std::cout << "Parameterized constructor called for FootballTeam\n";
}

FootballTeam::FootballTeam(const FootballTeam &other)
    : teamName(other.teamName), wins(other.wins), losses(other.losses), players(other.players)
{
    std::cout << "Copy constructor called for FootballTeam\n";
}

FootballTeam::~FootballTeam()
{
    std::cout << "Destroying team: " << teamName << std::endl;
}

std::string FootballTeam::getTeamName() const
{
    return teamName;
}

void FootballTeam::addPlayer(const FootballPlayer &player)
{
    players.push_back(player);
}

FootballPlayer FootballTeam::getTopScorer() const
{
    FootballPlayer topScorer = players[0];
    for (const auto &player : players)
    {
        if (player.getGoals() > topScorer.getGoals())
        {
            topScorer = player;
        }
    }
    return topScorer;
}

int FootballTeam::getTeamCount()
{
    return teamCount;
}

// Функція для друку інформації про гравця
void printPlayer(const FootballPlayer &player)
{
    std::cout << "Player: " << player.getName() << ", Goals: " << player.getGoals()
              << ", Yellow Cards: " << player.getYellowCards() << std::endl;
}

// Функція для друку інформації про команду
void printTeam(const FootballTeam &team)
{
    std::cout << "Team: " << team.getTeamName() << ", Wins: " << team.wins
              << ", Losses: " << team.losses << std::endl;
}
