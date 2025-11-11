#include<stdio.h>

int main(void) {
	char char_data;
	int int_data, oct_data, hex_data;
	float float_data;
	char str_data[20];

	printf("enter the following data:\n");
	printf("%%c, %%d, %%o, %%x, %%f, %%s\n");
	scanf_s("%c",&char_data);
	printf("char %%c:%c", char_data);
	scanf_s("%d %o %x", &int_data,&oct_data,&hex_data);
	printf("int %%d:%d ocy %%o:%o %%x:%x\n", int_data, oct_data, hex_data);
	scanf_s("%f", &float_data);
	printf("float %%f: %f\n", float_data);
	scanf_s("%s",& str_data,sizeof(str_data));
	printf("str %%s: %s\n", str_data);
	
}