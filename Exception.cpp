//
// Created by User on 6/17/2022.
//

#include "Exception.h"
#include <string>

DeckFileNotFound::DeckFileNotFound(): std::invalid_argument("Deck File Error: File not found")
{}

const char *DeckFileNotFound::what() const {
    return exception::what();
}


DeckFileInvalidSize::DeckFileInvalidSize(): std::length_error("Deck File Error: Deck size is invalid")
{}

const char *DeckFileInvalidSize::what() const {
    return exception::what();
}

DeckFileFormatError::DeckFileFormatError(int line): m_line(line)
{}

const char *DeckFileFormatError::what() const {
    std::string massage = std::string("Deck File Error: File format error in line ")+ std::to_string(m_line);
    return massage.c_str();
}


