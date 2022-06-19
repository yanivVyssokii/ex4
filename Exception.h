//
// Created by User on 6/17/2022.
//

#ifndef EX4_EXCEPTION_H
#define EX4_EXCEPTION_H

#include <exception>
#include <iostream>

class DeckFileNotFound: public std::invalid_argument{
public:
    explicit DeckFileNotFound(std::string fileName);
    const char* what() const override;

};

class DeckFileInvalidSize: public std::length_error{
public:
    explicit DeckFileInvalidSize();
    const char* what() const override;

};

class DeckFileFormatError: public std::exception{
public:
    explicit DeckFileFormatError(int line);
    const char* what() const override;

private:
    int m_line;
};
#endif //EX4_EXCEPTION_H
