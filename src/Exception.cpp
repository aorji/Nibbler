#include "../inc/Exception.hpp"

const char*    InvalidSize::what() const throw() {
	return ("Size of map should be in range [20;50].");
}

const char*    InvalidLibrary::what() const throw() {
	return ("Invalid library name.");
}

const char*    InvalidLibraryFunction::what() const throw() {
	return ("Invalid library function.");
}

const char *
BadFileAccess::what() const throw() {
	return "maxScore.txt: Bad file eaccess";
}

const char *
BadMaxScore::what() const throw() {
	return "Bad number in maxScore.txt";
}