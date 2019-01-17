#include "../inc/IObject.hpp"

IObject::IObject() : place(std::make_pair(0, 0))
{}

IObject::IObject(int x, int y) : place(std::make_pair(x, y))
{}

IObject::IObject(IObject const &rv) : place(rv.place)
{}

IObject::~IObject()
{}

IObject & IObject::operator=(IObject const &rv)
{
	if (this != &rv)
	{
		place = rv.place;
	}
	return *this;
}
