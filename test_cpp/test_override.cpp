#include <iostream>


class Time
{
public:
    Time(int hour, int minute, int second)
    {
        hour_ = hour;
        minute_ = minute;
        second_ = second;
    };

    void show()
    {
        std::cout << "Time is " << hour_ << ":" << minute_ << ":" << second_ << std::endl;
    }

    Time operator+(const Time& time)
    {
        second_ += time.second_;
        if (second_ >= 60)
        {
            second_ -= 60;
            minute_++;
        }
        
        minute_ += time.minute_;
        if (minute_ >= 60)
        {
            minute_ -= 60;
            hour_++;
        }

        hour_ += time.hour_;
        hour_ = hour_ % 24;
        return Time(hour_, minute_, second_);
    }

    Time operator++(int)
    {
        Time old = *this;
        
        ++(*this);
        return old;
    }

    Time& operator++()
    {
        second_++;

        if (second_ >= 60)
        {
            second_ -= 60;
            minute_++;
        }

        if (minute_ >= 60)
        {
            minute_ -= 60;
            hour_++;
        }

        hour_ = hour_ % 24;

        return *this;
    }

private:
    int hour_;
    int minute_;
    int second_;
};


int main()
{
    Time time_1(10, 20, 22);
    time_1.show();

    Time time_2(10, 20, 22);
    time_2.show();

    Time time_3 = time_1 + time_2;
    time_3.show();

    time_3++.show();

    (++time_3).show();

    return 0;
}




