#include <stdio.h>
#include <string.h>

int main(int argc, const char* argv[])
{
	FILE* csv = fopen("1.csv", "r"); 
	char content[20];
	fscanf(csv, "%s", content);

	char seperator[] = ",";
	char* string;
	int i = 0;
	
	// 将str拆分成子串 str作为分隔符  一次调用返回一个子串，当字符串无法再被拆分时会返回NULL
	// 源码里写的很清楚，这个玩意建议看源码，然后就知道怎么用了
	// 有一个全局变量char* old   不可重入了 _r版本多传一个参数来代替全局变量
	// 第一次strtok完 s串里对应deli的内容会被替换成\0  然后olds+1
	// 如果s是NULL， s = olds
	string = strtok(content, seperator);

	while(string != NULL) {
		printf("column %d is %s\n", i++, string);
		string = strtok(NULL, seperator);
	}
	
	fclose(csv);
	return 0;
}
