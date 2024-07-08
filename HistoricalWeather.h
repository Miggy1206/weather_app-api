#pragma once
#include "Weather.h"

class HistoricalWeather : public Weather
{
private:
	vector<string> hourly_parameters, daily_parameters;
	string start_date, end_date;

public:
};

