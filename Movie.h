#ifndef MOVIE_H
#define MOVIE_H

#include<map>
#include<vector>
#include<string>


class Comment;

typedef std::vector<std::string> InputVec;
typedef std::map<std::string, std::string> InformationMAP;
typedef std::vector<Comment*> CommentsVector;
typedef std::pair<std::string, std::string> MapPair;

class Movie {
public:
	Movie(InputVec input_vector , int id);
	void fill_movie_information(InputVec input_vector);
	void set_map_keys();
	void calculate_average_rate();
	int get_film_id();
	void edit_movie_information(InputVec input_vector);
	void delete_movie();
private:
	InformationMAP movie_information;
	int film_id;
	float price;
	bool deleted_by_publisher;
	std::vector<int> scores;
	float rate;
	CommentsVector commnets;

};
#endif 

