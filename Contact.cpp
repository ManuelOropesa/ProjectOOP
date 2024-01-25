#include "Contact.hpp"
#include <iostream>
#include <ostream>

Contact::Contact(std::string _name, std::string _phone, std::string _email)
    : name(_name), phone(_phone), email(_email) {}

std::string Contact::getName() const {
    return name;
}

void Contact::showInformation() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Phone: " << phone << std::endl;
    std::cout << "Email: " << email << std::endl;
}

