SELECT name, bonus
FROM Emloyee LEFT JOIN Bonus USING(empId)
WHERE COALESCE(bonus, 0) < 1000;
