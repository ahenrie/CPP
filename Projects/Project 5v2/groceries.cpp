#include "split.h"

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdexcept>
#include <sstream>
#include <iomanip>
#include <algorithm>

using namespace std;

int find_item_idx(int item_id);
int find_cust_idx(int cust_id);

class Customer {
public:
    Customer() : cust_id(0), name(""), street(""), city(""), state(""), zip(""), phone(""), email("") {} //default constructor

    Customer(int customerId, const string& customerName, const string& streetAddress, //constructor with parameters
             const string& customerCity, const string& customerState,
             const string& customerZip, const string& customerPhone,
             const string& customerEmail)
        : cust_id(customerId), name(customerName), street(streetAddress),
          city(customerCity), state(customerState), zip(customerZip),
          phone(customerPhone), email(customerEmail) {}

    string print_detail() const {
        return "Customer ID #" + std::to_string(cust_id) + ":\n" + name + ", ph. " + phone + ", email: " + email + "\n" + 
            street + "\n" + city + ", " + state + " " + zip;
    }

    int getId() const{
        return cust_id;
    }
/* old getter and helper functions
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
*/
private:
    int cust_id;
    string name;
    string street;
    string city;
    string state;
    string zip;
    string phone;
    string email;
};

vector<Customer> customers;

class Item {
public:
    Item() : item_id(0), description(""), price(0.0) {}

    Item(int itemID, const string& desc, double price)
        : item_id(itemID), description(desc), price(price) {}

    int getId() const {
        return item_id;
    }

    string getDesc() const{
        return description;
    }

    double getPrice() const {
        return price;
    }
/* old meth
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
*/
private:
    int item_id;
    string description;
    double price;
};

vector<Item> items;

class LineItem {
public:
    LineItem(int id, int quant) {
        item_id = id;
        qty = quant;
    }

    double sub_total() const {
        int index = find_item_idx(item_id);
        double price = items[index].getPrice();
        return qty * price;
    }

    friend bool operator<(const LineItem& item1, const LineItem& item2) {
        return item1.item_id < item2.item_id;
    }   

    friend class Order;
private:
    int item_id;
    int qty;
};


class Payment {
public:
    virtual string print_detail() const = 0;
    friend class Order;
private:
    double amount;
};

class Credit : public Payment {
public:
    Credit(const string& number, const string& exp) {
        card_number = number;
        expiration = exp;
    }

    string print_detail() const {
        return "Paid by Credit card " + card_number + ", exp. " + expiration;
    }
private:
    string card_number;
    string expiration;
};

class PayPal : public Payment {
public:
    PayPal(string ppid) {
        paypal_id = ppid;
    }

    string print_detail() const {
        return "Paid  by Paypal Id: " + paypal_id;
    }
private:
    string paypal_id;
};

class WireTransfer : public Payment {
public:
    WireTransfer(string bid, string aid) {
        bank_id = bid;
        account_id = aid;
    }

    string print_detail() const {
        return "Paid by Wire transfer from Bank ID " + bank_id + ", Account # " + account_id;
    }
private:
    string bank_id;
    string account_id;
};

class Order {
public:
    Order(int oid, string odate, int cid, vector<LineItem> lineItems, Payment* pay) {
        order_id = oid;
        order_date = odate;
        cust_id = cid;
        line_items = lineItems;
        payment = pay;
    } 

    ~Order() {
        delete payment;
    }

    double total() const {
        double total = 0;
        for(int i = 0; i < line_items.size(); i++) {
            total += line_items[i].sub_total();
        } 
        return total;
    }

