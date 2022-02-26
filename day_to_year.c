 // days theke year, month, week, days ber korar programm

#include <stdio.h>
int main() {
	int ndays, y, m, d, w;	
	
	printf("Input no. of days: ");
	
	scanf("%d", &ndays);
	
    y = ndays / 365;
    
    ndays = ndays - (365 * y);
    
    m = ndays / 30;
    
    w = ndays / 7;
    
    d = ndays - (m * 30);
    
	printf(" %d Year(s) \n %d Month(s) \n %d Week(s) \n %d Day(s)", y, m, w, d);
	return 0;
}
