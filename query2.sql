create database craft;
use craft;

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

-- Inserting sample data into the orders table
INSERT INTO orders (customer_id, order_date, order_amount) VALUES
(1, '2024-06-01', 150.50),
(2, '2024-06-02', 200.25),
(1, '2024-06-03', 100.75),
(3, '2024-06-04', 300.00);

-- Query using INNER JOIN and LEFT JOIN
SELECT c.customer_id, c.customer_name, c.city, o.order_id, o.order_date, o.order_amount
FROM customers c
LEFT JOIN orders o ON c.customer_id = o.customer_id
WHERE c.city = 'Your specified region';
