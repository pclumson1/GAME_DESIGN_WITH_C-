#include <iostream>
#include <string>
#include <vector>
#include <cctype>

//This is rev 7 - ADDED 20 Rooms
// ADDED 9 MORE  NOUNS.

using namespace std;

enum en_DIRS {NORTH, SOUTH, EAST, WEST, UP, DOWN};
enum en_ROOMS {SPORTSHOP, CASINO, POKERROOM, GENTLEMENSCLUB, CLUBENTRANCE, MAINSTAGE, CLUBRESTROOM, LOWERELEVATOR, UPPERELEVATOR, YOURHOTELROOM, FIFTEENTHFLOORHALL, LAYONBED, CHAMPANGEROOM, DINER, INSIDEDINER, DINERRESTROOM, BEDROOM, ROOMBATH, SITATTABLE, PARTYHOTELROOM, PARTYHOTELBATH, CARPARK, LOBBY, RESTAURANT, BUFFETAREA, CORRIDOR, STOREROOM, POOL, GARDEN, POND, PUMPROOM};
enum en_VERBS {GET, DROP, USE, OPEN, CLOSE, EXAMINE, INVENTORY, LOOK};
enum en_NOUNS {STORE_DOOR, MAGNET, METER, ROULETTE, MONEY, FISHROD,COUNTER,LOBBY_DOOR,COUNTER_TABLE,REGISTER,CABINET,SHELF,FURNITURE,SCREEN,SOUVENIR};

const int NONE = -1;
const int DIRS = 6;
const int ROOMS = 31;
const int VERBS = 8;
const int NOUNS = 15;

class Words
{
    private :
             string word;
	         int code;
    public:
	        Words()
			{
			
			}
			Words
	     
  
	
};

class Room
{
public:

	string description;
	int exits_to_room[DIRS];
	
};

class Noun
{
public:

	string word;
	string description;
	int code;
	int location;
	bool can_carry;
};

class Items
{
public:

};


//-------------------------------------------------------------------------------------------------------------------------------

