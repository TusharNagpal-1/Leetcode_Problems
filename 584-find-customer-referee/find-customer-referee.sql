# Write your MySQL query statement below
select name
from Customer
where referee_id is NULL || referee_id!=2;