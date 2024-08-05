CREATE DATABASE employee;
USE employee;

CREATE TABLE Employees (
    empno INT PRIMARY KEY,
    ename VARCHAR(50),
    job VARCHAR(50),
    mgr INT,
    hiredate DATE,
    sal DECIMAL(10,2),
    comm DECIMAL(10,2),
    deptno INT
);

INSERT INTO Employees (empno, ename, job, mgr, hiredate, sal, comm, deptno)
VALUES
    (7369, 'SMITH', 'CLERK', 7902, '1993-06-13', 800, NULL, 20),
    (7499, 'ALLEN', 'SALESMAN', 7698, '1998-08-15', 1600, 300, 30),
    (7521, 'WARD', 'SALESMAN', 7698, '1996-03-26', 1250, 500, 30),
    (7566, 'JONES', 'MANAGER', 7839, '1995-10-31', 2975, NULL, 20),
    (7698, 'BLAKE', 'MANAGER', 7839, '1992-06-11', 2850, NULL, 30),
    (7782, 'CLARK', 'MANAGER', 7839, '1993-05-14', 2450, NULL, 10),
    (7788, 'SCOTT', 'ANALYST', 7566, '1996-03-05', 3000, NULL, 20),
    (7839, 'KING', 'PRESIDENT', NULL, '1990-06-09', 5000, NULL, 10),
    (7844, 'TURNER', 'SALESMAN', 7698, '1995-06-04', 1500, 0, 30),
    (7876, 'ADAMS', 'CLERK', 7788, '1999-06-04', 1100, NULL, 20),
    (7900, 'JAMES', 'CLERK', 7698, '2000-06-23', 950, NULL, 30),
    (7934, 'MILLER', 'CLERK', 7782, '2000-01-21', 1300, NULL, 10);
    
SELECT * FROM Employees;

-- Q1. List the employees whose name is having letter ‘L’ as 2nd character
SELECT * FROM Employees WHERE SUBSTRING(ename, 2, 1) = 'L';

-- Q2. List the employees whose name is having atleast 2 L’s
SELECT * FROM Employees WHERE LENGTH(ename) - LENGTH(REPLACE(ename, 'L', '')) >= 2;

-- Q3. List the employees whose name is having letter ‘E’ as the last but one character.
SELECT * FROM Employees WHERE RIGHT(ename, 2) = 'E_';

-- Q4. List all the employees whose name is having letter ‘R’ in the 3rd position.
SELECT * FROM Employees WHERE SUBSTRING(ename, 3, 1) = 'R';

-- Q5. List all the employees who are having exactly 5 characters in their jobs
SELECT * FROM Employees WHERE LENGTH(job) = 5;

-- Q6. List the employees whose salary is between 2000 and 3000
SELECT * FROM Employees WHERE sal BETWEEN 2000 AND 3000;

-- Q7. List all the employees who don’t have a reporting manager.
SELECT * FROM Employees WHERE mgr IS NULL;

-- Q8. List all the salesmen in dept number 30 and having salary greater than 1500.
SELECT * FROM Employees WHERE job = 'SALESMAN' AND deptno = 30 AND sal > 1500;

-- Q9. List the employees whose name does not start with ‘S’.
SELECT * FROM Employees WHERE SUBSTRING(ename, 1, 1) != 'S';

-- Q10. List all the employees who are having reporting managers in dept 10.
SELECT * FROM Employees WHERE mgr IN (SELECT empno FROM Employees WHERE deptno = 10);

-- Q11. List the employees who are not working as managers and clerks in dept 10 and 20 with a salary in the range of 1000 to 3000
SELECT * FROM Employees WHERE deptno IN (10, 20, 30) AND sal NOT BETWEEN 1000 AND 2000 AND job != 'SALESMAN';

-- Q12. List the employees whose salary not in the range of 1000 to 2000 in dept 10,20,30 except all salesmen
SELECT ename, sal, job, empno FROM Employees ORDER BY sal DESC;

-- Q13. Arrange ename, sal, job, empno and sort by descending order of salary.
SELECT COUNT(*) AS total_employees FROM Employees;

-- Q14. The below query gives the total number of employee.
SELECT COUNT(*) AS employees_with_commission FROM Employees WHERE comm IS NOT NULL;

-- Q15. The below query gives the number of employees who have commission.
SELECT COUNT(*) AS number_of_clerks_in_dept_20 FROM Employees WHERE job = 'CLERK' AND deptno = 20;

-- Q16. List the number of clerks in department 20
SELECT MAX(sal) AS highest_salary, MIN(sal) AS lowest_salary FROM Employees WHERE job = 'SALESMAN';

-- Q17. List the highest and lowest salary earned by salesmen.
SELECT deptno, SUM(sal) AS total_salary FROM Employees GROUP BY deptno;

-- Q18. Display the total salary of all departments
SELECT job, MAX(sal) AS max_salary FROM Employees GROUP BY job;

-- Q19. Display the maximum SALARY of each job
SELECT job, MAX(sal) AS max_salary FROM Employees GROUP BY job;

-- Q20. Display job-wise highest salary only if the highest salary is more than Rs1500
SELECT job, MAX(sal) AS max_salary FROM Employees GROUP BY job HAVING MAX(sal) > 1500;

-- Q21. Display job-wise highest salary only if the highest salary is more than 1500 excluding department 30. Sort the data based on highest salary in the ascending order
SELECT job, MAX(sal) AS max_salary FROM Employees WHERE deptno != 30 GROUP BY job HAVING MAX(sal) > 1500 ORDER BY max_salary ASC;

-- Q23. Display the department numbers along with the number of employees in it.
SELECT deptno, COUNT(*) AS number_of_employees FROM Employees GROUP BY deptno;

-- Q24. Display the department numbers which are having more than 4 employees in them.
SELECT deptno FROM Employees GROUP BY deptno HAVING COUNT(*) > 4;

-- Q25. Display the maximum salary for each of the job excluding all the employees whose name ends with ‘S’.
SELECT job, MAX(sal) AS max_salary FROM Employees WHERE ename NOT LIKE '%S' GROUP BY job;

-- Q26. Display the department numbers which are having more than 9000 as their departmental total salary.
SELECT deptno FROM Employees GROUP BY deptno HAVING SUM(sal) > 9000;

-- Q29. Let us update salary by increasing it by Rs200 and also give commission of Rs100 where empno = 7369.
UPDATE Employees SET sal = sal + 200, comm = 100 WHERE empno = 7369;
