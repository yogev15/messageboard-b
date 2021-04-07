#include "Board.hpp"
#include <iostream>

using namespace ariel;
using namespace std;


void Board::post(unsigned int row,unsigned int colum, Direction direct,const string &message)
{
    if(direct == Direction::Horizontal){
        if(end_col < colum + message.length()){
            end_col = colum + message.length();
        }
        for(unsigned int i = 0; i < message.length(); i++){
            this->board[row][colum+i] = message[i];
        }
    }
    else{
         if(end_row < row + message.length()){
            end_row = row + message.length();
        }
        for(unsigned int i = 0; i < message.length(); i++){
            this->board[row+i][colum] = message[i];
        }
    }
}

string Board::read(unsigned int row,unsigned int colum, Direction direct,unsigned int length)
{
    string msg;
    if(direct == Direction::Horizontal){
        for(unsigned int i = 0; i < length; i++){
            if(this->board[row][colum+i] == 0){
                msg += "_";
            }
            else{
                msg += this->board[row][colum+i];
            }
        }
    }
    else{
        for(unsigned int i = 0; i < length; i++){
            if(this->board[row+i][colum] == 0){
                msg += "_";
            }
            else{
                msg += this->board[row+i][colum];
            }
        }
    } 
    return msg;
}

void Board::show()
{
    for (unsigned int i = start_row; i < end_row; i++){
       for (unsigned int j = start_col; i < end_col; i++){
           cout << board[i][j];
       }
       cout << "\n";
    }
    
}