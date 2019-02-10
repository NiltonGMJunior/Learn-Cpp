#include <iostream>

enum class Items
{
    HEALTH_POTIONS,
    TORCHES,
    ARROWS,
    MAX_ITEMS
};

int countTotalItems(const int *items)
{
    int totalItems = 0;
    for (int i { 0 }; i < static_cast<int>(Items::MAX_ITEMS); ++i)
        totalItems += items[i];
    
    return totalItems;
}

int main()
{
    int *items = new int[Items::MAX_ITEMS] { 2, 5, 10 };
    int totalItems = countTotalItems(items);
    std::cout << "The player has " << totalItems << " in total.\n";
    return 0;
}