//
// Created by User on 6/17/2022.
//

#ifndef EX4_EXCEPTION_H
#define EX4_EXCEPTION_H

#include <exception>
#include <iostream>
#include <sstream>
#include <string>

class DeckFileNotFound: public std::exception{
public:
    const char* what() const noexcept override{
        return "Deck File Error: File not found";
    }

};

class DeckFileInvalidSize: public std::exception{
public:
    const char* what() const noexcept override{
        return "Deck File Error: Deck size is invalid";
    }

};

class DeckFileFormatError: public std::exception{
public:
    explicit DeckFileFormatError(int line)
    {
        std::ostringstream o;
        o << "Deck File Error: File format error in line " << line;
        m_massage = o.str();
    }
    const char* what() const noexcept override{
        return m_massage.c_str();
    }

private:
    std::string m_massage;
};
#endif //EX4_EXCEPTION_H
