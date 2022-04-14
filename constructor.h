class Time
{
public:
    int hours {}, minutes {}, seconds {};

    Time()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    Time(int hoursInput, int minutesInput, int secondsInput)
    {
        hours = hoursInput;
        minutes = minutesInput;
        seconds = secondsInput;
    }
};