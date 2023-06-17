# Write your MySQL query statement below
SELECT name
FROM Customer
WHERE referee_id <> 2 || ISNULL(referee_id);
