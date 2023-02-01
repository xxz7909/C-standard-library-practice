#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>
#include <string.h>

struct _person {
	bool gender;
	float weight;
	float heigth;
	unsigned char age;
	char name[0];
};

struct _person* person_create(int name_length) //some arguments
{

	struct _person* person= (struct _person*)malloc(sizeof(struct _person)+name_length);
	strcpy(person->name, "Zhangsan");
	// some assignment code
	return person;
}

int main(int argc, const char* argv[])
{
	int name_length = 10;
	struct _person* person = person_create(name_length);
	printf("%s\n",person->name);
	
	name_length = 20; //比如买买提什么的，它名字表达出来很长
	return 0;
}
