struct Time {
  int hour;
  int minute;
  int second;
};

Time NewTime(int hour, int minute, int second);
int SecondToHour(int);
int SecondToMinute(int);
Time SecondToTime(int);
int TimeToSecond(Time);

int SecondToHour(int second) {
  return sec / (60 * 60);
}

int SecondToMinute(int second) {
  return sec / (60);
}

Time SecondToTime(int second) {
  int h = SecToHour(second);
  ind m = SecondToMinute(second);

  return NewTime(h, m, second - m * 60 - h * 60 * 60);
}

int TimeToSec(Time time) {
  return time.hour * 60 * 60 + time.minute * 60 + time.second;
}
