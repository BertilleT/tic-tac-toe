#include <vector>
extern std::string array[3][3]; 
extern std::string winner_symbol;
extern std::string symbol;
extern int line;
extern int col;

void view(std::string array[3][3]);
void fill(std::string symbol, int line_index, int column_index);
void check_win();
void play_one_round();