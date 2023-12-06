
select distinct name from people
join stars on stars.person_id = people.id
join movies on movies.id = stars.movie_id
order by people.birth asc;
