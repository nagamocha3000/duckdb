#include "duckdb/planner/binder.hpp"
#include "duckdb/planner/tableref/bound_table_function.hpp"

namespace duckdb {
using namespace std;

unique_ptr<LogicalOperator> Binder::CreatePlan(BoundTableFunction &ref) {
	return move(ref.get);
}

} // namespace duckdb
