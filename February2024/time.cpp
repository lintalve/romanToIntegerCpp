#include <ctime>
#include <cstdio>
#include <unistd.h>

int some;
time_t long_int_now; //varialbe to hold the time, typedef long     __darwin_time_t;

//copied from definition header time.h suplied by the compiler vendor
struct tme {
    int	tm_sec;		/* seconds after the minute [0-60] */
    int	tm_min;		/* minutes after the hour [0-59] */
    int	tm_hour;	/* hours since midnight [0-23] */
    int	tm_mday;	/* day of the month [1-31] */
    int	tm_mon;		/* months since January [0-11] */
    int	tm_year;	/* years since 1900 */
    int	tm_wday;	/* days since Sunday [0-6] */
    int	tm_yday;	/* days since January 1 [0-365] */
    int	tm_isdst;	/* Daylight Savings Time flag */
    long	tm_gmtoff;	/* offset from UTC in seconds */
    char	*tm_zone;	/* timezone abbreviation */
};

struct tm* struct_tm_time;
int main(){
    long_int_now= time(NULL);  //function to get the time
    time(&long_int_now);
    printf("%li", long_int_now);
    struct_tm_time = localtime(&long_int_now);
    printf("struct tm time %i %i %i", struct_tm_time->tm_hour, struct_tm_time->tm_min, struct_tm_time->tm_sec);

    for(short i =0; i<123; i++){
        long_int_now= time(NULL);
        struct_tm_time = localtime(&long_int_now);
        printf("struct tm time %i %i %i \n", struct_tm_time->tm_hour, struct_tm_time->tm_min, struct_tm_time->tm_sec);
        usleep(1245698);
    }

    return 0;
}