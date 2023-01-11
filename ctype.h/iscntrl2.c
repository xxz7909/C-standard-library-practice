#include <stdio.h>
#include <ctype.h>

int main(int argc, const char* argv[])
{
	int i,j;
	i = j = 0;
	char str1[] = "all \a about programming ";	
	char str2[] = "on tutorials \n point";
	while(str1[i]){// \0 是控制字符0x0
		if(iscntrl(str1[i])){
			i++;
			continue;
		}
		else{
			printf("%c",str1[i]);
		}
		++i;
	}
	while(str2[j]){// \0 是控制字符0x0
		if(iscntrl(str2[j])) {
			j++;
			continue;
		}
		else {
			printf("%c",str2[j]);		
		}

		++j;
	}
	putchar('\n');

	return 0;
}
