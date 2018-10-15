/*
 * URL.h
 *
 *  Created on: 12/07/2017
 *  Copyright 2017 Stefano Ceccherini (stefano.ceccherini@gmail.com)
 *  The API is inspired from Haiku's BURL class
 */

#ifndef URL_H
#define URL_H

#include <string>

class URL {
public:
	URL();
	URL(const std::string& url);
	void SetTo(const std::string& url);

	std::string URLString() const;
	std::string Protocol() const;
	std::string Host() const;
	int Port() const;
	std::string Path() const;
	std::string Username() const;
	std::string Password() const;

	bool IsRelative() const;

private:
	void _DecodeURLString(const std::string& string);

	std::string fURLString;
	std::string fProtocol;
	std::string fHost;
	int fPort;
	std::string fPath;
	std::string fUsername;
	std::string fPassword;
};

#endif // URL_H
