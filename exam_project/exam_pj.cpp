#include <iostream>
#include <cstring>
#include "functions.h"

using namespace std;

const int PRODUCTS = 100;
const int NAME_LENGTH = 50;
const int MANUFACTURER_LENGTH = 50;
const int CATEGORY_LENGTH = 50;
const int FILENAME_LENGTH = 100;

struct Date
{
    int day;
    int month;
    int year;
};

struct Product
{
    char name[NAME_LENGTH];
    char manufacturer[MANUFACTURER_LENGTH];
    double price;
    char category[CATEGORY_LENGTH];
    Date arrival_date;
    Date expiration_date;
};
