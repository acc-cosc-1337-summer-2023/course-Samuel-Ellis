#include "tic_tac_toe_3.h"

/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/
bool TicTacToe3::check_column_win(){
    if(pegs[0] == "X" && pegs[3]=="X" && pegs[6]=="X"){
        return true;
    } else if(pegs[1] == "X" && pegs[4]=="X" && pegs[7]=="X"){
        return true;
    } else if(pegs[2] == "X" && pegs[5]=="X" && pegs[8]=="X"){
        return true;
    } else if(pegs[0] == "Y" && pegs[3]=="Y" && pegs[6]=="Y"){
        return true;
    } else if(pegs[1] == "Y" && pegs[4]=="Y" && pegs[7]=="Y"){
        return true;
    } else if(pegs[2] == "Y" && pegs[5]=="Y" && pegs[8]=="Y"){
        return true;
    } else {
        return false;
    }
}

/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/
bool TicTacToe3::check_row_win(){
    if(pegs[0] == "X" && pegs[1]=="X" && pegs[2]=="X"){
        return true;
    } else if(pegs[3] == "X" && pegs[4]=="X" && pegs[5]=="X"){
        return true;
    } else if(pegs[6] == "X" && pegs[7]=="X" && pegs[8]=="X"){
        return true;
    } else if(pegs[0] == "Y" && pegs[1]=="Y" && pegs[2]=="Y"){
        return true;
    } else if(pegs[3] == "Y" && pegs[4]=="Y" && pegs[5]=="Y"){
        return true;
    } else if(pegs[6] == "Y" && pegs[7]=="Y" && pegs[8]=="Y"){
        return true;
    } else {
        return false;
    }
}

/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8

*/
bool TicTacToe3::check_diagonal_win(){
    if(pegs[0] == "X" && pegs[4]=="X" && pegs[8]=="X"){
        return true;
    } else if(pegs[6] == "X" && pegs[4]=="X" && pegs[2]=="X"){
        return true;
    } else if(pegs[0] == "Y" && pegs[4]=="Y" && pegs[8]=="Y"){
        return true;
    } else if(pegs[6] == "Y" && pegs[4]=="Y" && pegs[2]=="Y"){
        return true;
    } else {
        return false;
    }
}