void set_rooms (vector<Room> &rms)
{
	rms[SPORTSHOP].description.assign("sports shop");
	rms[SPORTSHOP].exits_to_room[NORTH] = NONE;
	rms[SPORTSHOP].exits_to_room[EAST] = NONE;
	rms[SPORTSHOP].exits_to_room[SOUTH] = CARPARK;
	rms[SPORTSHOP].exits_to_room[WEST] = NONE;
	rms[SPORTSHOP].exits_to_room[UP] = NONE;
	rms[SPORTSHOP].exits_to_room[DOWN] = NONE;
	
	rms[CASINO].description.assign("bustling casino");
	rms[CASINO].exits_to_room[NORTH] = NONE;
	rms[CASINO].exits_to_room[EAST] = POKERROOM;
	rms[CASINO].exits_to_room[SOUTH] = LOBBY;
	rms[CASINO].exits_to_room[WEST] = NONE;
	rms[CASINO].exits_to_room[UP] = NONE;
	rms[CASINO].exits_to_room[DOWN] = NONE;
	
	rms[POKERROOM].description.assign("poker room");
	rms[POKERROOM].exits_to_room[NORTH] = NONE;
	rms[POKERROOM].exits_to_room[EAST] = NONE;
	rms[POKERROOM].exits_to_room[SOUTH] = NONE;
	rms[POKERROOM].exits_to_room[WEST] = CASINO;
	rms[POKERROOM].exits_to_room[UP] = NONE;
	rms[POKERROOM].exits_to_room[DOWN] = NONE;
	
	rms[CARPARK].description.assign("car park");
	rms[CARPARK].exits_to_room[NORTH] = SPORTSHOP;
	rms[CARPARK].exits_to_room[EAST] = LOBBY;
	rms[CARPARK].exits_to_room[SOUTH] = DINER;
	rms[CARPARK].exits_to_room[WEST] = GENTLEMENSCLUB;
	rms[CARPARK].exits_to_room[UP] = NONE;
	rms[CARPARK].exits_to_room[DOWN] = NONE;
	
	rms[DINER].description.assign("diner parking lot");
	rms[DINER].exits_to_room[NORTH] = CARPARK;
	rms[DINER].exits_to_room[EAST] = NONE;
	rms[DINER].exits_to_room[SOUTH] = INSIDEDINER;
	rms[DINER].exits_to_room[WEST] = NONE;
	rms[DINER].exits_to_room[UP] = NONE;
	rms[DINER].exits_to_room[DOWN] = NONE;
	
	rms[INSIDEDINER].description.assign("place inside the diner");
	rms[INSIDEDINER].exits_to_room[NORTH] = DINER;
	rms[INSIDEDINER].exits_to_room[EAST] = SITATTABLE;
	rms[INSIDEDINER].exits_to_room[SOUTH] = NONE;
	rms[INSIDEDINER].exits_to_room[WEST] = DINERRESTROOM;
	rms[INSIDEDINER].exits_to_room[UP] = NONE;
	rms[INSIDEDINER].exits_to_room[DOWN] = NONE;
	
	rms[DINERRESTROOM].description.assign("diner bathroom");
	rms[DINERRESTROOM].exits_to_room[NORTH] = NONE;
	rms[DINERRESTROOM].exits_to_room[EAST] = INSIDEDINER;
	rms[DINERRESTROOM].exits_to_room[SOUTH] = NONE;
	rms[DINERRESTROOM].exits_to_room[WEST] = NONE;
	rms[DINERRESTROOM].exits_to_room[UP] = NONE;
	rms[DINERRESTROOM].exits_to_room[DOWN] = NONE;
	
	rms[SITATTABLE].description.assign("place sitting at a table");
	rms[SITATTABLE].exits_to_room[NORTH] = NONE;
	rms[SITATTABLE].exits_to_room[EAST] = NONE;
	rms[SITATTABLE].exits_to_room[SOUTH] = NONE;
	rms[SITATTABLE].exits_to_room[WEST] = INSIDEDINER;
	rms[SITATTABLE].exits_to_room[UP] = NONE;
	rms[SITATTABLE].exits_to_room[DOWN] = NONE;
	
	rms[GENTLEMENSCLUB].description.assign("gentlemen's club (parking lot)");
	rms[GENTLEMENSCLUB].exits_to_room[NORTH] = NONE;
	rms[GENTLEMENSCLUB].exits_to_room[EAST] = CARPARK;
	rms[GENTLEMENSCLUB].exits_to_room[SOUTH] = NONE;
	rms[GENTLEMENSCLUB].exits_to_room[WEST] = CLUBENTRANCE;
	rms[GENTLEMENSCLUB].exits_to_room[UP] = NONE;
	rms[GENTLEMENSCLUB].exits_to_room[DOWN] = NONE;
	
	rms[CLUBENTRANCE].description.assign("place inside the club entrance (pay cover fee)");
	rms[CLUBENTRANCE].exits_to_room[NORTH] = NONE;
	rms[CLUBENTRANCE].exits_to_room[EAST] = GENTLEMENSCLUB;
	rms[CLUBENTRANCE].exits_to_room[SOUTH] = NONE;
	rms[CLUBENTRANCE].exits_to_room[WEST] = MAINSTAGE ;
	rms[CLUBENTRANCE].exits_to_room[UP] = NONE;
	rms[CLUBENTRANCE].exits_to_room[DOWN] = NONE;
	
	rms[MAINSTAGE].description.assign("seat at the main stage area of the Gentleman's club");
	rms[MAINSTAGE].exits_to_room[NORTH] = CLUBRESTROOM;
	rms[MAINSTAGE].exits_to_room[EAST] = CLUBENTRANCE;
	rms[MAINSTAGE].exits_to_room[SOUTH] = CHAMPANGEROOM;
	rms[MAINSTAGE].exits_to_room[WEST] = NONE ;
	rms[MAINSTAGE].exits_to_room[UP] = NONE;
	rms[MAINSTAGE].exits_to_room[DOWN] = NONE;
	
	rms[CLUBRESTROOM].description.assign("restroom in the club");
	rms[CLUBRESTROOM].exits_to_room[NORTH] = NONE;
	rms[CLUBRESTROOM].exits_to_room[EAST] = NONE;
	rms[CLUBRESTROOM].exits_to_room[SOUTH] = MAINSTAGE;
	rms[CLUBRESTROOM].exits_to_room[WEST] = NONE;
	rms[CLUBRESTROOM].exits_to_room[UP] = NONE;
	rms[CLUBRESTROOM].exits_to_room[DOWN] = NONE;
	
	rms[CHAMPANGEROOM].description.assign("champagne room");
	rms[CHAMPANGEROOM].exits_to_room[NORTH] = MAINSTAGE;
	rms[CHAMPANGEROOM].exits_to_room[EAST] = NONE;
	rms[CHAMPANGEROOM].exits_to_room[SOUTH] = NONE;
	rms[CHAMPANGEROOM].exits_to_room[WEST] = NONE;
	rms[CHAMPANGEROOM].exits_to_room[UP] = NONE;
	rms[CHAMPANGEROOM].exits_to_room[DOWN] = NONE;
	
	rms[LOBBY].description.assign("hotel lobby");
	rms[LOBBY].exits_to_room[NORTH] = CASINO;
	rms[LOBBY].exits_to_room[EAST] = RESTAURANT;
	rms[LOBBY].exits_to_room[SOUTH] = CORRIDOR;
	rms[LOBBY].exits_to_room[WEST] = CARPARK;
	rms[LOBBY].exits_to_room[UP] = NONE;
	rms[LOBBY].exits_to_room[DOWN] = NONE;
	
	rms[RESTAURANT].description.assign("restaurant");
	rms[RESTAURANT].exits_to_room[NORTH] = NONE;
	rms[RESTAURANT].exits_to_room[EAST] = BUFFETAREA;
	rms[RESTAURANT].exits_to_room[SOUTH] = NONE;
	rms[RESTAURANT].exits_to_room[WEST] = LOBBY;
	rms[RESTAURANT].exits_to_room[UP] = NONE;
	rms[RESTAURANT].exits_to_room[DOWN] = NONE;
	
	rms[BUFFETAREA].description.assign("all you can eat buffet");
	rms[BUFFETAREA].exits_to_room[NORTH] = NONE;
	rms[BUFFETAREA].exits_to_room[EAST] = NONE;
	rms[BUFFETAREA].exits_to_room[SOUTH] = NONE;
	rms[BUFFETAREA].exits_to_room[WEST] = RESTAURANT;
	rms[BUFFETAREA].exits_to_room[UP] = NONE;
	rms[BUFFETAREA].exits_to_room[DOWN] = NONE;
	
	rms[CORRIDOR].description.assign("corridor");
	rms[CORRIDOR].exits_to_room[NORTH] = LOBBY;
	rms[CORRIDOR].exits_to_room[EAST] = NONE;
	rms[CORRIDOR].exits_to_room[SOUTH] = GARDEN;
	rms[CORRIDOR].exits_to_room[WEST] = LOWERELEVATOR;
	rms[CORRIDOR].exits_to_room[UP] = NONE;
	rms[CORRIDOR].exits_to_room[DOWN] = NONE;
	
	rms[LOWERELEVATOR].description.assign("first floor elevator");
	rms[LOWERELEVATOR].exits_to_room[NORTH] = NONE;
	rms[LOWERELEVATOR].exits_to_room[EAST] = CORRIDOR;
	rms[LOWERELEVATOR].exits_to_room[SOUTH] = NONE;
	rms[LOWERELEVATOR].exits_to_room[WEST] = NONE;
	rms[LOWERELEVATOR].exits_to_room[UP] = UPPERELEVATOR;
	rms[LOWERELEVATOR].exits_to_room[DOWN] = NONE;
	
	rms[UPPERELEVATOR].description.assign("elevator at 15th floor");
	rms[UPPERELEVATOR].exits_to_room[NORTH] = NONE;
	rms[UPPERELEVATOR].exits_to_room[EAST] = FIFTEENTHFLOORHALL;
	rms[UPPERELEVATOR].exits_to_room[SOUTH] = NONE;
	rms[UPPERELEVATOR].exits_to_room[WEST] = NONE;
	rms[UPPERELEVATOR].exits_to_room[UP] = NONE;
	rms[UPPERELEVATOR].exits_to_room[DOWN] = LOWERELEVATOR;
	
	rms[FIFTEENTHFLOORHALL].description.assign("15th floor hallway");
	rms[FIFTEENTHFLOORHALL].exits_to_room[NORTH] =PARTYHOTELROOM;
	rms[FIFTEENTHFLOORHALL].exits_to_room[EAST] = YOURHOTELROOM;
	rms[FIFTEENTHFLOORHALL].exits_to_room[SOUTH] = NONE;
	rms[FIFTEENTHFLOORHALL].exits_to_room[WEST] = UPPERELEVATOR;
	rms[FIFTEENTHFLOORHALL].exits_to_room[UP] = NONE;
	rms[FIFTEENTHFLOORHALL].exits_to_room[DOWN] = NONE;
	
	rms[YOURHOTELROOM].description.assign("hotel room (yours)");
	rms[YOURHOTELROOM].exits_to_room[NORTH] = ROOMBATH;
	rms[YOURHOTELROOM].exits_to_room[EAST] = BEDROOM;
	rms[YOURHOTELROOM].exits_to_room[SOUTH] = NONE;
	rms[YOURHOTELROOM].exits_to_room[WEST] = FIFTEENTHFLOORHALL;
	rms[YOURHOTELROOM].exits_to_room[UP] = NONE;
	rms[YOURHOTELROOM].exits_to_room[DOWN] = NONE;
	
	rms[ROOMBATH].description.assign("bathroom in your hotel room");
	rms[ROOMBATH].exits_to_room[NORTH] = NONE;
	rms[ROOMBATH].exits_to_room[EAST] = NONE;
	rms[ROOMBATH].exits_to_room[SOUTH] = NONE;
	rms[ROOMBATH].exits_to_room[WEST] = NONE;
	rms[ROOMBATH].exits_to_room[UP] = NONE;
	rms[ROOMBATH].exits_to_room[DOWN] = NONE;
	
	rms[BEDROOM].description.assign("bedroom in your hotel room");
	rms[BEDROOM].exits_to_room[NORTH] = NONE;
	rms[BEDROOM].exits_to_room[EAST] = LAYONBED;
	rms[BEDROOM].exits_to_room[SOUTH] = NONE;
	rms[BEDROOM].exits_to_room[WEST] = NONE;
	rms[BEDROOM].exits_to_room[UP] = NONE;
	rms[BEDROOM].exits_to_room[DOWN] = NONE;
	
	rms[LAYONBED].description.assign("laying down position on your bed");
	rms[LAYONBED].exits_to_room[NORTH] = NONE;
	rms[LAYONBED].exits_to_room[EAST] = LAYONBED;
	rms[LAYONBED].exits_to_room[SOUTH] = NONE;
	rms[LAYONBED].exits_to_room[WEST] = NONE;
	rms[LAYONBED].exits_to_room[UP] = NONE;
	rms[LAYONBED].exits_to_room[DOWN] = NONE;
	
	rms[PARTYHOTELROOM].description.assign("massive party on your floor");
	rms[PARTYHOTELROOM].exits_to_room[NORTH] = PARTYHOTELBATH;
	rms[PARTYHOTELROOM].exits_to_room[EAST] = NONE;
	rms[PARTYHOTELROOM].exits_to_room[SOUTH] = FIFTEENTHFLOORHALL;
	rms[PARTYHOTELROOM].exits_to_room[WEST] = NONE;
	rms[PARTYHOTELROOM].exits_to_room[UP] = NONE;
	rms[PARTYHOTELROOM].exits_to_room[DOWN] = NONE;
	
	rms[PARTYHOTELBATH].description.assign("bathroom at the party room");
	rms[PARTYHOTELBATH].exits_to_room[NORTH] = NONE;
	rms[PARTYHOTELBATH].exits_to_room[EAST] = NONE;
	rms[PARTYHOTELBATH].exits_to_room[SOUTH] = PARTYHOTELROOM;
	rms[PARTYHOTELBATH].exits_to_room[WEST] = NONE;
	rms[PARTYHOTELBATH].exits_to_room[UP] = NONE;
	rms[PARTYHOTELBATH].exits_to_room[DOWN] = NONE;
	
	rms[STOREROOM].description.assign("store room");
	rms[STOREROOM].exits_to_room[NORTH] = NONE;
	rms[STOREROOM].exits_to_room[EAST] = NONE;
	rms[STOREROOM].exits_to_room[SOUTH] = NONE;
	rms[STOREROOM].exits_to_room[WEST] = NONE;
	rms[STOREROOM].exits_to_room[UP] = NONE;
	rms[STOREROOM].exits_to_room[DOWN] = NONE;
	
	rms[POOL].description.assign("swimming pool area");
	rms[POOL].exits_to_room[NORTH] = NONE;
	rms[POOL].exits_to_room[EAST] = GARDEN;
	rms[POOL].exits_to_room[SOUTH] = PUMPROOM;
	rms[POOL].exits_to_room[WEST] = NONE;
	rms[POOL].exits_to_room[UP] = NONE;
	rms[POOL].exits_to_room[DOWN] = NONE;
	
	rms[GARDEN].description.assign("tranquil garden");
	rms[GARDEN].exits_to_room[NORTH] = CORRIDOR;
	rms[GARDEN].exits_to_room[EAST] = POND;
	rms[GARDEN].exits_to_room[SOUTH] = NONE;
	rms[GARDEN].exits_to_room[WEST] = POOL;
	rms[GARDEN].exits_to_room[UP] = NONE;
	rms[GARDEN].exits_to_room[DOWN] = NONE;
	
	rms[POND].description.assign("patio with a fish pond");
	rms[POND].exits_to_room[NORTH] = NONE;
	rms[POND].exits_to_room[EAST] = NONE;
	rms[POND].exits_to_room[SOUTH] = NONE;
	rms[POND].exits_to_room[WEST] = GARDEN;
	rms[POND].exits_to_room[UP] = NONE;
	rms[POND].exits_to_room[DOWN] = NONE;
	
	rms[PUMPROOM].description.assign("damp pump room");
	rms[PUMPROOM].exits_to_room[NORTH] = POOL;
	rms[PUMPROOM].exits_to_room[EAST] = NONE;
	rms[PUMPROOM].exits_to_room[SOUTH] = NONE;
	rms[PUMPROOM].exits_to_room[WEST] = NONE;
	rms[PUMPROOM].exits_to_room[UP] = NONE;
	rms[PUMPROOM].exits_to_room[DOWN] = NONE;
}

