create database Ecommers;
use Ecommers;

CREATE TABLE Users (
   user_id INT PRIMARY KEY AUTO_INCREMENT,
   username VARCHAR(50) NOT NULL UNIQUE,
   password VARCHAR(100) NOT NULL,
   email VARCHAR(100) NOT NULL UNIQUE,
   first_name VARCHAR(50),
   last_name VARCHAR(50),
   address VARCHAR(255),
   phone VARCHAR(15),
   created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

 

 

CREATE TABLE Products (
   product_id INT PRIMARY KEY AUTO_INCREMENT,
   name VARCHAR(100) NOT NULL,
   description TEXT,
   price DECIMAL(10, 2) NOT NULL,
   stock_quantity INT NOT NULL,
   category_id INT,
   created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
   FOREIGN KEY (category_id) REFERENCES Categories(category_id)
);

 

CREATE TABLE Categories (
   category_id INT PRIMARY KEY AUTO_INCREMENT,
   name VARCHAR(50) NOT NULL UNIQUE,
   description TEXT
);

 

CREATE TABLE Orders (
   order_id INT PRIMARY KEY AUTO_INCREMENT,
   user_id INT NOT NULL,  
   order_date TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
   status ENUM('pending', 'shipped', 'delivered', 'canceled') DEFAULT 'pending',
   total_amount DECIMAL(10, 2) NOT NULL,
   shipping_address VARCHAR(255),
   FOREIGN KEY (user_id) REFERENCES Users(user_id)
);

 

CREATE TABLE Order_Items (
   order_item_id INT PRIMARY KEY AUTO_INCREMENT,
   order_id INT NOT NULL,
   product_id INT NOT NULL,
   quantity INT NOT NULL,
   price DECIMAL(10, 2) NOT NULL,
   FOREIGN KEY (order_id) REFERENCES Orders(order_id),
   FOREIGN KEY (product_id) REFERENCES Products(product_id)
);

 

CREATE TABLE Payments (
   payment_id INT PRIMARY KEY AUTO_INCREMENT,
   order_id INT NOT NULL,
   payment_date TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
   amount DECIMAL(10, 2) NOT NULL,
   payment_method ENUM('credit_card', 'debit_card', 'paypal', 'cash_on_delivery') NOT NULL,
   FOREIGN KEY (order_id) REFERENCES Orders(order_id)
);

INSERT INTO Categories (name, description) VALUES

('Electronics', 'Electronic devices and gadgets'),

('Books', 'Various kinds of books'),

('Clothing', 'Men and women clothing');

 

INSERT INTO Products (name, description, price, stock_quantity, category_id) VALUES

('Smartphone', 'Latest model smartphone', 699.99, 50, 1),

('Laptop', 'High performance laptop', 999.99, 30, 1),

('T-shirt', 'Cotton t-shirt', 19.99, 100, 3);

 

INSERT INTO Users (username, password, email, first_name, last_name, address, phone) VALUES

('john_doe', 'password123', 'john@example.com', 'John', 'Doe', '123 Main St, Springfield', '555-1234'),

('jane_smith', 'password456', 'jane@example.com', 'Jane', 'Smith', '456 Elm St, Shelbyville', '555-5678');

INSERT INTO Orders (user_id, status, total_amount, shipping_address) VALUES

(1, 'pending', 719.98, '123 Main St, Springfield'),

(2, 'pending', 19.99, '456 Elm St, Shelbyville');

 


INSERT INTO Order_Items (order_id, product_id, quantity, price) VALUES

(1, 1, 1, 699.99),

(1, 2, 1, 19.99),

(2, 3, 1, 19.99);



INSERT INTO Payments (order_id, amount, payment_method) VALUES

(1, 719.98, 'credit_card'),

(2, 19.99, 'paypal');

drop database Ecommers;