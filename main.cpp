#include "event.h"

void display_menu()
{
	cout<<"1. Please add an event "<<endl;
	cout<<"2. Please display all events "<<endl;
	cout<<"3. Exit"<<endl;
	cout<<"Enter your choice: "<<endl;

}
int main()
{

	Event_List eventList;
	int choice;

	do
	{
		display_menu();
		cin>>choice;

		switch(choice)
		{
			case 1:
				eventList.read();
				break;
			case 2:
				eventList.display();
				break;
			case 3:
				cout<<"Thank you!!!"<<endl;
				break;
		}
	}while(choice!=3);

	return 0;
}
