#include "contact.hpp"

// set our get and set methods "encapsulation"

void    contact::set_first_name(std::string &name){
    first_name = name;
}

void    contact::set_last_name(std::string &name){
    last_name = name;
}

void    contact::set_nickname(std::string &name){
    nickname = name;
}

void    contact::set_phone_number(std::string &number){
    phone_number = number;
}

void    contact::set_darkest_secret(std::string &secret){
    darkest_secret = secret;
}

std::string contact::get_first_name(){
    return (first_name);
}

std::string contact::get_last_name(){
    return (last_name);
}

std::string contact::get_nickname(){
    return (nickname);
}

std::string contact::get_phone_number(){
    return (phone_number);
}

std::string contact::get_darkest_secret(){
    return (darkest_secret);
}