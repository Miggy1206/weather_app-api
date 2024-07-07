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
	bool add_location();
	bool delete_location();

};
