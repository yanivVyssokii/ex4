//
// Created by User on 6/17/2022.
//

#ifndef EX4_EXCEPTION_H
#define EX4_EXCEPTION_H

#include <exception>
#include <iostream>

class DeckFileNotFound: public std::exception{
public:
    explicit DeckFileNotFound();
    const char* what() const noexcept override;

};

class DeckFileInvalidSize: public std::exception{
public:
    explicit DeckFileInvalidSize();
    const char* what() const noexcept override;

};

class DeckFileFormatError: public std::exception{
public:
    explicit DeckFileFormatError(int line);
    const char* what() const noexcept override;

private:
    int m_line;
};
#endif //EX4_EXCEPTION_H
