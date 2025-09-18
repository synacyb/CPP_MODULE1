#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#define RESET   "\033[0m"
#define BOLD    "\033[1m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define CYAN    "\033[36m"
#define YELLOW  "\033[33m"

#include <iostream>
#include <iomanip>
#include "Contact.hpp"


class PhoneBook{
    private:
        Contact Max_contact[8];
        int num_contacts;
    public:
        PhoneBook();
        int    add_contact();
        int    display_contacts();
        int    check_set_first_name();
        int    check_set_last_name();
        int    check_set_nickname();
        int    check_set_phone_num();
        int    check_set_dark_secret();
};

#endif