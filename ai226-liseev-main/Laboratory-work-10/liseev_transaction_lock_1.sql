START TRANSACTION;
SELECT * FROM softdrink WHERE sd_id = 1;
LOCK TABLE softdrink IN EXCLUSIVE MODE;
UPDATE softdrink SET name = 'Pepsi' WHERE sd_id = 1;
SELECT * FROM softdrink WHERE sd_id = 1;
COMMIT;
START TRANSACTION;
SELECT * FROM softdrink WHERE sd_id = 1;
LOCK TABLE softdrink IN EXCLUSIVE MODE;
UPDATE softdrink SET name = 'Sprite' WHERE sd_id = 1;
SELECT * FROM softdrink WHERE sd_id = 1;
COMMIT;
