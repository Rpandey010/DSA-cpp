-- create copy with same structure
CREATE TABLE department_copy AS (SELECT * FROM department WHERE 1 = 2);

-- create copy with same structure and data
CREATE TABLE department_copy AS (SELECT * FROM department);

-- Nth highest salary
-- using subquery (3nd highest salary)
SELECT MAX(salary) FROM employee
WHERE salary < (SELECT MAX(salary) FROM employee)
WHERE salary < (SELECT MAX(salary) FROM employee);

-- using LIMIT (3nd highest salary)
SELECT salary FROM employee
ORDER BY salary DESC
LIMIT 2, 1;

-- using LIMIT OFFSET (3nd highest salary)
SELECT salary FROM employee
ORDER BY salary DESC
LIMIT 1 OFFSET 2;


-- What Is The SQL Query Used To Find All Employees
-- Who Also Hold The Managerial Position?
SELECT * FROM employee
WHERE (employee_id IN (SELECT manager_id FROM employee));


-- What Is The SQL Query Used To Find The Names Of 
-- The Employees That Begin With ‘A’?
SELECT * FROM employee WHERE name LIKE 'A%';


-- What Is The SQL Query Used To Display The Current Date?
SELECT CURRENT_DATE;       --yyyy-mm-dd
SELECT CURRENT_DATE();
SELECT CURDATE();

SELECT DATE(NOW());        --yyyy-mm--dd hh-mm-ss
SELECT DATE(CURRENT_TIMESTAMP());


--return alternate entry
SELECT * FROM employee WHERE id % 2 = 0;    --even alternate
SELECT * FROM employee WHERE id % 2 = 1;    --odd


-- What Is The SQL Query Used To Fetch The
-- Common Records From Two Tables?    
SELECT * FROM emp1
INNER JOIN emp2
WHERE emp1.id = emp2.id;


-- What Is The SQL Query Used To Find Duplicate Rows In Table?
SELECT id 
FROM employee
GROUP BY id 
HAVING COUNT(id) > 1;


-- What Is The SQL Query Used To Remove The Duplicate Rows In Table?
DELETE FROM employee WHERE id IN (
    SELECT id, count(id)
    FROM employee
    GROUP BY id 
    HAVING COUNT(id) > 1
);


-- What Is The SQL Query Used To Find The nth Record From A Table?
--use limit or limit offset
SELECT * FROM employee LIMIT N-1, 1;
SELECT * FROM employee LIMIT 1 OFFSET N-1;


-- What Is The SQL Query Used To Find The First 5 Records From A Table?
SELECT * FROM employee ORDER BY id LIMIT 5;


-- What Is The SQL Query Used To Find The Last 5 Records From A Table?
SELECT * 
FROM (SELECT * FROM employee ORDER BY id DESC LIMIT 5) AS last_five 
ORDER BY id ASC;


-- What Is The SQL Query Used To Find The First Or Last Record From A Table?
SELECT * FROM employee LIMIT 1;
UNION ALL
SELCT * FROM employee ORDER BY id DESC LIMIT 1;


-- What Is The SQL Query Used To Find The Distinct
-- Records Without Using Distinct Keyword?

--using DISTINCT
SELECT DISTINCT salary FROM employee;

--w/o using DISTINCT - GROUP BY
SELECT salary FROM employee
GROUP BY salary;

--using set union
SELECT salary FROM employee
UNION
SELECT salary FROM employee;


-- What Is The SQL Query Used To Find The
-- Maximum Salary Of Each Department?

--using GROUP BY
SELECT dept_id, MAX(salary) FROM employee
GROUP BY dept_id;

--using LEFT JOIN
SELECT dept_id, MAX(salary) FROM department D 
LEFT JOIN employee E 
ON(D.id = E.dept_id)
GROUP BY dept_id;


-- What Is The SQL Query Used To Find The
-- Department-Wise Count Of Employees Sorted By
-- Department’s Count In Ascending Order?
SELECT dept_id, COUNT(dept_id) FROM employee
GROUP BY dept_id
ORDER BY COUNT(dept_id);


-- How Will You Change The Datatype Of A Column?
-- MODIFY
ALTER TABLE [table_name] MODIFY
 [column_name] [new_data_type];


