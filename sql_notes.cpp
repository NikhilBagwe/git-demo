
- Create a database : CREATE DATABASE test;

- Delete a database completely : DROP DATABASE test;

- To tell MySQL on which database the queries are to be perform : USE record_company;

- Create a table : 
CREATE TABLE test (
      test_column INT 
);

- Suppose you forget to add a column to your table, in order to add it :
ALTER TABLE test
ADD another_column VARCHAR(255);
- VARCHAR = 'variable length character array' meaning "String" in sql

- Delete a table: DROP TABLE test;

== Code until now: ======================

CREATE DATABASE record_company;
USE record_company;
CREATE TABLE test (
	test_column INT 
);
ALTER TABLE test
ADD another_column VARCHAR(255); 
DROP TABLE test;

=================================================================

-- Create a table containing primary key :

CREATE TABLE bands(
    id INT NOT NULL AUTO_INCREMENT,
    name VARCHAR(255) NOT NULL,
    PRIMARY KEY (id)
);

- NOT NULL -> it specifies that the value can never be null/empty in this column or else if it is than it throws error.

- AUTO_INCREMENT -> automatically increments the value of the id.

-- Adding Foreign key :

CREATE TABLE albums(
    id INT NOT NULL AUTO_INCREMENT,
    name VARCHAR(255) NOT NULL,
    release_year INT,
    band_id INT NOT NULL,
    PRIMARY KEY (id),
    FOREIGN KEY (band_id) REFERENCES bands(id)
);

-- Inserting rows into your table:

Syntax : INSERT INTO table_name (column_name)
         VALUES ('Iron maiden'); 

INSERT INTO bands (name)
VALUES ('Iron maiden');     			// Inserting just one value

INSERT INTO bands (name)
VALUES ('Deuce'), ('Avengers'), ('Rain');   	 // Inserting multiple values

INSERT INTO albums (name, release_year, band_id)  // Inserting into multiple columns
VALUES ('Fallen beasts', 1985, 1),
       ('Power Slave', 1990, 1),
       ('Nightmare', 2018, 2),
       ('Nightmare', 2010, 3),
       ('Test album', NULL, 3);

-- Select data :

Syntax : SELECT column_name FROM table_name;

 SELECT * FROM bands;
 SELECT name FROM bands;

- Getting a certain number of rows: SELECT * FROM bands LIMIT 2;

- Changing the title of the column : 
 SELECT id AS 'ID', name AS 'BAND NAME' 
 FROM bands;

-- Sort the column of table as ASCENDING or DESCENDING :

SELECT * FROM bands ORDER BY name;  // ASC

SELECT * FROM bands ORDER BY name DESC;  // DESC

-- Get only unique rows from the table:

SELECT DISTINCT name FROM albums;

-- Updating a value from table:

Syntax: UPDATE table_name
	SET column_name = new_value
	WHERE id = 1;

UPDATE albums
SET release_year = 1982
WHERE id = 1;

-- Filter using WHERE keyword:

SELECT * FROM albums
WHERE release_year < 2000;  

-- String filter : compares the given characters with values present in the table 

SELECT * FROM albums
WHERE name LIKE '%er%';  // Anything before 'er' and after should be present eg. Power Slave

-- Logical operators:

SELECT * FROM albums
WHERE name LIKE '%er%' OR band_id=2;

-- BETWEEN keyword:

SELECT * FROM albums
WHERE release_year BETWEEN 2010 AND 2018; 

-- DELETE row :

DELETE FROM albums
WHERE id=5;

-- JOIN / INNER JOIN -------------------------------------------------------------

SELECT * FROM bands
JOIN albums ON bands.id = albums.band_id;        // on comparing both the table is generated/displayed

-- LEFT JOIN - Displays everything from left table and only matching rows from right table

SELECT * FROM bands
LEFT JOIN albums ON bands.id = albums.band_id;

-- RIGHT JOIN

SELECT * FROM albums
RIGHT JOIN bands ON bands.id = albums.band_id;

