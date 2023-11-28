#include "split.h"

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdexcept>
#include <sstream>
#include <iomanip>

using namespace std;

class Item {
public:
    static vector<Item> items;

    Item() : itemID(0), desc(""), price(0.0) {}

    Item(int itemID, const string& desc, double price)
        : itemID(itemID), desc(desc), price(price) {}

    int getItemID() const {
        return itemID;
    }

    string getDesc() const {
        return desc;
    }

    double getPrice() const {
        return price;
    }

    static int stringtoint(const string& s) {
        stringstream ss(s);
        int newInt;
        ss >> newInt;
        return newInt;
    }

    static double stringtodouble(const string& s) {
        stringstream ss(s);
        double newD;
        ss >> newD;
        return newD;
    }

    static void displayItems() {
        for (const auto& item : items) {
            cout << "Item ID: " << item.getItemID() << endl;
            cout << "Description: " << item.getDesc() << endl;
            cout << "Price: " << item.getPrice() << endl;
            cout << "------------------------" << endl;
        }
    }

    static void read_items(const string& filename) {
        ifstream inputFile(filename.c_str());

        if (!inputFile.is_open()) {
            throw runtime_error("Cannot open the file: " + filename);
        }

        string itemRec;
        while (getline(inputFile, itemRec)) {
            vector<string> colNames = split(itemRec, ',');
            Item item;
            item.itemID = stringtoint(colNames[0]);
            item.desc = colNames[1];
            item.price = stringtodouble(colNames[2]);

            items.push_back(item);
        }

        inputFile.close();
    }

    static int countItems() {
        return static_cast<int>(items.size());
    }

    static int find_item_idx(int item_id) {
        size_t num_items = items.size();

        for (size_t i = 0; i < num_items; i++) {
            if (items[i].getItemID() == item_id) {
                return static_cast<int>(i);
            }
        }
        cout << "Item not found in search." << endl;
        return -1;
    }

private:
    int itemID;
    string desc;
    double price;
};

vector<Item> Item::items;

class Customer {
public:
    static vector<Customer> customers;

    Customer() : customerID(0), name(""), streetAdd(""), city(""), state(""), zip(""), phone(""), email("") {}

    Customer(int customerId, const string& customerName, const string& streetAddress,
             const string& customerCity, const string& customerState,
             const string& customerZip, const string& customerPhone,
             const string& customerEmail)
        : customerID(customerId), name(customerName), streetAdd(streetAddress),
          city(customerCity), state(customerState), zip(customerZip),
          phone(customerPhone), email(customerEmail) {}

    int getCustomerID() const {
        return customerID;
    }

    string getName() const {
        return name;
    }

    string getStreetAddress() const {
        return streetAdd;
    }

    string getCity() const {
        return city;
    }

    string getState() const {
        return state;
    }

    string getZip() const {
        return zip;
    }

    string getPhone() const {
        return phone;
    }

    string getEmail() const {
        return email;
    }

    static int countCustomers() {
        return static_cast<int>(customers.size());
    }

    static int stringtoint(const string& s) {
        stringstream ss(s);
        int newInt;
        ss >> newInt;
        return newInt;
    }

    static void read_customers(const string& filename) {
        ifstream inputFile(filename.c_str());

        if (!inputFile.is_open()) {
            throw runtime_error("Can not open the file: " + filename);
        }

        string custRec;
        while (getline(inputFile, custRec)) {
            vector<string> colNames = split(custRec, ',');
            Customer customer;
            customer.customerID = stringtoint(colNames[0]);
            customer.name = colNames[1];
            customer.streetAdd = colNames[2];
            customer.city = colNames[3];
            customer.state = colNames[4];
            customer.zip = colNames[5];
            customer.phone = colNames[6];
            customer.email = colNames[7];

            customers.push_back(customer);
        }

        inputFile.close();
    }

    static void displayCustomers() {
        for (const auto& customer : customers) {
            cout << "Customer ID: " << customer.getCustomerID() << endl;
            cout << "Name: " << customer.getName() << endl;
            cout << "Street Address: " << customer.getStreetAddress() << endl;
            cout << "City: " << customer.getCity() << endl;
            cout << "State: " << customer.getState() << endl;
            cout << "ZIP Code: " << customer.getZip() << endl;
            cout << "Phone: " << customer.getPhone() << endl;
            cout << "Email: " << customer.getEmail() << endl;
            cout << "------------------------" << endl;
        }
    }

    static int find_cust_idx(int cust_id) {
        size_t num_customers = customers.size();
        for (size_t i = 0; i < num_customers; ++i) {
            if (customers[i].getCustomerID() == cust_id) {
                return static_cast<int>(i);
            }
        }
        cout << "Customer not found. Exiting program..." << endl;
        return -1;
    }

    static void getCustomerInfo(int cust_index) {
        cout << "Customer ID: " << customers[cust_index].getCustomerID() << endl;
        cout << "Name: " << customers[cust_index].getName() << endl;
        cout << "Street Address: " << customers[cust_index].getStreetAddress() << endl;
        cout << "City: " << customers[cust_index].getCity() << endl;
        cout << "State: " << customers[cust_index].getState() << endl;
        cout << "ZIP Code: " << customers[cust_index].getZip() << endl;
        cout << "Phone: " << customers[cust_index].getPhone() << endl;
        cout << "Email: " << customers[cust_index].getEmail() << endl;
    }

private:
    int customerID;
    string name;
    string streetAdd;
    string city;
    string state;
    string zip;
    string phone;
    string email;
};

vector<Customer> Customer::customers;

void returnCounts() {
    cout << "****************************************" << endl;
    cout << " There are " << Customer::countCustomers() << " customers and " << Item::countItems() << " items." << endl;
    cout << "****************************************" << endl;
}

int get_id() {
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
        if (item_index > -1) {
            cout << "Item: " << Item::items[item_index].getDesc() << " costs: $" << Item::items[item_index].getPrice() << "." << endl;
            order_total += Item::items[item_index].getPrice();
            total_items++;
        } else {
            cout << "Item not found. Try again." << endl;
        }
    } while (item_number != 0);

    // summary
    cout << endl;
    cout << "****************Summary*****************" << endl;
    cout << "Items purchased: " << total_items << endl;
    cout << "Total cost: $" << fixed << setprecision(2) << order_total << endl;
    cout << "****************************************" << endl;
}

int one_customer_order() {
    returnCounts();
    cout << endl;
    int customer_search = get_id();
    int cust_index = Customer::find_cust_idx(customer_search);
    Customer::getCustomerInfo(cust_index);
    cout << endl;
    build_order();
    return 0;
}

int main() {
    Customer::read_customers("customers.txt");
    Item::read_items("items.txt");

    one_customer_order();

    return 0;
}
