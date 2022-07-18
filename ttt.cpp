#include <iostream>
#include <string> 
#include <sstream>
#include "ttt_functions.hpp"

std::string array[3][3]; 
std::string symbol = "undefined";
int line;
int col;
std::string winner_symbol = "undefined";
int turn = 0;

int main() {
    std::cout << "----------------------------------------------------------ROUND STARTS---------------------------------------------------------- \n";
    for(int i = 0; i < 3; ++i)  
    {   
        std::cout<< "\n  ";
        for(int j = 0; j < 3; ++j)  {
            array[i][j] = " ";
        }
    }
    
    view(array);
    std::cout << "Welcome to tic tac toe ! \n ";
    std::cout << "Player A, your symbol is an x. \n Player B, your symbol is an o. \n";
    std::cout << "To fill the case located in the first line, third column with an x you, have to enter : \"x 1 3\" \n";
    std::cout << "To fill the case located in the third line, second column with a o, you have to enter : \"o 3 2\" \n";
    std::string winner;
    while(winner_symbol == "undefined" && turn < 10) {
        play_one_round();
        turn++;
        check_win(); 
    }

    if (winner_symbol == "x") {
        winner = "A";
    } else if (winner_symbol == "o") {
        winner = "B";
    }
    if (winner == "A" || winner == "B") {
        std::cout << "Congratulations player " << winner << " , you win this party ! \n ";
    } else {
        std::cout << "Nobody wins this party. ";
    }
    std::cout << "----------------------------------------------------------ROUND IS OVER---------------------------------------------------------- \n";
    return 0;
}  


