#include "customers.h"
#include "split.h" // make sure split function is available

#include <stdexcept>
#include <string>
#include <fstream>
#include <sstream>

std::vector<Customer> Customer::customers;

// Default constructor
Customer::Customer() : customerID(0), name(""), streetAdd(""), city(""), state(""), zip(""), phone(""), email("") {}

//Constructor with params
Customer::Customer(int customerId, const std::string& customerName, const std::string& streetAddress,
                   const std::string& customerCity, const std::string& customerState,
                   const std::string& customerZip, const std::string& customerPhone,
                   const std::string& customerEmail) 
    : customerID(customerId), name(customerName), streetAdd(streetAddress),
      city(customerCity), state(customerState), zip(customerZip),
      phone(customerPhone), email(customerEmail) {}

//getter functions
int Customer::getCustomerID() const {
    return customerID;
}

std::string Customer::getName() const {
    return name;
}

std::string Customer::getStreetAddress() const {
    return streetAdd;
}

std::string Customer::getCity() const {
    return city;
}


std::string Customer::getState() const {
    return state;
}

std::string Customer::getZip() const {
    return zip;
}

std::string Customer::getPhone() const {
    return phone;
}

std::string Customer::getEmail() const {
    return email;
}

int Customer::countCustomers() {
    return static_cast<int>(customers.size());
}

// string to int
int Customer::stringtoint(const std::string& s) {
    std::stringstream ss(s);
    int newInt;
    ss >> newInt;
    return newInt;
}

// read customers
void Customer::read_customers(const std::string& filename) {
    std::ifstream inputFile(filename.c_str());               
    
    if (!inputFile.is_open()) {
        throw std::runtime_error("Can not open the file: " + filename);
    }

    std::string custRec;
    while (getline(inputFile, custRec)) {
        std::vector<std::string> colNames = split(custRec, ',');
        Customer customer;
        customer.customerID = stringtoint(colNames[0]); 
        customer.name       = colNames[1];
        customer.streetAdd  = colNames[2];
        customer.city       = colNames[3];
        customer.state      = colNames[4];
        customer.zip        = colNames[5];
        customer.phone      = colNames[6];
        customer.email      = colNames[7];

        customers.push_back(customer);
        // std::cout << "One customer has been added" << std::endl;
    }

    inputFile.close();
}

// test that vector is populated
void Customer::displayCustomers() {
        for (const auto& customer : customers) {
            std::cout << "Customer ID: " << customer.getCustomerID() << std::endl;
            std::cout << "Name: " << customer.getName() << std::endl;
            std::cout << "Street Address: " << customer.getStreetAddress() << std::endl;
            std::cout << "City: " << customer.getCity() << std::endl;
            std::cout << "State: " << customer.getState() << std::endl;
            std::cout << "ZIP Code: " << customer.getZip() << std::endl;
            std::cout << "Phone: " << customer.getPhone() << std::endl;
            std::cout << "Email: " << customer.getEmail() << std::endl;
            std::cout << "------------------------" << std::endl; // seperator 
        }
    }

int Customer::find_cust_idx(int cust_id) {
    size_t num_customers = customers.size();
    for (size_t i = 0; i < num_customers; ++i) {
        if (customers[i].getCustomerID() == cust_id) {
            return static_cast<int>(i); // convert to int
        }
    }
    std::cout << "Customer not found. Exiting program..." << std::endl; // exit message
    return -1;

}

void Customer::getCustomerInfo(int cust_index) {
    std::cout << "Customer ID: " << customers[cust_index].getCustomerID() << std::endl;
    std::cout << "Name: " << customers[cust_index].getName() << std::endl;
    std::cout << "Street Address: " << customers[cust_index].getStreetAddress() << std::endl;
    std::cout << "City: " << customers[cust_index].getCity() << std::endl;
    std::cout << "State: " << customers[cust_index].getState() << std::endl;
    std::cout << "ZIP Code: " << customers[cust_index].getZip() << std::endl;
    std::cout << "Phone: " << customers[cust_index].getPhone() << std::endl;
    std::cout << "Email: " << customers[cust_index].getEmail() << std::endl;
}

