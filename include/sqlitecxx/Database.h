#pragma once

#include <string>

struct sqlite3;

namespace SQLiteCXX {

class Database {
private:
  sqlite3* m_pSQLite;

public:
  Database(std::string const &fileName);
  ~Database();
};

} // SQLiteCXX
