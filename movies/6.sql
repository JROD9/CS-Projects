
select avg(rating) from movies
join ratings on movies.id = ratings.movie.id
where year = 2012;
