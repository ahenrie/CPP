#include "items.h"
#include "split.h"

#include <stdexcept>
#include <string>
#include <fstream>
#include <sstream>

// vector to jold items objects
std::vector<Item> Item::items;  

//default constructor
Item::Item() : itemID(0), desc(""), price(0.0) {}

// constructor with param
Item:: Item(int itemID, const std::string& desc, double price) : 
    itemID(itemID), desc(desc), price(price) {}

// getters
int Item::getItemID() const {
    return itemID;
}

std::string Item::getDesc() const {
    return desc;
}

double Item::getPrice() const {
    return price;
}

// string to int
int Item::stringtoint(const std::string& s) {
    std::stringstream ss(s);
    int newInt;
    ss >> newInt;
    return newInt;
}

// string to double
double Item::stringtodouble(const std::string& s) {
    std::stringstream ss(s);
    double newD;
    ss >> newD;
    return newD;
}

void Item::displayItems() {
    for (const auto& item : items) {
        std::cout << "Item ID: " << item.getItemID() << std::endl;
        std::cout << "Description: " << item.getDesc() << std::endl;
        std::cout << "Price: " << item.getPrice() << std::endl;
        std::cout << "------------------------" << std::endl;
    }
}

// read items from a file
void Item::read_items(const std::string& filename) {
    std::ifstream inputFile(filename.c_str());               
    
    if (!inputFile.is_open()) {
        throw std::runtime_error("Can not open the file: " + filename);
    }

    std::string itemRec;
    while (getline(inputFile, itemRec)) {
        std::vector<std::string> colNames = split(itemRec, ',');
        Item item;
        item.itemID = stringtoint(colNames[0]);
        item.desc   = colNames[1];
        item.price  = stringtodouble(colNames[2]);

        items.push_back(item);
    }

    inputFile.close();
}

int Item::countItems() {
    return items.size();
}

int Item::find_item_idx(int item_id) {
    size_t num_item = items.size();

    for (size_t i = 0; i < num_item; i++) {
        if (items[i].getItemID() == item_id) {
            return static_cast<int>(i);
        }
    }
    std::cout << "Item not found in search." << std::endl;
    return -1;
}
