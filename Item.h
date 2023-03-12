//
// Created by popca on 12/03/2023.
//

#pragma once
#include <string>
#include <iostream>

class Item {
public:
    std::string name;
    double attack;
    double defense;
    double health;
    double double_strike;
    double life_steal;
    Item(std::string name, double attack, double defense, double health, double double_strike, double life_steal);
    friend std::ostream &operator<<(std::ostream &os, const Item& object);
};


