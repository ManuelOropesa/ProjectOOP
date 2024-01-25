#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <ostream>
#include <string>

class Contact {
private:
    std::string name;
    std::string phone;
    std::string email;

public:
    Contact(std::string _name, std::string _phone, std::string _email);

    std::string getName() const;
    void showInformation() const;
};

#endif // CONTACT_HPP

