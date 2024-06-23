create database customer;
use customer;

CREATE TABLE customers (
    customer_id INT AUTO_INCREMENT PRIMARY KEY,
    customer_name VARCHAR(100) NOT NULL,
    email VARCHAR(100),
    city VARCHAR(100),
    phone_number VARCHAR(20)
);

-- Inserting sample data into the customers table
INSERT INTO customers (customer_name, email, city, phone_number) VALUES
('John Doe', 'john.doe@example.com', 'New York', '555-1234'),
('Jane Smith', 'jane.smith@example.com', 'Los Angeles', '555-5678'),
('Michael Johnson', 'michael.johnson@example.com', 'Chicago', '555-9876');
show tables;
select * from customers;

SELECT customer_name, email
FROM customers
WHERE city = 'New York';