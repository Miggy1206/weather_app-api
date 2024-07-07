#pragma once
#include "Constants.h"


class Locations
{
private:
	string location_ID;
	string location_name;
	double latitude;
	double longitude;
	bool favourite;

public:
	bool add_location(const char* s);
	bool delete_location();
	bool create_location_table(const char* s);
	bool edit_location();


};
