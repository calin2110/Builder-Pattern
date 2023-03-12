//
// Created by popca on 12/03/2023.
//

#pragma once
#include <string>
#include "Item.h"

class ItemOptionalBuilder {
public:
    virtual ItemOptionalBuilder& set_attack(double attack) = 0;
    virtual ItemOptionalBuilder& set_defense(double defense) = 0;
    virtual ItemOptionalBuilder& set_health(double health) = 0;
    virtual ItemOptionalBuilder& set_double_strike(double double_strike) = 0;
    virtual ItemOptionalBuilder& set_life_steal(double life_steal) = 0;
    virtual Item build() = 0;
};

class ItemNameBuilder {
public:
    virtual ItemOptionalBuilder& set_name(std::string name) = 0;
};

class FluentBuilder: public ItemNameBuilder, ItemOptionalBuilder {
private:
    std::string name;
    double attack;
    double defense;
    double health;
    double double_strike;
    double life_steal;

public:
    FluentBuilder();

    ItemOptionalBuilder &set_name(std::string name) override;
    ItemOptionalBuilder &set_attack(double attack) override;
    ItemOptionalBuilder &set_defense(double defense) override;
    ItemOptionalBuilder &set_health(double health) override;
    ItemOptionalBuilder &set_double_strike(double double_strike) override;
    ItemOptionalBuilder &set_life_steal(double life_steal) override;
    Item build() override;
    void reset();

};

class Director {

private:
    FluentBuilder builder;

public:
    Director(FluentBuilder builder);
    ItemNameBuilder& start();
    void reset();
};


