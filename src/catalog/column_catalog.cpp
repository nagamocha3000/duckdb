
#include "catalog/column_catalog.hpp"

using namespace duckdb;
using namespace std;

ColumnCatalogEntry::ColumnCatalogEntry(string name, TypeId type,
                                       bool is_not_null)
    : AbstractCatalogEntry(name, nullptr), type(type), is_not_null(is_not_null),
      has_default(false) {}

ColumnCatalogEntry::ColumnCatalogEntry(string name, TypeId type,
                                       bool is_not_null, Value default_value)
    : AbstractCatalogEntry(name, nullptr), type(type), is_not_null(is_not_null),
      has_default(true), default_value(default_value) {}

ColumnCatalogEntry::ColumnCatalogEntry(
    const ColumnCatalogEntry &base,
    std::shared_ptr<AbstractCatalogEntry> parent)
    : AbstractCatalogEntry(base.name, parent) {}