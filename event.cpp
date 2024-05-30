#include "event.h"

Event_List::Event_List()
{
	array_size=10;
	events=new Event[array_size];
	num_events=0;

}
Event_List::~Event_List()
{
	delete[] events;
	events= nullptr;
	array_size=0;
	num_events=0;

}
void Event_List::read()
{
	if (num_events>=array_size)
	{
		int new_size= array_size*2;
		Event *new_events= new Event[new_size];
		for (int i=0; i<num_events; ++i)
		{
			new_events[i]=events[i];
		}
	}
	cout<<"Enter the event name: "<<endl;
	cin.getline(events[num_events].name, MAX_NAME_LENGTH);
	cin.ignore(100,'\n');

	cout<<"Enter event description: "<<endl;
	cin.getline(events[num_events].description, MAX_DESCRIPTION_LENGTH);
	cin.ignore(100,'\n');

	cout<<"Enter start date (year-month-date): "<<endl;
	cin.getline(events[num_events].startDate, 11);
	cin.ignore(100,'\n');

	cout<<"Enter end date (year-month-date): "<<endl;
	cin.getline(events[num_events].endDate,11);
	cin.ignore(100,'\n');

	cout<<"Enter the ticket price: "<<endl;
	cin>>events[num_events].price;
	cin.ignore(100,'\n');

	cout<<"Please tell me some review about the event: "<<endl;
	cin.getline(events[num_events].review, MAX_DESCRIPTION_LENGTH);
	cin.ignore(100,'\n');

	cout<<"Enter the events location: "<<endl;
	cin.getline(events[num_events].location, MAX_DESCRIPTION_LENGTH);
	cin.ignore(100,'\n');

	cout<<"Is it an outdoor event?? Plese enter 1 for YES, and 0 for NO"<<endl;
	cin>>events[num_events].isOutdoor;
	cin.ignore(100,'\n');

	++num_events;
	
	
}

void Event_List::display()
{
	for(int i=0; i<num_events; ++i)
	{
		cout<<"Event: "<<(i+1)<<endl;
		cout<<"Name:"<<events[i].name<<endl;
		cout<<"Description: "<<events[i].description<<endl;
		cout<<"Start Date: "<<events[i].startDate<<endl;
		cout<<"End Date: "<<events[i].endDate<<endl;
		cout<<"Price: "<<events[i].price<<endl;
		cout<<"Review: "<<events[i].review<<endl;
		cout<<"Location: "<<events[i].location<<endl;
		cout<<"Outdoor or indoor? "<<events[i].isOutdoor<<endl;
	
	}
}
void Event_List::display_by_field()
{
	//stub function
}
void Event_List::other_function()
{
	//stub function
}
