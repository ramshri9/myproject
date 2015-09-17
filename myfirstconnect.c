#include <my_global.h>
#include <mysql.h>
#include <stdio.h>
#include <string.h>
int main()
{
char db[10];
strcpy(db,"sqlapi");
if(connect_db(db))
{
printf("Connected to database [%s]",db);
}
return 0;
}
