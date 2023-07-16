#include "tic_tac_toe_4.h"

/*
class function check_column_win
Win by column if and return true if (each column index)
0, 1,  2,  3 
4, 5,  6,  7 
8, 9, 10, 11 
12,13,14, 15 
else
false
*/
bool TicTacToe4::check_column_win(){
    if(pegs[0] == "X" && pegs[4]=="X" && pegs[8]=="X" && pegs[12]=="X"){
        return true;
    } else if(pegs[1] == "X" && pegs[5]=="X" && pegs[9]=="X" && pegs[13]=="X"){
        return true;
    } else if(pegs[2] == "X" && pegs[6]=="X" && pegs[10]=="X" && pegs[14]=="X"){
        return true;
    } else if(pegs[3] == "X" && pegs[7]=="X" && pegs[11]=="X" && pegs[15]=="X"){
        return true;
    } else if(pegs[0] == "Y" && pegs[4]=="Y" && pegs[8]=="Y" && pegs[12]=="X"){
        return true;
    } else if(pegs[1] == "Y" && pegs[5]=="Y" && pegs[9]=="Y" && pegs[13]=="X"){
        return true;
    } else if(pegs[2] == "Y" && pegs[6]=="Y" && pegs[10]=="Y" && pegs[14]=="X"){
        return true;
    } else if(pegs[3] == "Y" && pegs[7]=="Y" && pegs[11]=="Y" && pegs[15]=="X"){
        return true;
    } else {
        return false;
    }
}



/*
class function check_row_win
Win by row if
0, 1,  2,  3 are equal
4, 5,  6,  7 are equal
8, 9, 10, 11 are equal 
12,13,14, 15 are equal
*/
bool TicTacToe4::check_row_win(){
    if(pegs[0] == "X" && pegs[1]=="X" && pegs[2]=="X" && pegs[3]=="X"){
        return true;
    } else if(pegs[4] == "X" && pegs[5]=="X" && pegs[6]=="X" && pegs[7]=="X"){
        return true;
    } else if(pegs[8] == "X" && pegs[9]=="X" && pegs[10]=="X" && pegs[11]=="X"){
        return true;
    } else if(pegs[12] == "X" && pegs[13]=="X" && pegs[14]=="X" && pegs[15]=="X"){
        return true;
    } else if(pegs[0] == "Y" && pegs[1]=="Y" && pegs[2]=="Y" && pegs[3]=="X"){
        return true;
    } else if(pegs[4] == "Y" && pegs[5]=="Y" && pegs[6]=="Y" && pegs[7]=="X"){
        return true;
    } else if(pegs[8] == "Y" && pegs[9]=="Y" && pegs[10]=="Y" && pegs[11]=="X"){
        return true;
    } else if(pegs[12] == "Y" && pegs[13]=="Y" && pegs[14]=="Y" && pegs[15]=="X"){
        return true;
    } else {
        return false;
    }
}


/*
class function check_diagonal_win
Win diagonally
0, 1,  2,  3
4, 5,  6,  7
8, 9, 10, 11
12,13,14, 15

*/

bool TicTacToe4::check_diagonal_win(){
    if(pegs[0] == "X" && pegs[5]=="X" && pegs[10]=="X" && pegs[15]=="X"){
        return true;
    } else if(pegs[3] == "X" && pegs[6]=="X" && pegs[9]=="X" && pegs[12]=="X"){
        return true;
    } else if(pegs[0] == "Y" && pegs[5]=="Y" && pegs[10]=="Y" && pegs[15]=="X"){
        return true;
    } else if(pegs[3] == "Y" && pegs[6]=="Y" && pegs[9]=="Y" && pegs[12]=="X"){
        return true;
    } else {
        return false;
    }
}