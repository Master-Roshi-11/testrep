#include <iostream>
#include "mysql_connection.h"

#include "connection.h"
#include "driver.h"
#include "exception.h"
#include "resultset.h"
#include "statement.h"
#include "prepared_statement.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(void)
{
cout << endl;
cout << "Let's have MySQL count from 10 to 1..." << endl;


try {
sql::Driver *driver;
sql::Connection *con;
sql::Statement *stmt;
sql::ResultSet *res;
sql::PreparedStatement *pstmt;

/* Create a connection */
driver = get_driver_instance();
con = driver->connect("tcp://127.0.0.1:3306", "root", "admin1234");
/* Connect to the MySQL test database */
con->setSchema("test");

delete con;
}
catch (sql::SQLException &e) {

}


return 0;
}
