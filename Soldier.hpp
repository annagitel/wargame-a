//
// Created by יאנה on 20/05/2020.
//

#ifndef WARGAME_A_MASTER_SOLDIER_H
#define WARGAME_A_MASTER_SOLDIER_H

class Soldier{

    int health_points;
    int damage_per_activity;

    public:
    Soldier( int health_points = 0, int damage_per_activity = 0) :health_points(health_points), damage_per_activity(damage_per_activity){}

    int get_health_points(){
        return health_points;
    }
    int get_demage_per_activity(){
        return damage_per_activity;
    }

    void set_damage_per_activity(int damage){
        this->damage_per_activity=damage;
    }
    void set_health_points(int points){
        this->health_points=points;
    }

};

#endif //WARGAME_A_MASTER_SOLDIER_H
