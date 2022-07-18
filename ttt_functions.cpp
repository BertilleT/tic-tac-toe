#include <iostream>
#include <string> 
#include <sstream>
#include "ttt_functions.hpp"

void view(std::string array[3][3]) {
    for(int i = 0; i < 3; ++i)  
    {   
        std::cout<< "\n  ";
        for(int j = 0; j < 3; ++j)  
        {  
            std::cout << array[i][j];
            if (j < 2 ) {
                std::cout << " | " ;
            }
        }  
        if (i < 2) {
            std::cout<<"\n ----------- "; 
        } else {
            std::cout<<"\n ";
        }
    }  
}

void fill(std::string symbol, int line_index, int column_index) {
    if ((symbol == "x" || symbol == "o") && (line_index == 1 || line_index == 2 || line_index == 3) && (column_index == 1 || column_index == 2 || column_index == 3) ) {
        array[line_index-1][column_index-1] = symbol;
    } else {
        std::cout << "Wrong input. Please, try again with appropriate value. \n ";
    }
}

void check_win() {
    for (int i = 0; i < 3; i++){
        if (array[i][0] != " " && array[i][0] == array[i][1] && array[i][0] == array[i][2]) {
            winner_symbol = array[i][0];
            break;
        }
    };
    for (int j = 0; j < 3; j++) {
        if (array[0][j] != " " && array[0][j] == array[1][j] && array[0][j] == array[2][j]) {
            winner_symbol = array[0][j];
            break;
        }
    };
    if (array[0][0] != " " && array[0][0] == array[1][1] && array[0][0] == array[2][2]) {
        winner_symbol = array[0][0];
    };    
    if (array[0][2] != " " && array[0][2] == array[1][1] && array[0][2] == array[2][0]){
        winner_symbol = array[0][2];
    };  
}


void play_one_round(){    
    std::cout << "What do you want to play next ? \n";
    std::cin >> symbol;
    std::cin >> line;
    std::cin >> col;

    fill(symbol, line, col);
    view(array);
}