/* Write your T-SQL query statement below */
select v.customer_id, count(*) as count_no_trans
from Visits v
Left join Transactions t
on v.visit_id = t.visit_id
Where t.transaction_id is null
group by v.customer_id; 