SELECT bakery_security_logs.activity, bakery_security_logs.license_plate, people.name
FROM people
JOIN bakery_security_logs ON bakery_security_logs.license_plate = people.license_plate
WHERE bakery_security_logs.year = 2021
  AND bakery_security_logs.month = 7
  AND bakery_security_logs.day = 28
  AND bakery_security_logs.hour = 10
  AND bakery_security_logs.minute >= 15
  AND bakery_security_logs.minute <= 25;

select people.name, atm_transaction.transaction_type from people
join bank_accoounts on bank_accounts.person_id = people.id
join atm_transactions on atm_transactions.account_number =
bank_accounts.account_number
where atm_transactions.year = 2021
and atm_transactions.month = 7
and atm_transactions.day = 28
and atm_location = "Leggett Street"
and atm_transactions.transcript_type = "withdraw";
