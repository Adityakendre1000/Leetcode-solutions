/* Write your T-SQL query statement below */
select eu.unique_id, e.name from EmployeeUNI eu 
Right JOIN Employees e
ON eu.id = e.id;
