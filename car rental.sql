create database carrental;
use carrental;

CREATE TABLE Customers (
customer_id INT PRIMARY KEY AUTO_INCREMENT,
cust_name VARCHAR(100) NOT NULL,
address VARCHAR(255),
phone VARCHAR(15),
email VARCHAR(100) UNIQUE
);

CREATE TABLE Cars (
car_id INT PRIMARY KEY AUTO_INCREMENT,
make VARCHAR(50) NOT NULL,
model VARCHAR(50) NOT NULL,
year INT NOT NULL,
status ENUM('available', 'rented', 'maintenance') NOT NULL,
location_id INT,
FOREIGN KEY (location_id) REFERENCES Locations(location_id)
);

CREATE TABLE Rentals (
rental_id INT PRIMARY KEY AUTO_INCREMENT,
car_id INT NOT NULL,
customer_id INT NOT NULL,
rental_date DATE NOT NULL,
return_date DATE,
status ENUM('ongoing', 'completed', 'canceled') NOT NULL,
FOREIGN KEY (car_id) REFERENCES Cars(car_id),
FOREIGN KEY (customer_id) REFERENCES Customers(customer_id)
);

CREATE TABLE Locations (
location_id INT PRIMARY KEY AUTO_INCREMENT,
address VARCHAR(255) NOT NULL,
city VARCHAR(50) NOT NULL,
state VARCHAR(50) NOT NULL,
zip_code VARCHAR(10) NOT NULL
);

CREATE TABLE Payments (
payment_id INT PRIMARY KEY AUTO_INCREMENT,
rental_id INT NOT NULL,
amount DECIMAL(10, 2) NOT NULL,
payment_date DATE NOT NULL,
payment_method ENUM('cash', 'credit_card', 'debit_card', 'paypal') NOT NULL,
FOREIGN KEY (rental_id) REFERENCES Rentals(rental_id)
);

INSERT INTO Locations (address, city, state, zip_code) VALUES
('123 main','banglore','karnataka',577412),
('333 main','kochi','kerala',577301);

INSERT INTO Customers (cust_name, address, phone, email) VALUES
('Bhakthi','12 main',9786543270,'bha@gmail.com'),
('Ashika','11 main',9786546270,'ash@gmail.com');

INSERT INTO Cars (make, model, year, status, location_id) VALUES
('Toyota', 'Camry', 2020, 'available', 1),
('Honda', 'Civic' ,2019, 'maintenance', 2);

INSERT INTO Rentals (car_id, customer_id, rental_date, status) VALUES
(1, 1, '2024-06-01', 'ongoing');

INSERT INTO Payments (rental_id, amount, payment_date, payment_method) VALUES
(1, 100.00, '2024-06-01', 'credit_card');
select * from Customers;
select * from Cars WHERE status='avilable';
SELECT * FROM Rentals WHERE customer_id = 1;


