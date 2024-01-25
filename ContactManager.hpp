#ifndef CONTACTMANAGER_HPP
#define CONTACTMANAGER_HPP

#include <vector>
#include "Contact.hpp"
#include <iostream>
#include <ostream>

class ContactManager {
private:
    std::vector<Contact> contacts;

public:
    void addContact(const Contact& contact);
    void showContacts() const;
    void searchContactByName(const std::string& name) const;
};

#endif // CONTACTMANAGER_HPP

