-- Keep a log of any SQL queries you execute as you solve the mystery.

select description from crime_scene_reports
where year = 2021 and month = 7 and day = 28;

select transcript from interviews
where year = 2021 and month = 7 and day = 28 and transcript like "%bakery%";

select bakery_security_logs.activity, bakery_security_logs.
license_plate, people.name from people
join bakery_security_logs on bakery_security_logs.license_plate =
people.license_plate
where bakery_security_logs.year = 2021
and bakery_security_logs.month = 7
and bakery_security_logs.day = 28
and bakery_security_logs.hour = 10
and bakery_security_logs.minute >= 15
and bakery_security_logs <= 25;
