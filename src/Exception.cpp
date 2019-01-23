//
// Created by Anastasiia ORJI on 2019-01-22.
//

#include "../inc/Exception.hpp"
#include <iostream>

FontIsNotFound::FontIsNotFound () {}
FontIsNotFound::FontIsNotFound ( FontIsNotFound const & src ) { *this = src; }
FontIsNotFound::~FontIsNotFound ( ) throw() {}
FontIsNotFound &
FontIsNotFound::operator=( FontIsNotFound const & rhs) {
    (void)rhs;
    return *this;
}
const char *
FontIsNotFound::what() const throw() {
    return "No \"Spantaran.otf\" font in \"font\" folder";
}

//small window
//no img