    string print_order() const {
        string sorder = "\nOrder Detail:";
        for(int i = 0; i < line_items.size(); i++) {
            int id = line_items.at(i).item_id;
            int index = find_item_idx(id);
            string name = items[index].getDesc();
            double price = items[index].getPrice();
            sorder += "\n Item " + std::to_string(id) + ": \" " + name + "\"" + std::to_string(line_items[i].qty) 
                    + " @ $" + std::to_string(price);
        } 
        sorder += "\n";
        int cindex = find_cust_idx(cust_id);
        string info = customers[cindex].print_detail();
        stringstream ss;
        ss << "===========================" << "\n"
        << "Order #" << to_string(order_id) << ", Date: " << order_date << "\n" << payment->print_detail() << "\n\n"
        << info << "\n"
        << sorder;
        return ss.str();
    }

private:
    int order_id;
    string order_date;
    int cust_id;
    vector<LineItem> line_items;
    Payment* payment;
};

void read_customers(const string& filename) {
    ifstream inputFile(filename.c_str());

    if (!inputFile.is_open()) {
        throw runtime_error("Can not open file " + filename);
    }

    string custrec;
    while (getline(inputFile, custrec)) {
        vector<string> colNames = split(custrec, ',');
        customers.push_back(Customer(std::stoi(colNames.at(0)), colNames.at(1), colNames.at(2), colNames.at(3),
                            colNames.at(4), colNames.at(5), colNames.at(6), colNames.at(7)));
    }
}

void read_items(const string& filename) {
    ifstream inputFile(filename.c_str());

    if (!inputFile.is_open()) {
        throw runtime_error("Can not open file " + filename);
    }

    string itemrec;
    while(getline(inputFile, itemrec)) {
        vector<string> colNames = split(itemrec, ',');
        items.push_back(Item(std::stoi(colNames.at(0)), colNames.at(1), stod(colNames.at(2))));
    }
}

int find_item_idx(int item_id) {
    for(int i = 0; i < items.size(); i++) {
        if(items[i].getId() == item_id) {
            return i;
        }
    }
    return -1;
}

int find_cust_idx(int cust_id) {
    for(int i = 0; i < customers.size(); i++) {
        if(customers[i].getId() == cust_id) {
            return i;
        }
    }
    return -1;
}

vector<Order*> orders;

void read_orders(const string& filename) {
    ifstream file(filename);
    string one, two;
    while(getline(file, one) && getline(file, two)) {
        vector<string> part1 = split(one, ',');
        vector<string> part2 = split(two, ',');

        //split up first 3 parts of orders
        int cust_id = stoi(part1.at(0));
        int order_id = stoi(part1.at(1));
        string date = part1.at(2);
        vector<LineItem> line_items;
        for(int i = 3; i < part1.size(); i++) {
            vector<string> split_items = split(part1.at(i), '-');
            line_items.push_back(LineItem(stoi(split_items.at(0)), stoi(split_items.at(1))));
        }

        Payment* payment;
        //figure out what type of payment to store
        switch(part2[0][0]) {
            case '1':
                payment = new Credit(part2[1], part2[2]); //credit card
                break;
            case '2':
                payment = new PayPal(part2[1]);
                break;
            case '3':
                payment = new WireTransfer(part2[1], part2[2]);
                break;
            default:
                cout << "No payment info found." << endl;
        }
        std::sort(line_items.begin(), line_items.end());

        orders.push_back(new Order(order_id, date, cust_id, line_items, payment));
    }
}


//++++++++++++++++++++++tests++++++++++++++++++++++
void test_detail_customer() {
        for (const auto& customer : customers) {
        cout << customer.print_detail() << endl;
        cout << "------------------------" << endl;
    }
}

void test_items() {
    for(int i = 0; i < items.size(); i++) {
    cout << "Item ID: " << items[i].getId() << endl;
    cout << "Description: " << items[i].getDesc() << endl;
    cout << "Price: " << items[i].getPrice() << endl;
    cout << "------------------------" << endl;
    }
}


int main() {
    read_customers("customers.txt");
    read_items("items.txt");
    read_orders("orders.txt");
    ofstream ofs("order_report.txt");
    for (const auto& order: orders)
    ofs << order->print_order() << std::endl;
}
