//
// Created by popca on 12/03/2023.
//

#include "Item.h"

#include <utility>

Item::Item(std::string name, double attack, double defense, double health, double double_strike, double life_steal)
        : name(std::move(name)), attack(attack), defense(defense), health(health), double_strike(double_strike),
          life_steal(life_steal) {}

std::ostream &operator<<(std::ostream &os, const Item &object) {
    os << "Name: " << object.name << "\n"
       << "Attack: " << object.attack << "\n"
       << "Defense: " << object.defense << "\n"
       << "Health: " << object.health << "\n"
       << "Double Strike: " << object.double_strike << "\n"
       << "Life Steal: " << object.life_steal << "\n";
    return os;
}
