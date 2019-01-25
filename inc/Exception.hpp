#ifndef EXCEPTION_HPP
#define EXCEPTION_HPP

#include <stdexcept>

class InvalidSize : public std::exception
{
	public:
		const char *what() const throw();
};

class InvalidLibrary : public std::exception
{
	public:
		const char *what() const throw();
};

class InvalidLibraryFunction : public std::exception
{
	public:
		const char *what() const throw();
};

class BadFileAccess: public std::exception {
public:
    const char* what() const throw();
};

class BadMaxScore: public std::exception {
public:
    const char* what() const throw();
};

#endif
