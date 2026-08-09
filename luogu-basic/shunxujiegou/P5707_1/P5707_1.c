#include <stdio.h>

int main(void)
{
    const int ARRIVAL_MINUTES = 8 * 60;   // 8:00，换算成分钟
    const int GARBAGE_MINUTES = 10;       // 垃圾分类耗时
    const int DAY_MINUTES = 24 * 60;      // 一天的总分钟数

    int distance, speed;
    scanf("%d %d", &distance, &speed);

    // 走路时间向上取整：只能在每分钟的第 0 秒出发
    int walk_minutes = (distance + speed - 1) / speed;

    // 最晚出发时间 = 8:00 - 走路时间 - 垃圾分类时间
    int departure = ARRIVAL_MINUTES - walk_minutes - GARBAGE_MINUTES;

    // 如果算出负数，说明要前一天出发
    if (departure < 0) {
        departure += DAY_MINUTES;
    }

    printf("%02d:%02d\n", departure / 60, departure % 60);

    return 0;
}
