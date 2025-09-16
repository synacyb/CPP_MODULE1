#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "contact.hpp"


class PhoneBook{
    private:
        contact Max_contact[8];
        int num_contacts;
    public:
        PhoneBook();
    int    add_contact();
    int    display_contact(int index);
    int    check_set_first_name();
    int    check_set_last_name();
    int    check_set_nickname();
    int    check_set_phone_num();
    int    check_set_dark_secret();
};

#endif