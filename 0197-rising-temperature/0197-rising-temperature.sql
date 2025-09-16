# Write your MySQL query statement below
select a.id from weather a, weather b
where a.temperature > b.temperature and datediff(a.recorddate,b.recorddate)=1;