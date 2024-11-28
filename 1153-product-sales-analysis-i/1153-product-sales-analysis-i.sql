/* Write your T-SQL query statement below */
select p.product_name,s.year,s.price
from Sales s
Inner Join Product p
On s.product_id = p.product_id;