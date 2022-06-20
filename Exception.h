//
// Created by User on 6/17/2022.
//

#ifndef EX4_EXCEPTION_H
#define EX4_EXCEPTION_H

#include <exception>
#include <iostream>
#include <string>

class DeckFileNotFound: public std::exception{
public:
    const char* what() const override{
        return "Deck File Error: File not found";
    }

};

class DeckFileInvalidSize: public std::exception{
public:
    const char* what() const override{
        return "Deck File Error: Deck size is invalid";
    }

};

class DeckFileFormatError: public std::exception{
public:
    explicit DeckFileFormatError(int line):m_line(line)
    {}
    const char* what() const override{
        std::string massage = std::string("Deck File Error: File format error in line ")+ std::to_string(m_line);
        return massage.c_str();
    }

private:
    int m_line;
};
#endif //EX4_EXCEPTION_H
