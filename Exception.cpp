//
// Created by User on 6/17/2022.
//

#include "Exception.h"
#include <string>

DeckFileNotFound::DeckFileNotFound(): std::exception("Deck File Error: File not found")
{}

const char *DeckFileNotFound::what() const noexcept {
    return exception::what();
}


DeckFileInvalidSize::DeckFileInvalidSize(): std::exception("Deck File Error: Deck size is invalid")
{}

const char *DeckFileInvalidSize::what() const noexcept {
    return exception::what();
}

DeckFileFormatError::DeckFileFormatError(int line): m_line(line)
{}

const char *DeckFileFormatError::what() const noexcept {
    std::string massage = std::string("Deck File Error: File format error in line ")+ std::to_string(m_line);
    return massage.c_str();
}


