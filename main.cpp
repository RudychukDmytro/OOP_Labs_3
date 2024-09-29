#include "team.h"
#include <iostream>

int main()
{
    // Створення гравців
    FootballPlayer player1("Player1", 10, 2);
    FootballPlayer player2("Player2", 7, 1);

    // Створення команд
    FootballTeam teamA("Team A", 5, 2);
    teamA.addPlayer(player1);
    teamA.addPlayer(player2);

    // Вивід інформації про команду та її гравців
    printTeam(teamA);
    printPlayer(player1);
    printPlayer(player2);

    // Отримання кращого бомбардира команди
    FootballPlayer topScorer = teamA.getTopScorer();
    std::cout << "Top Scorer: " << topScorer.getName() << std::endl;

    return 0;
}
