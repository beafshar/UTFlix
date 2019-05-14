#ifndef PUBLISHER_H
#define PUBLISHER_H

#include"Customer.h"

class Movie;

class Publisher :public Customer {
public:
	Publisher(int id);
	bool publish_films(InputVec input_vector);
	bool edit_film_information(InputVec input_vector);
	bool delete_film(int id);
	void get_followers_list();
	static bool compare_by_id(User* a, User* b);
	void add_followers(User* user);
	void view_published_movies(InputVec input_vector);
	bool reply_comments(int film_id, int comment_id, std::string content);
	bool delete_comment(int film_id, int comment_id);

private:
	UsersVector followers;
	MoviesVector published_movies;
	


};
#endif 

