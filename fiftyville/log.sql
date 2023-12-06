-- Query 1
SELECT
  bakery_security_logs.activity,
  bakery_security_logs.license_plate,
  people.name
FROM
  people
  JOIN bakery_security_logs ON bakery_security_logs.license_plate = people.license_plate
WHERE
  bakery_security_logs.year = 2021
  AND bakery_security_logs.month = 7
  AND bakery_security_logs.day = 28
  AND bakery_security_logs.hour = 10
  AND bakery_security_logs.minute >= 15
  AND bakery_security_logs.minute <= 25;

-- Query 2
SELECT
  people.name,
  atm_transactions.transaction_type
FROM
  people
  JOIN bank_accounts ON bank_accounts.person_id = people.id
  JOIN atm_transactions ON atm_transactions.account_number = bank_accounts.account_number
WHERE
  atm_transactions.year = 2021
  AND atm_transactions.month = 7
  AND atm_transactions.day = 28
  AND atm_transactions.atm_location = 'Leggett Street'
  AND atm_transactions.transaction_type = 'withdraw';

-- Query 3
SELECT
  caller,
  caller_name,
  receiver
FROM
  phone_calls
WHERE
  year = 2021
  AND month = 7
  AND day = 28
  AND duration < 60;

-- Update Query 1
UPDATE flights
SET origin_airport_id = (SELECT city FROM airports WHERE airports.id =
flights.origin_airport_id)
WHERE EXISTS (SELECT 1 FROM airports WHERE airports.id = flights.origin_airport_id);

-- Update Query 2
UPDATE flights
SET destination_airport_id = (SELECT city FROM airports WHERE airports.id =
flights.destination_airport_id)
WHERE EXISTS (SELECT 1 FROM airports WHERE airports.id =
flights.destination_airport_id);

-- Query 4
SELECT id, hour, minute, origin_airport_id, destination_airport_id
FROM flights
WHERE year = 2021
AND month = 7
AND day = 29
ORDER BY hour ASC
LIMIT 1;
