
START TRANSACTION;
SELECT * FROM softdrink;
UPDATE softdrink SET name = 'Pepsi' WHERE sd_id = 2;
UPDATE softdrink SET name = 'Pepsi' WHERE sd_id =1;
SELECT * FROM softdrink;
COMMIT;

START TRANSACTION;
SELECT * FROM softdrink;
UPDATE softdrink SET name = 'Pepsi' WHERE sd_id = 2;
UPDATE softdrink SET name = 'Pepsi' WHERE sd_id =1;
SELECT * FROM softdrink;
COMMIT;
