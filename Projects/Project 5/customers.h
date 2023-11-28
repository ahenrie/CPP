#ifndef CUSTOMERS_H
#define CUSTOMERS_H

#include <string>
#include <vector>
#include <iostream>

class Customer {
public:
    static std::vector<Customer> customers;
    // Constructors
    Customer(); // Default constructor

    // with params
    Customer(int customerId, const std::string& customerName, const std::string& streetAddress,
             const std::string& customerCity, const std::string& customerState,
             const std::string& customerZip, const std::string& customerPhone,
             const std::string& customerEmail);

    // Getter functions
    int getCustomerID() const;
    std::string getName() const;
    std::string getStreetAddress() const;
    std::string getCity() const;
    std::string getState() const;
    std::string getZip() const;
    std::string getPhone() const;
    std::string getEmail() const;

    //  read customers from a file
    static void read_customers(const std::string& filename);

    // display customers
    static void displayCustomers();

    //displary customer count
    static int countCustomers();

    static int find_cust_idx(int customerID);

    static void getCustomerInfo(int cust_index);

private:

    int customerID;
    std::string name;
    std::string streetAdd;
    std::string city;
    std::string state;
    std::string zip;
    std::string phone;
    std::string email;

    // Static member function to convert string to int
    static int stringtoint(const std::string& s);
};

#endif
