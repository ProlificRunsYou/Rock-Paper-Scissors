/*
This project going to be an rock paper siccors game.
Made by 2983u2 on Discord.
*/


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


int main(){
    std::string user;

    srand(time(0));
    //Using const so it can never be changed after its first creation.
    const std::string wordList[3]{"Rock", "Paper", "Scissor"};
    std::cout << "Rock, Paper, Scissor SHOOT!~ ";
    std::cin >> user;
    //Selects a word from "wordList" and holds onto it.
    std::string word = wordList[rand() % 3];
    //If two varables are equal then it responds with "TIE!". "==" means "Comparison operator"
    if (word==user){
        std::cout << "TIE!";
    //If two varables are different then it continues the game. "!=" means "Not-equal-to operator"
    } else if (word!=user){
        if (word=="Rock"){
            if (user=="Scissor"){
                std::cout << "Computer: " << word << std::endl;
                std::cout << "COMPUTER WINS!" << std::endl;
            }
        if (word=="Rock"){
            if (user=="Paper"){
                std::cout << "Computer: " <<word << std::endl;
                std::cout << "USER WINS!" << std::endl;
                }
            }
        if (word=="Paper"){
            if (user=="Scissor"){
                std::cout << "Computer: " <<word << std::endl;
                std::cout << "USER WINS!" << std::endl;
                }
            }
        if (user=="Scissor"){
            if (word=="Paper"){
                std::cout << "Computer: " <<word << std::endl;
                std::cout << "USER WINS!" << std::endl;
                }
        }
        if (user=="Rock"){
            if (word=="Scissor"){
                std::cout << "Computer: " <<word << std::endl;
                std::cout << "USER WINS!" << std::endl;
            }
        if (user=="Rock"){
            if (word=="Paper"){
                std::cout << "Computer: " <<word << std::endl;
                std::cout << "COMPUTER WINS!" << std::endl;
                }
            }
        if (user=="Paper"){
            if (word=="Scissor"){
                std::cout << "Computer: " <<word << std::endl;
                std::cout << "COMPUTER WINS!" << std::endl;
            }
        }
        }
        }
    }
    return 0;
}
