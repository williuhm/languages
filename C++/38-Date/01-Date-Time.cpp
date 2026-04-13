/*
    Date and time is also very important, one of the basic
    libraries to be used.

    Include ctime library.
*/

#include <iostream>
#include <ctime>
using namespace std;

int main() {
    // Get the timestamp for the current date and time
    time_t timestamp;
    time(&timestamp);

    // Display the date and time represented by the timestamp
    cout << ctime(&timestamp) << "\n";

    struct tm datetime;
    time_t timestamp1;

    datetime.tm_year = 2023 - 1900; // Number of years since 1900
    datetime.tm_mon = 12 - 1; // Number of months since January
    datetime.tm_mday = 17;
    datetime.tm_hour = 12;
    datetime.tm_min = 30;
    datetime.tm_sec = 1;
    // Daylight Savings must be specified
    // -1 uses the computer's timezone setting
    datetime.tm_isdst = -1;

    timestamp1 = mktime(&datetime);

    cout << ctime(&timestamp1) << "\n";

    // Create the datetime structure and use mktime to fill in the missing members
    struct tm datetime1;
    datetime1.tm_year = 2023 - 1900; // Number of years since 1900
    datetime1.tm_mon = 12 - 1; // Number of months since January
    datetime1.tm_mday = 17;
    datetime1.tm_hour = 0; datetime.tm_min = 0; datetime.tm_sec = 0;
    datetime1.tm_isdst = -1;
    mktime(&datetime1);

    string weekdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    cout << "The date is on a " << weekdays[datetime1.tm_wday] << "\n";

    time_t timestamp2 = time(&timestamp2);
    struct tm datetime2 = *localtime(&timestamp2);

    cout << datetime2.tm_hour << "\n";

    time_t timestamp3 = time(NULL);
    struct tm datetime3 = *localtime(&timestamp3);

    cout << asctime(&datetime3) << "\n";

    // Create the datetime structure and use mktime to correct mistakes
    struct tm datetime4;
    datetime4.tm_year = 2022 - 1900; // Number of years since 1900
    datetime4.tm_mon = 0; // 0 is January
    datetime4.tm_mday = 32;
    datetime4.tm_hour = 0; datetime.tm_min = 0; datetime.tm_sec = 0;
    datetime4.tm_isdst = -1;
    mktime(&datetime4);

    cout << asctime(&datetime4) << "\n";

    time_t timestamp4 = time(NULL);
    struct tm datetime5 = *localtime(&timestamp4);

    char output[50];

    strftime(output, 50, "%B %e, %Y", &datetime5);
    cout << output << "\n";

    strftime(output, 50, "%I:%M:%S %p", &datetime5);
    cout << output << "\n";

    strftime(output, 50, "%m/%d/%y", &datetime5);
    cout << output << "\n";

    strftime(output, 50, "%a %b %e %H:%M:%S %Y", &datetime5);
    cout << output << "\n";

    time_t now;
    time_t nextyear;
    struct tm datetime6;

    now = time(NULL);
    datetime6 = *localtime(&now);
    datetime6.tm_year = datetime6.tm_year + 1;
    datetime6.tm_mon = 0;
    datetime6.tm_mday = 1;
    datetime6.tm_hour = 0; datetime6.tm_min = 0; datetime6.tm_sec = 0;
    datetime6.tm_isdst = -1;
    nextyear = mktime(&datetime6);

    int diff = difftime(nextyear, now);

    cout << diff << " seconds until next year" << "\n";

    clock_t before = clock();
    int k = 0;
    for(int i = 0; i < 100000; i++) {
        k += i;
    }
    clock_t duration = clock() - before;
    cout << "Duration: " << (float)duration / CLOCKS_PER_SEC << " seconds" << "\n";

    return 0;
}