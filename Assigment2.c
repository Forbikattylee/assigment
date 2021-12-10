#include <stdio.h>
void Month(int days);
int main() {
Month (29);
return 0;
}
void Month(int days) {
int weekday;
int i;
printf("Sun Mon Tue Wed Thu Fri Sat\n");
for(int daycount=1; daycount <=days; daycount++) {
if( weekday%7==0) {
printf("\n");
weekday++;
}
else{
weekday++;}
printf(" %d", daycount);
}
}
