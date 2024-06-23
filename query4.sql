create database transaction;
use transaction

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
    
CREATE TABLE products (
    product_id INT AUTO_INCREMENT PRIMARY KEY,
    product_name VARCHAR(100) NOT NULL,
    price DECIMAL(10, 2),
    quantity_in_stock INT
);
-- Inserting sample data into the products table
INSERT INTO products (product_name, price, quantity_in_stock) VALUES
('Product A', 50.00, 100),
('Product B', 75.00, 50),
('Product C', 120.00, 200);

-- Inserting sample data into the orders table
INSERT INTO orders (customer_id, order_date, order_amount) VALUES
(1, '2024-06-15', 250.00),
(2, '2024-06-15', 150.00),
(1, '2024-06-16', 180.00);

    
-- Insert a new record into the 'orders' table
BEGIN TRANSACTION;
-- Insert a new record into the 'orders' table
INSERT INTO orders (customer_id, order_date, order_amount)
VALUES (1, '2024-06-15', 250.00);
-- Commit the transaction
COMMIT;
-- Update the 'products' table (example update)
UPDATE products
SET quantity_in_stock = quantity_in_stock - 1
WHERE product_id = 123;
-- Rollback the transaction (in case of an error or other reason)
ROLLBACK;
