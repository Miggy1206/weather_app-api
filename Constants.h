#include <iostream>
#include <ostream>
#include <string>
#include <string_view>
#include <map>
#include <string>
#include <stdio.h>

#include <sqlite3.h>

#include <json/json.h>

#include "curl/curl.h"
using namespace std;
using namespace Json;


const char* dir = R"(..\weather_demo\weather_database.db)";