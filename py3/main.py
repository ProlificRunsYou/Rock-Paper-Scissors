#!/usr/bin/env python
# This project going to be an rock paper siccors game.
# Made by 2983u2 on Discord.

import random

# a very bad rock paper scissors program, this could be significantly improved
# originally meant to be just a fix but i have pretty much rewrote the entire thing

def main():
    winList = {"rock":"paper","paper":"scissors","scissors":"rock"}
    word = list(winList.keys())[random.randint(0,2)] # Randomly pick item from winList, works the same as if we had wordList line in C++
    user = input("Rock, Paper, Scissors SHOOT!~ ")
    # check if what was entered is actually correct instead of continuing
    if user not in winList:
        print("Bad input")
        return -1;
    # If what we chose and what the user chose are equal then the game is a tie
    print("Compter: %s\n" % word)
    if word == user:
        print("TIE!")
        return 1;
    # no need to add an if, else here. The above if's will guard and prevents the program from continuing
    # also replace big nested if mess with a single one and a map
    if winList[word] == user:
        print("You win")
    else:
        print("Compter wins")

if __name__ == "__main__":
	main()