//-----------------------------------------------------------------------------------------------------------------------------------------------

void set_directions(vector<Words> &dir)
{
	dir[NORTH].code = NORTH;
	dir[NORTH].word = "NORTH";
	dir[EAST].code = EAST;
	dir[EAST].word = "EAST";
	dir[SOUTH].code = SOUTH;
	dir[SOUTH].word = "SOUTH";
	dir[WEST].code = WEST;
	dir[WEST].word = "WEST";
	dir[UP].code = UP;
	dir[UP].word = "UP";
	dir[DOWN].code = DOWN;
	dir[DOWN].word = "DOWN";
}

//--------------------------------------------------------------------------------------------------------------------------------------------------
	
void set_verbs(vector<Words> &vbs)
{
		// enum en_VERBS {GET, DROP USE, OPEN, CLOSE, EXAMINE, INVENTORY, LOOK};
		vbs[GET].code = GET;
		vbs[GET].word = "GET";
		vbs[DROP].code = DROP;
		vbs[DROP].word = "DROP";
		vbs[USE].code = USE;
		vbs[USE].word = "USE";
		vbs[OPEN].code = OPEN;
		vbs[OPEN].word = "OPEN";
		vbs[CLOSE].code = CLOSE;
		vbs[CLOSE].word = "CLOSE";
		vbs[EXAMINE].code = EXAMINE;
		vbs[EXAMINE].word = "EXAMINE";
		vbs[INVENTORY].code = INVENTORY;
		vbs[INVENTORY].word = "INVENTORY";
		vbs[LOOK].code = LOOK;
		vbs[LOOK].word = "LOOK";
}

