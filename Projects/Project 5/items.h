#ifndef ITEMS_H
#define ITEMS_H

#include <string>
#include <vector>
#include <iostream>

class Item {
public:

    static std::vector<Item> items;

    Item();
    Item(int itemID, const std::string& desc, double price);

    int getItemID() const;
    std::string getDesc() const;
    double getPrice() const;

    static void read_items(const std::string& filename);

    static void displayItems();

    static int countItems();

    static int find_item_idx(int item_id);

    //const std::vector<Item>& getItems() const;


private:
    
    int itemID;
    std::string desc;
    double price;

    static double stringtodouble(const std::string& s);
    static int stringtoint(const std::string& s);

};

#endif
