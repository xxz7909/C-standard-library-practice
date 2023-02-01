#include <stdio.h>
#include <pwd.h>
#include <unistd.h>

char* getname()
{
	uid_t uid = getuid();
	struct passwd *user;
	user = getpwuid(uid);
	return user->pw_name;
}

int main(int argc, const char* argv[])
{
	printf("%s\n", getname());
	
	return 0;
}
