#include <iostream>
#include <cctype>
#include<cstring>
using namespace std;

const int MAX_NAME_LENGTH=100;
const int MAX_DESCRIPTION_LENGTH=300;

struct Event
{
	char name [MAX_NAME_LENGTH];
	char description[MAX_DESCRIPTION_LENGTH];
	char startDate[11];
	char endDate[11];
	float price;
	char location[MAX_DESCRIPTION_LENGTH];
	char review[MAX_DESCRIPTION_LENGTH];
	bool isOutdoor;
};

class Event_List
{
	public:
		Event_List();  //constructor
		~Event_List();   // destructor
		void read();   //read a new event
		void display(); //display all events
		void display_by_field();   //display event while catagorizing
		void other_function();
	private:
		Event *events;           
		int array_size;
		int num_events;
};
