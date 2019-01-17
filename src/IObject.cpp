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

std::pair<int, int> IObject::get_place()
{
	return place;
}

void				IObject::set_place(int x, int y)
{
	place.first = x;
	place.second = y;
}
