#pragma once
#include <string>

class Brain {
	private:
    // attributes// type _attribute;
	std::string ideas[100];	

	public:
    // Orthodox Canonical Form
    Brain();
    Brain(const Brain &other);
    Brain &operator=(const Brain &other);
    ~Brain();

	std::string getIdea(int index) const;
	void setIdea(const std::string& idea, int index);
};
