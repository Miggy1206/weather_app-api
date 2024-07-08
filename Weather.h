#pragma once

#include "Constants.h"


class Weather
{
private:
	double latitude;
	double longitude;
	Value weather_data;

public:
	void set_coordinates(double lat, double lon);
};

