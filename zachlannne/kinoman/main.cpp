#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct Movie
{
    int movie_id;
    int start_time;
    int length;

    int get_end_time()
    {
        return start_time + length;
    }
};

int main()
{
    int number_of_movies;
    std::vector<Movie> movies_list;
    std::cout << "Give the number of movies for the day " << std::endl;
    std::cin >> number_of_movies;

    for (int i = 0; i < number_of_movies; i++)
    {
        Movie movie;
        movie.movie_id = i;
        std::cin >> movie.start_time;
        std::cin >> movie.length;
        movies_list.push_back(movie);
    }

    std::sort(movies_list.begin(), movies_list.end(),
              [](Movie a, Movie b)
              {
                  return a.get_end_time() < b.get_end_time();
              });

    int current_end_time = 0;
    std::vector<Movie> to_watch;
    for (auto &movie : movies_list)
    {
        if (movie.start_time > current_end_time)
        {
            current_end_time = movie.get_end_time();
            to_watch.push_back(movie);
        }
    }

    std::cout << std::endl;
    std::cout << "Movies to watch: " << std::endl;

    for (auto &movie : to_watch)
        std::cout << movie.start_time << " " << movie.length << std::endl;

    return 0;
}