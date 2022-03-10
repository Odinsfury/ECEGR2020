
class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date();
    Date(int month, int day, int year);
    Date(char *dateStr);
    Date(Date &init);
};

Date::Date()
{
    // set to today
}

Date::Date(int month, int day, int year)
{
    this->month = month;
    this->day = day;
    this->year = year;
}

Date::Date(char *dateStr)
{
    // parse dateStr
}

Date::Date(Date &init)
{
    // Copy constructor
    month = init.month;
    day = init.day;
    year = 1980;
}

int main()
{
    Date    today(1, 23, 2022);

    Date    yesterday;  // default constructor 

    Date    aCopy = today; // copy constructor
    
    return 0;
}