#ifndef MOVIE_H
#define MOVIE_H

#include<map>
#include<iostream>
#include<vector>
#include<string>
#include<regex>
#include<sstream>
#include <iomanip>
#include<algorithm>

#define START 3
#define STEP 2

class Comment;
class Sale;

typedef std::vector<std::string> InputVec;
typedef std::map<std::string, std::string> InformationMAP;
typedef std::vector<Comment*> CommentsVector;
typedef std::vector<Sale*> SalesVector;
typedef std::pair<std::string, std::string> MapPair;

class Movie {
public:
	Movie(InputVec input_vector , int id, int _publisher_id);
	void fill_movie_information(InputVec input_vector);
	void set_map_keys();
	void calculate_average_rate();
	int get_film_id();
	void edit_movie_information(InputVec input_vector);
	void delete_movie();
	void score_movie(float score);
	void submit_comment(std::string content ,int user_id);
	bool delete_comment(int id);
	bool reply_comment(int id, std::string content);
	std::string get_movie_name();
	void view_details();
	void print_comments_and_replies();
	bool check_publish_command_validity(InputVec input_vec);
	bool check_price_validity(std::string price);
	int get_publisher_id();
	bool if_deleted();
	float get_rate();
	void print_recommendation();
	int buy_movie(int user_id);
	bool if_user_has_bought(int user_id);
	int get_price();
	float pay_to_publisher();
	std::string get_director();
	int get_year();
	bool if_movie_was_sold();
	bool check_if_comment_exists(int id);
	void view_published_details();
	static bool compare_by_id(Movie* a, Movie* b);
	static bool compare_by_rate(Movie* a, Movie* b);
	static bool compare_by_weight(Movie* a, Movie* b);
	int get_comment_user(int comment_id);
	void add_weight();
	int get_weight();

private:
	InformationMAP movie_information;
	int film_id;
	int publisher_id;
	int price;
	bool deleted_by_publisher;
	bool sold_to_user;
	std::vector<int> scores;
	float rate;
	CommentsVector comments;
	SalesVector sold_movies;
	int weight;

};
#endif 

