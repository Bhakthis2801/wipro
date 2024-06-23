create database example;
use example;


create table company(
Cname varchar(20) primary key,
Reg_Date Date Not Null,
Stock_Price float,
Country varchar(20)
);

INSERT INTO company(Cname, Reg_Date, Stock_Price, Country) VALUES
('GizmoWorks','2019/10/21',25,'USA'),
('Canon','2019/10/3',65,'Japan'),
('Hitachi','2019/10/10',15,'India');
select * from company;
SELECT Reg_Date FROM company;
SELECT * FROM company WHERE Country = 'Japan';
SELECT Cname FROM company WHERE Stock_Price = 65;
SELECT * FROM company WHERE Country = 'Japan' OR Country = 'India';
SELECT MAX(Stock_Price) AS Max_Stock_Price FROM company;
SELECT AVG(Stock_Price) AS Avg_Stock_Price FROM company;
SELECT DISTINCT Country FROM company;
SELECT COUNT(DISTINCT Country) AS Total_No_of_Countries FROM company;
SELECT Cname, Country FROM company;









