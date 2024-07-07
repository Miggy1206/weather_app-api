#include "Locations.h"





int main()
{
	sqlite3* DB;

	int exit = 0;
	exit = sqlite3_open(dir, &DB);

	Locations location = Locations();
	location.create_location_table(dir);
	location.add_location(dir);

	sqlite3_close(DB);

   return 0;
}



