//
// Created by popca on 12/03/2023.
//

#include "ItemBuilder.h"

void ItemBuilder::set_name(const std::string &name) {
    this->name = name;
}

void ItemBuilder::set_attack(double attack) {
    this->attack = attack;
}

void ItemBuilder::set_defense(double defense) {
    this->defense = defense;
}

void ItemBuilder::set_health(double health) {
    this->health = health;
}

void ItemBuilder::set_double_strike(double double_strike) {
    this->double_strike = double_strike;
}

void ItemBuilder::set_life_steal(double life_steal) {
    this->life_steal = life_steal;
}

void ItemBuilder::reset() {
    this->name = "";
    this->attack = -1;
    this->defense = -1;
    this->health = -1;
    this->double_strike = -1;
    this->life_steal = -1;
}

Item ItemBuilder::build() {
    return Item(name, attack, defense, health, double_strike, life_steal);
}

ItemBuilder::ItemBuilder() {
    reset();
}