//------------------------------------------------------------------------------------------------------------------------------------------------------
		
void set_nouns(vector<Noun> &nns)
{
		//enum en_NOUNS {STORE_DOOR, MAGNET, METER, ROULETTE, MONEY, FISHROD,COUNTER,LOBBY_DOOR,COUNTER_TABLE,REGISTER,CABINET,SHELF,FURNITURE,SCREEN,SOUVENIR};
		nns[STORE_DOOR].word = "DOOR";
		nns[STORE_DOOR].code = STORE_DOOR;
		nns[STORE_DOOR].description = "a closed store room door";
		nns[STORE_DOOR].can_carry = false;
		nns[STORE_DOOR].location = CORRIDOR;
		nns[MAGNET].word = "MAGNET";
		nns[MAGNET].code = MAGNET;
		nns[MAGNET].description = "a magnet";
		nns[MAGNET].can_carry = true;
		nns[MAGNET].location = NONE;
		nns[METER].word = "METER";
		nns[METER].code = METER;
		nns[METER].description = "a parking meter";
		nns[METER].can_carry = false;
		nns[METER].location = CARPARK;
		nns[ROULETTE].word = "ROULETTE";
		nns[ROULETTE].code = ROULETTE;
		nns[ROULETTE].description = "a roulette wheel";
		nns[ROULETTE].can_carry = false;
		nns[ROULETTE].location = CASINO;
		nns[MONEY].word = "MONEY";
		nns[MONEY].code = MONEY;
		nns[MONEY].description = "some money";
		nns[MONEY].can_carry = true;
		nns[MONEY].location = CASINO;
		nns[FISHROD].word = "ROD";
		nns[FISHROD].code = FISHROD;
		nns[FISHROD].description = "a fishing rod";
		nns[FISHROD].can_carry = false;
		nns[FISHROD].location = SPORTSHOP;
		nns[COUNTER].word = "COUNTER";
		nns[COUNTER].code = COUNTER;
		nns[COUNTER].description = "a drinking counter";
		nns[COUNTER].can_carry = false;
		nns[COUNTER].location = CASINO;
		nns[LOBBY_DOOR].word = "DOOR";
		nns[LOBBY_DOOR].code = LOBBY_DOOR;
		nns[LOBBY_DOOR].description = "a closed lobby area door";
		nns[LOBBY_DOOR].can_carry = false;
		nns[LOBBY_DOOR].location = CORRIDOR;
		nns[COUNTER_TABLE].word = "COUNTER_TABLE";
		nns[COUNTER_TABLE].code = COUNTER_TABLE;
		nns[COUNTER_TABLE].description = "a drinking counter table";
		nns[COUNTER_TABLE].can_carry = false;
		nns[COUNTER_TABLE].location = CASINO;
		nns[REGISTER].word = "REGISTER";
		nns[REGISTER].code = REGISTER;
		nns[REGISTER].description = "a sportshop register";
		nns[REGISTER].can_carry = false;
		nns[REGISTER].location = SPORTSHOP;
		nns[CABINET].word = "CABINET";
		nns[CABINET].code = CABINET;
		nns[CABINET].description = "a closed store room door";
		nns[CABINET].can_carry = false;
		nns[CABINET].location = SPORTSHOP;
		nns[SHELF].word = "SHELF";
		nns[SHELF].code = SHELF;
		nns[SHELF].description = "a shelf where objects are stored";
		nns[SHELF].can_carry = false;
		nns[SHELF].location = CASINO;
		nns[FURNITURE].word = "FURNITURE";
		nns[FURNITURE].code = FURNITURE;
		nns[FURNITURE].description = "a set of furniture in the lobby";
		nns[FURNITURE].can_carry = false;
		nns[FURNITURE].location = LOBBY;
		nns[SCREEN].word = "SCREEN";
		nns[SCREEN].code = SCREEN;
		nns[SCREEN].description = "a screen displaying information in the lobby";
		nns[SCREEN].can_carry = false;
		nns[SOUVENIR].word = "CABINET";
		nns[SOUVENIR].code = CABINET;
		nns[SOUVENIR].description = "Souvenir object sold in the sportshop";
		nns[SOUVENIR].can_carry = false;
		nns[SOUVENIR].location = SPORTSHOP;
		
		
	}
	
	//-----------------------------------------------------------------------------------------------------------------------
		
		
