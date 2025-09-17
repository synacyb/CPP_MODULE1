#include "phonebook.hpp"

void    print_welcome(){
    std::cout << "=====================================\n";
    std::cout << "       📖  Welcome to PhoneBook       \n";
    std::cout << "=====================================\n";
    std::cout << "Available commands:\n";
    std::cout << "  ADD    - Add a new contact\n";
    std::cout << "  SEARCH - Search for a contact\n";
    std::cout << "  EXIT   - Quit the program\n";
    std::cout << "=====================================\n\n";
}

int main()
{
    std::string line;
    PhoneBook contact;
    print_welcome();
    while (true)
    {
        std::cout << "HOME ᯓ★ ";
        if(!(std::getline(std::cin, line)))
            return 1;
        if(line == "ADD")
        {
            if(contact.add_contact())
                return 1;
        }
        else if(line == "SEARCH")
        {
            if(contact.display_contacts())
                return 1;
        }
        else if (line == "EXIT")
            break ;
        else
            std::cout << "\033[1;31m❌ Invalid command! Type ADD, SEARCH, or EXIT.\033[0m\n";
    }
    std::cout << BOLD << YELLOW << "👋 Good bye, please stay!" << RESET << std::endl;
    return 0;
}