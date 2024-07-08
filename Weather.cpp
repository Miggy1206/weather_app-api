#include "Weather.h"



void Weather::set_coordinates(double lat, double lon) {
	latitude = lat;
	longitude = lon;
}


void Weather::set_weather_data(Value data) {
	weather_data = data;
}