
select distinct name
from people
join directors on directors.person_id = people.id
join movies on movies.id = directors.movie_id
join ratings on ratings.movie_id = movie.id
where rating >= 9.0;
