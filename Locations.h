#pragma once
#include "Constants.h"


class Locations
{
private:
	int location_ID = 3;
	string location_name;
	double latitude;
	double longitude;
	bool favourite;

public:
	bool add_location(const char* s);
	bool remove_location(const char* s);
	bool create_location_table(const char* s);
	bool update_location(const char* s);


};
