#pragma once
#include "Constants.h"

using namespace std;

class API
{
private:
	Json::Value api_data;

public:
	void get_api_data(string URL);
	Json::Value return_api_data();
};

