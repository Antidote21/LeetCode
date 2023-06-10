# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below
DELETE p1
FROM Person p1, Person p2 # p1과 p2로 두 개의 Person 테이블 별칭
WHERE p1.Email = p2.Email AND #중복된 이메일 값
p1.Id > p2.Id; # 가장 작은 Id 값을 가진 행을 남김