CREATE DATABASE record_company;
USE record_company;
CREATE TABLE bands(
	id INT NOT NULL AUTO_INCREMENT,
    name VARCHAR(255) NOT NULL,
    PRIMARY KEY (id)
);
CREATE TABLE albums(
	id INT NOT NULL AUTO_INCREMENT,
    name VARCHAR(255) NOT NULL,
    release_year INT,
    band_id INT NOT NULL,
    PRIMARY KEY (id),
    FOREIGN KEY (band_id) REFERENCES bands(id)
);

INSERT INTO bands (name)
VALUES ('Iron maiden');

INSERT INTO bands (name)
VALUES ('Deuce'), ('Avengers'), ('Rain');

SELECT * FROM bands;

SELECT name FROM bands;

SELECT id AS 'ID', name AS 'BAND NAME' 
FROM bands;

SELECT * FROM bands ORDER BY name DESC;

INSERT INTO albums (name, release_year, band_id)
VALUES ('Fallen beasts', 1985, 1),
	   ('Power Slave', 1990, 1),
       ('Nightmare', 2018, 2),
       ('Nightmare', 2010, 3),
       ('Test album', NULL, 3);

SELECT * FROM albums;

UPDATE albums
SET release_year = 1982
WHERE id = 1;

SELECT * FROM albums
WHERE name LIKE '%er%' OR band_id=2;

SELECT * FROM albums
WHERE release_year BETWEEN 2010 AND 2018;

DELETE FROM albums
WHERE id=5;

SELECT * FROM bands
JOIN albums ON bands.id = albums.band_id;

SELECT * FROM bands
LEFT JOIN albums ON bands.id = albums.band_id;

SELECT * FROM albums
RIGHT JOIN bands ON bands.id = albums.band_id;




==== OOPs ===================================================================================================================================================

class Student{
    int id;
	String name;
	
	// Default constructor
	Student(){
	    System.out.println("Default constructor called");
	}
	
	// Paramatarized constructor - it is always good to have Default constructor along with Paramatarized constructor
	// as if we delete the default constructor now, java won't provide us with default constructor automatically
	Student(int x){
	    System.out.println("Paramatarized constructor called");
	    id = x;
	}
	
	// Method declaration
	public int max(int x, int y){
	    if(x>y){
	        return x;
	    }
	    else{
	        return y;
	    }
	}
}

// Main class just holds the main() function 
public class Main
{
    
    // Starting point of program
    public static void main(String[] args) {
	    Student obj1 = new Student(6);
	    
	    //obj1.id=4;
	    obj1.name="Nikhil";
	    
	    int x=4, y=10;
	    int num = obj1.max(x, y);
	    
	    System.out.println(obj1.id);
	    System.out.println(obj1.name);
	    System.out.println(num);
	}
}

==== METHOD OVERLOADING ============================================================================================================================================

class Overload{
    // Constructor overloading ------------------------------------------------
    int num;
    Overload(){
        System.out.println("default Constructor called");
    }
    Overload(int x){
        num = x;
        System.out.println("default Constructor called "+num);
    }
    
    // Method overloading -----------------------------------------------------
    int add(int x, int y){
        return (x+y);
    }
    
    int add(int x, int y, int z){
        return (x+y+z);
    }
    
    double add(double x, double y){
        return (x+y);
    }
}

public class Main
{
    public static void main(String[] args) {
	    Overload obj = new Overload(34);
	    
	    int total1 = obj.add(5,4);
	    int total2 = obj.add(5,4,10);
	    double total3 = obj.add(5.2,3.6);
	    
	    System.out.println(total1);
	    System.out.println(total2);
	    System.out.println(total3);
	}
}

==== TAKING INPUT IN JAVA USING [ SCANNER CLASS ] ================================================================================================================

// -------------------------------------------INTEGER-----------------------------
import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
	    Scanner src = new Scanner(System.in);
	    int x;
	    System.out.println("Enter a number: ");
	    x = src.nextInt();
	    System.out.println("number: "+x);
	}
}

// -------------------------------------------STRING------------------------------

public class Main
{
	public static void main(String[] args) {
	    Scanner src = new Scanner(System.in);
	    String str;
	    System.out.println("Enter a String: ");
	    str = src.nextLine();
	    System.out.println("String: "+str);
	}
}
