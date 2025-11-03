#include <stdio.h>
#include <string.h>

int main() {
    char date[15], day[3], month[3], year[5];
    char *monthName[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                         "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int monthNum;

    printf("Enter date in format dd/mm/yyyy: ");
    scanf("%s", date);

    strncpy(day, date, 2);
    day[2] = '\0';

    strncpy(month, date + 3, 2);
    month[2] = '\0';

    strcpy(year, date + 6);

    sscanf(month, "%d", &monthNum);

    if (monthNum >= 1 && monthNum <= 12)
        printf("Converted date: %s-%s-%s\n", day, monthName[monthNum - 1], year);
    else
        printf("Invalid month entered!\n");

    return 0;
}
