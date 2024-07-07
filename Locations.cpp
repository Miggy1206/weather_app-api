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