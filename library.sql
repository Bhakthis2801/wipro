create database library;
use library;

CREATE TABLE Book (
    book_id INT PRIMARY KEY,
    title VARCHAR(255) NOT NULL,
    author VARCHAR(255) NOT NULL,
    genre VARCHAR(50),
    publication_year INT,
    ISBN VARCHAR(13) UNIQUE
);

 

CREATE TABLE Member (
    member_id INT PRIMARY KEY,
    first_name VARCHAR(50) NOT NULL,
    last_name VARCHAR(50) NOT NULL,
    address TEXT,
    phone_number VARCHAR(10)
);

 

CREATE TABLE Borrowing (
    borrowing_id INT PRIMARY KEY,
    date_borrowed DATE NOT NULL,
    book_id INT,
    member_id INT,
    date_due DATE NOT NULL,
    date_returned DATE,
    FOREIGN KEY (book_id) REFERENCES Book(book_id),
    FOREIGN KEY (member_id) REFERENCES Member(member_id),
    CHECK (date_returned IS NULL OR date_returned >= date_borrowed)
);

 

CREATE TABLE Reservation (
    reservation_id INT PRIMARY KEY,
    book_id INT,
    member_id INT,
    date_reserved DATE NOT NULL,
    FOREIGN KEY (book_id) REFERENCES Book(book_id),
    FOREIGN KEY (member_id) REFERENCES Member(member_id)
);

INSERT INTO Book (book_id, title, author, genre, publication_year, ISBN) VALUES
(101, 'abc', 'anurag thakur', 'xyz', '2022',0892392301230),
(102, 'abc', 'anurag thakur', 'xyz', '2022',0892392301231);

 

INSERT INTO Member (member_id,first_name,last_name,address,phone_number) VALUES
(1,'rahul','singh','mumbai',1234567890),
(2,'rahul','singh','mumbai',1234567891);

 

INSERT INTO Borrowing  (borrowing_id,date_borrowed,book_id,member_id,date_due,date_returned) VALUES
(1001,'2024-03-23',101,1,'2024-03-25','2024-03-25'),
(1002,'2024-03-23',102,2,'2024-03-25','2024-03-25');

 

INSERT INTO Reservation  (reservation_id,book_id,member_id,date_reserved) VALUES
(11,101,1,'2024-03-28'),
(12,102,2,'2024-03-28');


