#ifndef COMMENT_H
#define COMMENT_H

#include<string>
#include<iostream>
#include<map>
#include<vector>
#include"Message.h"
typedef std::map<int, std::vector<std::string>> CommentsMap;
typedef std::pair<int, std::vector<std::string>> ReplyPair;

class Comment :public Message{
public:
	Comment(int id, std::string _content);
	int get_id();
	void delete_comment();
	void reply(std::string content);
	void print_replies();

private:
	int user;
	std::vector<std::string> replies;
	int comment_id;
	bool comment_deleted;
	bool get_replied_by_publisher;
	
};
#endif 

