#ifndef UTFLIX_H
#define UTFLIX_H



#include<vector>
#include<iostream>
#include<string>
#include"command_handler.h"
#include<map>

#define PUBLISHER 1;
#define NORMAL_CUSTOMER 2;
#define NULL_USER -1

class Customer;
class Movie;
class Publisher;

typedef std::map<int, Publisher*> PublishersMap;
typedef std::map<int,Customer*> CustomersMap;
typedef std::vector<Movie*> MovieVec;
typedef std::vector<std::string> InputVec;
typedef std::pair<int, Customer*> UserPair;
typedef std::pair<int, Publisher*> PublisherPair;

class UTflix {
public:
	UTflix();
	void add_publishers(int id);
	void signup(InputVec input);
	Publisher* find_publisher(int id);
	bool check_user_type();
	void upload_films(InputVec input);
	void login(InputVec input);
	void edit_movie(InputVec input);
	void delete_movie(InputVec input);
	void get_followers_list();
	void increase_user_money(InputVec input);
	void view_movie_details(std::string input);
	void follow_publisher(InputVec input);
	void set_active_user(Customer* user);
	bool check_if_user_existed(Customer* user);
	bool check_if_movie_existed();
	void comment_on_films(InputVec input);
	void notify_publisher_has_uploaded_a_film();
	void view_unread_notification();
	void view_all_notification(InputVec input);
	std::string find_needed(InputVec input, std::string need);
	void notify_user_has_submited_comment(std::string film, int film_id);
	void rate_movie(InputVec input);
	void notify_user_has_rated_movie(std::string film, int film_id);
	void reply_comment(InputVec input);
	void notify_publisher_has_replied_comment();
	void delete_comment(InputVec input);
	void buy_movie(InputVec input);
	void notify_user_has_bought_movie(std::string film, int film_id);
private:
	CustomersMap UTflix_users;
	PublishersMap publishers;
	Customer* active_user;
	MovieVec movies;
	float net_money;
};
#endif 
