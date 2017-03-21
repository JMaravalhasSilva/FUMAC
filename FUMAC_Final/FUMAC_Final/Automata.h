#pragma once

#include <string>
#include <vector>
#include <map>

class Automata {
	public:
		bool loadFromFile(std::string path);
	private:
		std::vector<std::string> state_names;
		int initial_state;
		std::vector<int> marked_states;
		std::vector<std::string> events;
		std::map<std::pair<int, std::string>, std::vector<int> > transitions;
};