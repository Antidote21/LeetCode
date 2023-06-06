# Write your MySQL query statement below
SELECT email from Person 
group by email
having count(email) > 1;
-- HAVING 절은 그룹화된 결과에 대한 조건을 지정
