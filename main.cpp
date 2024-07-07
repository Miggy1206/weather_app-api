#include <iostream>
#include <ostream>
#include <string>
#include <string_view>
#include <map>
#include <string>

#include <json/json.h>

#include "curl/curl.h"

using namespace std;

static size_t WriteCallback(void* contents, size_t size, size_t nmemb, void* userp)
{
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}

Json::Value call_API(string url) {
    CURL* curl;
    CURLcode res;
    string httpData;
    Json::Value API_data;

    curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &httpData);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);

    }

    stringstream data(httpData);
    Json::Value jsonData;
    Json::CharReaderBuilder jsonReader;
    std::string errs;

    if (Json::parseFromStream(jsonReader, data, &jsonData, &errs)) {
        API_data = jsonData;

    }
    else
    {
        API_data = "";
    }

    return API_data;
}

int main()
{
   

   return 0;
}