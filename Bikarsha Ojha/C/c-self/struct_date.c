#include<stdio.h>

struct date { 
    int year;
    int month;
    int day;
};

// Function to convert date to total days
int dayConversion(struct date d) {
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
    int days_in_monthLeap[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
    int total_days = 0;
    
    // Check for leap year
    if (d.year % 4 == 0 && (d.year % 100 != 0 || d.year % 400 == 0)) {
        for (int i = 0; i < d.month; i++) {
            total_days += days_in_monthLeap[i];
        }
    } else {
        for (int i = 0; i < d.month; i++) {
            total_days += days_in_month[i];
        }
    }
    
    // Add days of the month
    total_days += d.day;
    
    // Add days of the years
    if (d.year % 4 == 0 && (d.year % 100 != 0 || d.year % 400 == 0)) {
        total_days += (d.year - 1) * 366;
    } else {
        total_days += (d.year - 1) * 365;
    }
    
    return total_days;
}

int main() {
    struct date d1, d2;
    
    printf("Enter Your First Date (YYYY MM DD)\n");
    scanf("%d %d %d", &d1.year, &d1.month, &d1.day);
    
    printf("Enter Your Second Date (YYYY MM DD)\n");
    scanf("%d %d %d", &d2.year, &d2.month, &d2.day);
    
    // Convert dates to total days
    int total_days_d1 = dayConversion(d1);
    int total_days_d2 = dayConversion(d2);
    
    // Calculate the difference
    int diff = total_days_d1 - total_days_d2;
    
    printf("Difference in days: %d\n", diff);
    
    return 0;
}
