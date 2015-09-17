#include <my_global.h>
#include <mysql.h>
#include <stdio.h>
#include <string.h>
long connect_db(char *db)
{  
  char dbname[10];
  
  strcpy(dbname,db);
  MYSQL *con = mysql_init(NULL);

  if (con == NULL) 
  {
      fprintf(stderr, "%s\n", mysql_error(con));
      return FALSE;  
  }

  if (mysql_real_connect(con, "localhost", "root", "Polaris08", 
          dbname, 0, NULL, 0) == NULL) 
  {
      if(mysql_real_connect(con,"localhost","root","Polaris08",
          NULL,0,NULL,0) == NULL)
      {
      fprintf(stderr, "%s\n", mysql_error(con));
      mysql_close(con);
      return FALSE;
      }
  }  

  return TRUE;
}

//int main()
//{
//char database[10];
//printf("standard connect to mysql database@ local host proceeding .... \n");
//strcpy(database,"sqlapi");
//if(connect_db(database))
//{
//  printf("Connected to [%ss]\n",database);
//}
//return 0;
//}
