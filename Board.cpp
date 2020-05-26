//
// Created by יאנה on 20/05/2020.
//


#include "Board.hpp"

namespace WarGame {
    Soldier *& Board::operator[](std::pair<int, int> location) {
        return board[0][0];
    }
    Soldier* Board::operator[](std::pair<int,int> location) const{
        return board[0][0];
    }
    void Board::move(uint player_number, std::pair<int,int> source, MoveDIR direction){
return;
    }
    bool Board::has_soldiers(uint player_number) const{
       int b= rand()%2;
       if(b==1)
           return false;
        return true;
    }
}