void section_command (string Cmd, string &wd1, string &wd2)
{
		string sub_str;
		vector<string> words;
		char search = ' ';
		size_t i, j;
		
		for (i=0; i < Cmd.size(); i++)
		{
			if (Cmd.at(i) != search)
			{
				sub_str.insert(sub_str.end(), Cmd.at(i));
			}
			
			if (i == Cmd.size() -1)
			{
				words.push_back(sub_str);
				sub_str.clear();
			}
			
			if (Cmd.at(i) == search)
			{
				words.push_back(sub_str);;
				sub_str.clear();
			}
		}
		
		for (i = words.size() - 1; i > 0; i--)
		{
			if(words.at(i)== "")
			{
				words.erase(words.begin() +i);
			}
		}
		
		for(i=0; i < words.size(); i++)
		{
			for (j = 0; j < words.at(i).size(); j++)
			{
				if (islower(words.at(i).at(j)))
				{
					words.at(i).at(j) = toupper(words.at(i).at(j));
				}
			}
		}
		
		if (words.size() == 0)
		{
			cout << "No command given" << endl;
		}
		
		if (words.size() == 1)
		{
			wd1 = words.at(0);
		}
		
		if (words.size() == 2)
		{
			wd1 = words.at(0);
			wd2 = words.at(1);
		}
		
		if (words.size() > 2)
		{
			cout << "Command too long. Only type one or two words (direction or verb and noun)" << endl;
		}
}

