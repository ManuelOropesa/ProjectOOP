#include "ContactManager.hpp"
#include <iostream>
#include <ostream>

int main() {
    ContactManager manager;

    manager.addContact(Contact("Manuel Oropesa", "678 745 843", "manuel@gmail.com"));
    manager.addContact(Contact("Mario Alvarez", "645 857 320", "mario@gmail.com"));

    manager.showContacts();

    std::cout << "\nSearch for a contact by name:" << std::endl;
    manager.searchContactByName("Manuel Oropesa");

    return 0;
}

