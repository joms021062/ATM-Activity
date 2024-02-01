#include <iostream>
#include <string>

const int maxPlayers = 5;

struct Player {
    std::string nickname;
    int age;
    int score1, score2;

    double getAverage() const {
        return (score1 + score2) / 2.0;
    }
};

int main() {
    Player players[maxPlayers];
    int playerCount = 0;

    while (true) {
        std::cout << "MENU\n"
            << "1. Add record\n"
            << "2. View players records\n"
            << "3. Compute for the average\n"
            << "4. Show the player(s) who gets the max average.\n"
            << "5. Show the player(s) who gets the min average.\n"
            << "6. Exit\n";

        int choice;
        std::cin >> choice;

        if (choice == 6) break;

        switch (choice) {
        case 1: {
            if (playerCount < maxPlayers) {
                Player& p = players[playerCount++];
                std::cout << "Enter nickname, age, and two best played scores: ";
                std::cin >> p.nickname >> p.age >> p.score1 >> p.score2;
            }
            else {
                std::cout << "Player limit reached. Cannot add more players.\n";
            }
            break;
        }
        case 2:
            for (int i = 0; i < playerCount; ++i) {
                const Player& p = players[i];
                std::cout << p.nickname << ' '
                    << p.age << ' '
                    << p.score1 << ' '
                    << p.score2 << '\n';
            }
            break;

            
        }
    }

    return 0;
}
