#include "Locations.h"

bool is_valid_latitude(string lat) {
    try {
        stringstream streamLat(lat);
        getline(streamLat, lat, ' ');
        double latToDo = stod(lat);
        if (latToDo >= -90 && latToDo <= 90) {
            return true;
        }
        else {
            return false;
        }
    }
    catch (exception& err) {
        return false;
    }
}

bool is_valid_longitude(string lon) {
    try {
        stringstream streamLat(lon);
        getline(streamLat, lon, ' ');
        double lonToDo = stod(lon);
        if (lonToDo >= -180 && lonToDo <= 180) {
            return true;
        }
        else {
            return false;
        }
    }
    catch (exception& err) {
        return false;
    }
}



bool Locations::create_location_table(const char* s)
{
    sqlite3* DB;
    char* messageError;

    string sql = "CREATE TABLE IF NOT EXISTS LOCATIONS("
        "ID INTEGER PRIMARY KEY AUTOINCREMENT, "
        "LATITUDE      DECIMAL(10,2) NOT NULL, "
        "LONGITUDE     DECIMAL(10,2) NOT NULL, "
        "NAME       TEXT  NOT NULL, "
        "FAVOURITE     BOOL );";

    try
    {
        int exit = 0;
        exit = sqlite3_open(s, &DB);
        exit = sqlite3_exec(DB, sql.c_str(), NULL, 0, &messageError);
        if (exit != SQLITE_OK) {
            cerr << "Error in createTable function." << endl;
            sqlite3_free(messageError);
        }
        else
            cout << "Table created Successfully" << endl;
        sqlite3_close(DB);
    }
    catch (const exception& e)
    {
        cerr << e.what();
    }

    return 0;
}


bool Locations::add_location(const char* s) {
    sqlite3* DB;
    char* messageError;

    double lat = 45.54;
    double lon = 90.56;
    string location_name = "porto";

    string sql("INSERT INTO LOCATIONS (LATITUDE, LONGITUDE, NAME, FAVOURITE) VALUES("+to_string(lat) + ", " + to_string(lon) + ", '" + location_name + "', false);");

    int exit = sqlite3_open(s, &DB);

    exit = sqlite3_exec(DB, sql.c_str(), NULL, 0, &messageError);
    if (exit != SQLITE_OK) {
        cerr << "Error in insertData function." << endl;
        sqlite3_free(messageError);
    }
    else
        cout << "Records inserted Successfully!" << endl;

    return 0;
}