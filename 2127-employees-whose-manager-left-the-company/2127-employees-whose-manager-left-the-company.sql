/* Write your T-SQL query statement below */
select e.employee_id from employees e
where e.salary < 30000 and e.manager_id not in (select employee_id from employees)
order by 1;

-- select e.employee_id from employees e
-- where e.manager_id not in (select employee_id from employees);