//---------------------------------------------------------------------------------------------------------------------------
		
void look_around( int loc, vector<Room> &rms, vector<Words> &dir, vector<Noun> &nns)
{
	int i;
	cout << "I am in a " << rms[loc].description << "." << endl;
	
	for (i=0; i < DIRS; i++)
	{
		if (rms[loc].exits_to_room[i] !=NONE)
		{
			cout << "There is an exit " << dir[i].word << " to a " << rms[rms[loc].exits_to_room[i]].description << "." << endl;
		}
	}
	
// The look command should check which objects (nouns) are in the current room and report them to the player.

	for (i =0; i < NOUNS; i++)
	{
		if (nns[i].location == loc)
		{
			cout << "I see " << nns[i].description << "." << endl;
		}
	}
}


void get_item( int loc,  vector<Room> &rms, vector<Words> &dir, vector<Noun> &nns)
{
	int i;
		
	for (i =0; i < NOUNS; i++)
	{
		if (nns[i].location == loc)
			if (nns[i].can_carry)
			
		{
			cout << "You have picked up " << nns[i].description<< "." << endl;
		}
		
		
				
	}
}
//---------------------------------------------------------------------------------------------------------------------------

bool parser ( int &loc, string wd1, string wd2, vector<Words> &dir, vector<Words> &vbs, vector<Room> &rms, vector<Noun> &nns)

