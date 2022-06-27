# Write your MySQL query statement below
SELECT p.firstName, p.lastName, a.city, a.state
FROM PERSON AS p LEFT JOIN ADDRESS AS a 
ON p.PERSONID=a.PERSONID;