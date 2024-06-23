create database cust;
use cust;

CREATE TABLE customers (
    customer_id INT AUTO_INCREMENT PRIMARY KEY,
    customer_name VARCHAR(100) NOT NULL,
    city VARCHAR(100)
);

CREATE TABLE orders (
    order_id INT AUTO_INCREMENT PRIMARY KEY,
    customer_id INT,
    order_date DATE,
    order_amount DECIMAL(10, 2),
    FOREIGN KEY (customer_id) REFERENCES customers(customer_id)
);

-- Inserting sample data into the customers table
INSERT INTO customers (customer_name, city) VALUES
('John Doe', 'New York'),
('Jane Smith', 'Los Angeles'),
('Michael Johnson', 'Chicago');

INSERT INTO orders (customer_id, order_date, order_amount) VALUES
(1, '2024-06-01', 150.50),
(2, '2024-06-02', 200.25),
(1, '2024-06-03', 100.75),
(3, '2024-06-04', 300.00);

-- Subquery to find customers with orders above average
SELECT customer_id, customer_name
FROM customers
WHERE customer_id IN (
    SELECT o.customer_id
    FROM orders o
    GROUP BY o.customer_id
    HAVING AVG(o.order_amount) > (
        SELECT AVG(order_amount)
        FROM orders
    )
);

-- Example of a UNION query
SELECT customer_id, customer_name, city
FROM customers
WHERE city = 'New York'

