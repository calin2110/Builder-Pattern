//
// Created by popca on 12/03/2023.
//

#pragma once
#include <string>
#include "Item.h"

class ItemBuilder {
public:
    ItemBuilder();
    void set_name(const std::string &name);
    void set_attack(double attack);
    void set_defense(double defense);
    void set_health(double health);
    void set_double_strike(double double_strike);
    void set_life_steal(double life_steal);

    Item build();

private:
    std::string name;
    double attack;
    double defense;
    double health;
    double double_strike;
    double life_steal;
    void reset();
};


