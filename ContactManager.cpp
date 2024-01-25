#include "ContactManager.hpp"
#include <algorithm>
#include <iostream>
#include <ostream>

void ContactManager::addContact(const Contact& contact) {
    contacts.push_back(contact);
}

void ContactManager::showContacts() const {
    std::cout << "List of contacts:" << std::endl;
    for (const auto& contact : contacts) {
        contact.showInformation();
        std::cout << "------------------------" << std::endl;
    }
}

void ContactManager::searchContactByName(const std::string& name) const {
    auto it = std::find_if(contacts.begin(), contacts.end(),
                           [&name](const Contact& c) { return c.getName() == name; });

    if (it != contacts.end()) {
        std::cout << "Contact found:" << std::endl;
        it->showInformation();
    } else {
        std::cout << "Contact not found." << std::endl;
    }
}

