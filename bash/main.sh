#!/usr/bin/env bash
# This project going to be an rock paper siccors game.
# Made by 2983u2 on Discord.

# a very bad rock paper scissors program, this could be significantly improved
# originally meant to be just a fix but i have pretty much rewrote the entire thing

function main() {
    declare wordList=( "rock" "paper" "scissors" )
    declare -A winList=( ["rock"]="paper" ["paper"]="scissors" ["scissors"]="rock" )
    declare word=${wordList["$(expr $RANDOM % 3)"]} # Randomly pick item from winList, works the same as if we had wordList line in C++
    echo -n "Rock, Paper, Scissors SHOOT!~ "
    read user
    # check if what was entered is actually correct instead of continuing
    if [ "${winList[$user]}" == "" ]; then
        echo "Bad input"
        return 1
    fi
    # If what we chose and what the user chose are equal then the game is a tie
    printf "Compter: %s\n\n" "$word"
    if [ "$word" == "$user" ]; then
        echo "TIE!"
        return 2;
    fi
    # no need to add an if, else here. The above if's will guard and prevents the program from continuing
    # also replace big nested if mess with a single one and a map
    if [ "${winList[$word]}" == "$user" ]; then
        echo "You win"
    else
        echo "Compter wins"
    fi
}

main
