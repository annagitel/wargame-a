//
// Created by יאנה on 20/05/2020.
//

#ifndef WARGAME_A_MASTER_FOOTCOMMANDER_H
#define WARGAME_A_MASTER_FOOTCOMMANDER_H

#include "Soldier.hpp"
class FootCommander: virtual public Soldier{
public: FootCommander(int player): Soldier(150, 20){
    }

};
#endif //WARGAME_A_MASTER_FOOTCOMMANDER_H
