#ifndef IOBJECT_HPP
#define IOBJECT_HPP

#include <vector>

class IObject
{
	std::pair<int, int> place;
public:
	IObject();
	IObject(int x, int y);
	IObject(IObject const &rv);
	virtual ~IObject();

	IObject & operator=(IObject const &rv);
};

#endif