{
	static bool door_state = false;  // false is a closed door
	
	int i;
	
	for (i =0; i< DIRS; i++)
	{
		if(wd1 == dir[i].word)
		{
			if(rms[loc].exits_to_room[dir[i].code] != NONE)
			{
				loc = rms[loc].exits_to_room[dir[i].code];
				cout << "I am now in a " <<rms[loc].description << "." << endl;
				// A special case for the corridor storeroom door.
				if (loc == STOREROOM || loc == CORRIDOR)
				{
					nns[STORE_DOOR].location = loc;
				}
				
				//.....
				return true;
			}
			
			else 
			{
				cout << "No exit that way." << endl;
				return true;
			}
		}
	}
	
	int NOUN_MATCH = NONE;
	int VERB_ACTION = NONE;
	
	for(i = 0; i< VERBS; i++)
	{
		if(wd1 == vbs[i].word)
		{
			VERB_ACTION = vbs[i].code;
			break;
		}
	}
	
	if (wd2 != "")
	{
		for (i =0; i< NOUNS; i++)
		{
			if (wd2 == nns[i].word)
			{
				NOUN_MATCH = nns[i].code;
				break;
			}
		}
	}
	
	if  (VERB_ACTION == NONE)
	{
		cout << "No valid command entered." << endl;
		return true;
	}
	
	if (VERB_ACTION == LOOK)
	{
		look_around(loc, rms, dir, nns);
		return true;
	}
	
	
	if (VERB_ACTION == GET)
	{
		get_item(loc, rms, dir, nns);
		return true;
	}
	
		
	//Actions for usage of VERB OPEN
	
	if (VERB_ACTION == OPEN)
	{
		if (NOUN_MATCH == STORE_DOOR)
		{
			if (loc == CORRIDOR || loc == STOREROOM)
			{
				if (door_state == false)
				{
					door_state = true;
					rms[CORRIDOR].exits_to_room[EAST] = STOREROOM;
					rms[STOREROOM].exits_to_room[WEST] = CORRIDOR;
					nns[STORE_DOOR].description.clear();
					nns[STORE_DOOR].description.assign("an open store room door");
					cout << "I have opened the door." << endl;
					return true;
				}
				
				else if (door_state == true)
				{
					cout << "The door is already open." << endl;
					return true;
				}
			}	
			
			else 
			{
				cout << "There is no door to open here." << endl;
				return true;
			}
		}
		
		else
		{
			cout << "Opening that is not possible." << endl;
			return true;
		}
	}
	
	
	if (VERB_ACTION == CLOSE)
	{
		if (NOUN_MATCH == STORE_DOOR)
		{
			if (loc == CORRIDOR || loc == STOREROOM)
			{
				if (door_state == true)
				{
					door_state = false;
					rms[CORRIDOR].exits_to_room[EAST] = STOREROOM;
					rms[STOREROOM].exits_to_room[WEST] = CORRIDOR;
					nns[STORE_DOOR].description.clear();
					nns[STORE_DOOR].description.assign("a closed store room door");
					cout << "I have closed the door." << endl;
					return true;
				}
				
				else if (door_state == false)
				{
					cout << "The door is already closed." << endl;
					return true;
				}
			}	
			
			else 
			{
				cout << "There is no door to close here." << endl;
				return true;
			}
		}
		
		else
		{
			cout << "Closing that is not possible." << endl;
			return true;
		}
	}
	
	//...
	return false;
}

//---------------------------------------------------------------------------------------------------------------------------

int main ()
{
	string command;
	string word_1;
	string word_2;
	
	vector<Room> rooms(ROOMS);
	set_rooms(rooms);
	
	vector<Words> directions(DIRS);
	set_directions(directions);
	
	vector<Words> verbs(VERBS);
	set_verbs(verbs);
	
	vector<Noun> nouns(NOUNS);
	set_nouns(nouns);
	
		
	int location = CARPARK;
	
	while (word_1 != "QUIT")
	{
		command.clear();
		cout << "What shall I do? ";
		getline (cin, command);
		
		word_1.clear();
		word_2.clear();
		
		section_command(command, word_1, word_2);
		
		if(word_1 != "QUIT")
		{
			parser(location, word_1, word_2, directions, verbs, rooms, nouns);
		}
		
	}
	
	return 0;
}


			

		
		
		