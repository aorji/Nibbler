//
// Created by Anastasiia ORJI on 2019-01-22.
//

#ifndef NIBBLER_EXCEPTION_HPP
#define NIBBLER_EXCEPTION_HPP

#include <exception>
#include <string>

class FontIsNotFound: public std::exception {
public:
    explicit FontIsNotFound();
    FontIsNotFound( FontIsNotFound const & src );
    ~FontIsNotFound( ) throw();
    FontIsNotFound & operator=( FontIsNotFound const & rhs);
    const char* what() const throw() override;
};

#endif //NIBBLER_EXCEPTION_HPP
