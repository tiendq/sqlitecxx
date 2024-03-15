#include <sqlite3.h>
#include "Database.h"

using namespace std;

namespace SQLiteCXX {

Database::Database(string const &fileName) {
  sqlite3_open_v2(fileName.c_str(), &m_pSQLite, SQLITE_OPEN_CREATE | SQLITE_OPEN_READWRITE, nullptr);
}

Database::~Database() {
}

}
