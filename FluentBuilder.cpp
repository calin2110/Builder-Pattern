//
// Created by popca on 12/03/2023.
//

#include "FluentBuilder.h"

#include <utility>

ItemOptionalBuilder &FluentBuilder::set_name(std::string name) {
    this->name = name;
    return *this;
}

ItemOptionalBuilder &FluentBuilder::set_attack(double attack) {
    this->attack = attack;
    return *this;
}

ItemOptionalBuilder &FluentBuilder::set_defense(double defense) {
    this->defense = defense;
    return *this;
}

ItemOptionalBuilder &FluentBuilder::set_health(double health) {
    this->health = health;
    return *this;
}

ItemOptionalBuilder &FluentBuilder::set_double_strike(double double_strike) {
    this->double_strike = double_strike;
    return *this;
}

ItemOptionalBuilder &FluentBuilder::set_life_steal(double life_steal) {
    this->life_steal = life_steal;
    return *this;
}

Item FluentBuilder::build() {
    return Item(name, attack, defense, health, double_strike, life_steal);
}

FluentBuilder::FluentBuilder() {
    reset();
}

void FluentBuilder::reset() {
    this->name = "";
    this->attack = -1;
    this->defense = -1;
    this->health = -1;
    this->double_strike = -1;
    this->life_steal = -1;
}

Director::Director(FluentBuilder builder) : builder(std::move(builder)) {}

ItemNameBuilder &Director::start() {
    return builder;
}

void Director::reset() {
    builder.reset();
}
