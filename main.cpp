#include "Locations.h"
#include "Constants.h"


int main()
{
	const char* dir = R"(..\weather_app_api\weather_database.db)";
	sqlite3* DB;

	int exit = 0;
	exit = sqlite3_open(dir, &DB);

	Locations location = Locations();
	location.create_location_table(dir);
	location.update_location(dir);
	sqlite3_close(DB);

   return 0;
}



