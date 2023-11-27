/*
This project going to be an rock paper siccors game.
Made by 2983u2 on Discord.
*/

#include <iostream>
#include <ctime>
#include <set>
#include <map>

// a very bad rock paper scissors program, this could be significantly improved
// originally meant to be just a fix but i have pretty much rewrote the entire thing

int main(){
    srand(time(0));

    // replace array with set and add a map of wins, simplifies the program kind of
    std::set<std::string> wordList {"rock", "paper", "scissors"};
    std::map<std::string, std::string> winList = {{"rock", "paper"},{"paper", "scissors"},{"scissors", "rock"}};
    std::string word = *std::next(wordList.begin(), rand() % 3); // Randomly pick item from wordList
    std::string user;
    std::cout << "Rock, Paper, Scissors SHOOT!~ ";
    std::cin >> user;
    // check if what was entered is actually correct instead of continuing
    if (wordList.count(user) == 0) {
        std::cout << "Bad input\n";
        return -1;
    }
    // If what we chose and what the user chose are equal then the game is a tie
    std::cout << "Compter: " << word << "\n\n";
    if (word == user) {
        std::cout << "TIE!\n";
        return 1;
    }
    // no need to add an if, else here. The above if's will guard and prevents the program from continuing
    // also replace big nested if mess with a single one and a map
    if (winList[word] == user) {
        std::cout << "You win\n";
    } else {
        std::cout << "Compter wins\n";
    }
    return 0;
}
