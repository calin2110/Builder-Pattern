#include <iostream>
#include "Item.h"
#include "ItemBuilder.h"
#include "FluentBuilder.h"

void create_item_with_constructor() {
    std::cout << "Creating item casually\n";
    Item item = Item{"Attack Item", 10, -1, -1, -1, -1};
    std::cout << item;
}

void create_item_with_normal_builder() {
    std::cout << "Creating item using a normal builder\n";
    ItemBuilder item_builder = ItemBuilder();
    item_builder.set_name("Attack Item");
    item_builder.set_attack(10);
    Item built_item = item_builder.build();
    std::cout << built_item;
}

void create_item_with_fluent_builder() {
    std::cout << "Creating item using a fluent builder\n";
    FluentBuilder fluent_builder{};
    Director director{fluent_builder};
    Item fluently_built_item =
            director.start()
                    .set_name("Attack Item")
                    .set_attack(10)
                    .build();
    std::cout << fluently_built_item;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    create_item_with_constructor();
    create_item_with_normal_builder();
    create_item_with_fluent_builder();
    return 0;
}
