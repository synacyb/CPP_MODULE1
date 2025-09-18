#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){num_contacts = 0;}

int     valid_line(const std::string &line) {
    if (line.empty())
        return 1;

    for (size_t i = 0; i < line.size(); i++) {
        if (!std::isspace((int)(line[i])))
            return 0;
    }
    return 1;
}

int     parsse_the_number(const std::string &line)
{
    for (size_t i = 0; i < line.size(); i++)
    {
        if(!std::isdigit((int)line[i]))
            return 1;
    }
    return 0;
}

int    PhoneBook::check_set_first_name(){
    std::string line;
    while (true) {
        std::cout << "Enter the first name : ";
        if (!(std::getline(std::cin, line)))
            return 1;

        if (valid_line(line)) {
            std::cout << "\033[1;31m❌ Invalid input, please try again.\033[0m\n";
            continue;
        }
        break;
    }
    Max_contact[num_contacts].set_first_name(line);
    std::cout << std::endl;
    return 0;
}

int     PhoneBook::check_set_last_name(){
    std::string line;
    while (true) {
        std::cout << "Enter the last name : ";
        if (!(std::getline(std::cin, line)))
            return 1;

        if (valid_line(line)) {
            std::cout << "\033[1;31m❌ Invalid input, please try again.\033[0m\n";
            continue;
        }
        break;
    }
    Max_contact[num_contacts].set_last_name(line);
    std::cout << std::endl;
    return 0;
}

int     PhoneBook::check_set_nickname(){
    std::string line;
    while (true) {
        std::cout << "Enter the nickname : ";
        if (!(std::getline(std::cin, line)))
            return 1;

        if (valid_line(line)) {
            std::cout << "\033[1;31m❌ Invalid input, please try again.\033[0m\n";
            continue;
        }
        break;
    }
    Max_contact[num_contacts].set_nickname(line);
    std::cout << std::endl;
    return 0;
}

int     PhoneBook::check_set_phone_num(){
    std::string line;
    while (true) {
        std::cout << "Enter the phone number : ";
        if (!(std::getline(std::cin, line)))
            return 1;

        if (valid_line(line)) {
            std::cout << "\033[1;31m❌ Invalid input, please try again.\033[0m\n";
            continue;
        }
        if(parsse_the_number(line)){
            std::cout << "\033[1;31m❌ Invalid input, please try again.\033[0m\n";
            continue;
        }
        break;
    }
    Max_contact[num_contacts].set_phone_number(line);
    std::cout << std::endl;
    return 0;
}

int     PhoneBook::check_set_dark_secret(){
    std::string line;
    while (true) {
        std::cout << "Enter the darkest secret : ";
        if (!(std::getline(std::cin, line)))
            return 1;

        if (valid_line(line)) {
            std::cout << "❌ Invalid input, please try again.\n";
            continue;
        }
        break;
    }
    Max_contact[num_contacts].set_darkest_secret(line);
    std::cout << std::endl;
    return 0;
}

int    PhoneBook::add_contact(){

    if(check_set_first_name())
        return 1;
    if(check_set_last_name())
        return 1;
    if(check_set_nickname())
        return 1;
    if(check_set_phone_num())
        return 1;
    if(check_set_dark_secret())
        return 1;
    std::cout << "\033[1;32m✅ Contact successfully created!\033[0m\n";
    num_contacts++;
    if(num_contacts > 7)
        num_contacts = 0;
    return 0;
}

void display_header() {
    std::cout << "|" << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
}

std::string take_needed_segment(const std::string& str){
    if (str.length() > 10) {
        return str.substr(0, 9) + ".";
    }
    return str;
}

void    display_contact_row(Contact contact, int index){
    std::cout << "|" << std::setw(10) << index << "|";
    std::cout << std::setw(10) << take_needed_segment(contact.get_first_name()) << "|";
    std::cout << std::setw(10) << take_needed_segment(contact.get_last_name()) << "|";
    std::cout << std::setw(10) << take_needed_segment(contact.get_nickname()) << "|";
    std::cout << std::endl;
}

int search_contact(Contact *Search, int index) {
    if (index > 7) {
        std::cout << BOLD << RED << "❌ Invalid index! Please enter a value between 0 -> 7." << RESET << std::endl;
        return 1;
    } else if (Search[index].get_first_name().empty()) {
        std::cout << BOLD << YELLOW << "⚠️ This contact was not found. Please check again." << RESET << std::endl;
        return 1;
    }

    std::cout << std::endl;
    std::cout << BOLD << GREEN << "--- Contact Details ---" << RESET << std::endl;
    std::cout << BOLD << CYAN << "First Name: " << RESET << Search[index].get_first_name() << std::endl;
    std::cout << BOLD << CYAN << "Last Name: " << RESET << Search[index].get_last_name() << std::endl;
    std::cout << BOLD << CYAN << "Nickname: " << RESET << Search[index].get_nickname() << std::endl;
    std::cout << BOLD << CYAN << "Phone Number: " << RESET << Search[index].get_phone_number() << std::endl;
    std::cout << BOLD << CYAN << "Darkest Secret: " << RESET << Search[index].get_darkest_secret() << std::endl;
    std::cout << BOLD << GREEN << "-----------------------" << RESET << std::endl;
    
    return 0;
}

int parsse_line(std::string &line){
    if(line == "")
        return 1;
    for(int i = 0; i < line.size(); i++){
        if(!std::isdigit((int)line[i])){
            std::cout << RED << "❌invalid input (enter just a number)" << RESET << std::endl;
            return 1;
        }
    }
    return 0;
}

int     PhoneBook::display_contacts(){
    std::string line;

    if(Max_contact[0].get_first_name() == ""){
        std::cout << "\033[1;33m⚠️ You don't have any contact yet!\033[0m\n";
        return 0;
    }
    display_header();
    for(int index = 0; (index < 8 && Max_contact[index].get_first_name() != ""); index++){
        display_contact_row(Max_contact[index], index);
    }
    std::cout << "SEARCH ᯓ★: Enter index of the contact that you want searched !" << std::endl;
    for(;;){
        std::cout << "SEARCH ᯓ★ ";
        if(!std::getline(std::cin, line))
            return 1;
        if(parsse_line(line))
            continue;
        int number = atoi(line.c_str());
        if(search_contact(Max_contact, number))
            continue;
        else
            break;
    }
    return 0;
}