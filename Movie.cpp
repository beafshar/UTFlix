#include"Movie.h"
#include"BadRequest.h"

Movie::Movie(InputVec input_vector , int id) {
	set_map_keys();
	fill_movie_information(input_vector);
	deleted_by_publisher = false;
	price = std::stof(movie_information["price"]);
	film_id = id;

}

void Movie::set_map_keys() {
	movie_information.insert(MapPair("name", ""));
	movie_information.insert(MapPair("year", ""));
	movie_information.insert(MapPair("length", ""));
	movie_information.insert(MapPair("price", ""));
	movie_information.insert(MapPair("summary", ""));
	movie_information.insert(MapPair("director", ""));
}

void Movie::fill_movie_information(InputVec input_vector) {
	//check input validity
	InformationMAP::iterator it;
	for (int i = 3; i < input_vector.size() - 1; i += 2) {
		it = movie_information.find(input_vector[i]);
		if (it != movie_information.end()) {
			movie_information[it->first] = input_vector[i + 1];
		}
		else
			throw BadRequest();

	}
}

void Movie::calculate_average_rate() {
	float sum = 0;
	for (int i = 0; i < scores.size(); i++)
		sum += scores[i];
	rate = sum / scores.size();
}

int Movie::get_film_id() {
	return film_id;
}

void Movie::edit_movie_information(InputVec input_vector) {
	InformationMAP::iterator it;
	for (int i = 3; i < input_vector.size() - 1; i += 2) {
		it = movie_information.find(input_vector[i]);
		if (it != movie_information.end()) {
			movie_information[it->first] = input_vector[i + 1];
		}
	}
}

void Movie::delete_movie() {
	deleted_by_publisher = true;
}