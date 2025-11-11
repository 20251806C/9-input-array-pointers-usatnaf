#include <stdio.h>

int getdata(void* p_data, char type) {
	int result = 0;

	if (type == 1) result = *(char*)p_data;
	else if (type == 2 )result = *(char*)p_data;
	else if (type == 4)result = *(char*)p_data;
	return result;
}
int main(void) {
	int data = 0x87654321;
	printf("0x%X\n", getdata(&data, 2));
	printf("0x%X\n", getdata(&data, 1));
	printf("0x%X\n", getdata(&data, 4));
	return 0;
}