#include <iostream>

class Time
{
    public:
        double hours;
        double minutes;
        double seconds;

        void addSeconds(double sec)
        {
            seconds += sec;
            minutes += static_cast<int>(seconds / 60);
            hours += static_cast<int>(minutes / 60);
            seconds = static_cast<int>(seconds) % 60;
            minutes = static_cast<int>(minutes) % 60;
        }

        void showTime()
        {
            std::cout << "Час: " << hours << " годин, " << minutes << " хвилин, " << seconds << " секунд." << std::endl;
        }
};

int main()
{
    Time time_1{1, 30, 45};


    time_1.showTime();


    time_1.addSeconds(5000);
    time_1.showTime();

    return 0;
}
