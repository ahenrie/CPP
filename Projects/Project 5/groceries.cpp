#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdexcept>
#include <sstream>
#include <iomanip>

#include "split.h"
#include "items.h"
#include "customers.h"

using namespace std;

//vector<Customer> customers;                             
//vector<Item> items;

void returnCounts () {
    cout << "****************************************" << endl;
    cout << " There are " << Customer::countCustomers()  << " customers and " << Item::countItems() << " items." << endl;
    cout << "****************************************" << endl;
}

int get_id() { // clean the id to search
    int cust_id;
    while (true) {
        cout << "What customer number would you like to search for?: " << endl;
        if (cin >> cust_id) {
            break;
        } else {
            cout << "Please enter a valid number: " << endl;
            cin.clear();
            cin.ignore();
        }
    }
    return cust_id;
}

// get item number to search
int get_item_number() {
    int item_number;
    cout << "Please enter the number of the item you would like to purchase: " << endl;
    cin >> item_number;
    return item_number;
}

void build_order() {
    int item_number = 0.0;
    double order_total = 0.0;
    int total_items = 0;

    do {
        item_number = get_item_number();
        int item_index = Item::find_item_idx(item_number);
        if (item_index > 1) {
            cout << "first if passed" << endl;
            cout << "Item: " << Item::items[item_index].getDesc() << " costs: $" << Item::items[item_index].getPrice() << "." << endl;

            order_total += Item::items[item_index].getPrice();
            total_items++;
        } else {
            cout << "Item not found. Try again." << endl;
        }
    } while (item_number != 0);

    //summary
    cout << endl;
    cout << "****************Summary*****************" << endl;
    cout << "Items purchased: " << total_items << endl;
    cout << "Total cost: $" << fixed << setprecision(2) << order_total << endl;
    cout << "****************************************" << endl;
}

int one_customer_order() {
    returnCounts(); // display the message count
    cout << endl;
    int customer_search = get_id();
    int cust_index = Customer::find_cust_idx(customer_search); // find customer
    Customer::getCustomerInfo(cust_index);
    cout << endl;
    build_order();
    
    return 0;
}

int main() {
    Customer::read_customers("customers.txt");
    Item::read_items("items.txt");

    //cout << Customer::countCustomers() << endl;
    //cout << Item::countItems() << endl;
    //Item::displayItems();
    one_customer_order();

    return 0;
}
