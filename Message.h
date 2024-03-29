#ifndef MESSAGE_H
#define MESSAGE_H

#include<string>
#define TEMP 1

class Message {
public:
	Message(std::string content);
	void read_message();
	std::string get_content();
	bool if_read();
	void create_reply_notif(std::string publisher_name, int id);
	void create_publish_film_notif(std::string publisher_name, int id);
	void create_follow_notif(std::string user_name, int id);
	void create_buy_film_notif(std::string user_name, int user_id,
		std::string film, int film_id);
	void create_rate_film_notif(std::string user_name, int user_id,
		std::string film, int film_id);
	void create_comment_film_notif(std::string user_name, int user_id,
		std::string film, int film_id);
	virtual int get_user() { return TEMP; }
protected:
	std::string content;
	bool seen;
};
#endif 

