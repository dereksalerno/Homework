//Derek Salerno
//CSC210 Fall, 2012
//Project #9	
//Due: November 10, 2012
//This program takes a playlist file and allows the user to search for a particular artist
//instructions: Follow the prompt.

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

struct Song		//Our song struct
{
string title;
string artist;
string album;
};

const int MAX_SONGS = 200;		//limit 200 songs.  This is a constant
Song playlist[MAX_SONGS]; 
void SearchMenu(Song songs[]);		//This function is the key to the program.  It  searches the file.
void PrintHeading();
void PrintSongs(Song songs[]);
int index;

int main()
{
ifstream inData;
string fileName;
PrintHeading();
cout << "Enter the name of the file: " << endl;
cin >> fileName;
inData.open(fileName.c_str());
if(!inData)
{
cout << "There is a problem opening the file.\nIs the file present, and did you enter the name correctly?" << endl;
}
else
    {
index = 0;
string throwAway;
while(inData)
	{
getline(inData, playlist[index].title, '\t');		//Since the format is consistent across the file, we can assume that
getline(inData, throwAway, ':');			//Whatever program created it is also consistent in the way it
getline(inData, throwAway, '\t');			//creates such playlists.  Before I went about collecting data this way
getline(inData, playlist[index].artist, '\t');		//I went to hell and back trying to remove tabs from collected strings.
getline(inData, throwAway, ':');			//It seems easier (and probably faster to execute) this way.
getline(inData, playlist[index].album, '\n');
index++;
	}
}

SearchMenu(playlist);		//Now that we have it all in an array, we will search it and output our results.

return 0;
}

void PrintHeading()
{
cout << "Derek Salerno\nProject #9\nCSC210\nFall 2012\n";		//That's me.
}
		

void SearchMenu(Song songs[])
{
bool isMatch = false;		//This will allow us to react to a lack of a match
string artistName;
cout << "Please enter the name of the artist you are looking for, case sensitive: ";
cin.ignore(1000,'\n');			//Just in case we have any \n in the stream that will keep us from allowing input
getline(cin, artistName);
for (int i = 0; i < index; i++)
	{
		if(songs[i].artist == artistName)		//We check the input against our array
		{
			cout << "Artist: " << songs[i].artist << "  Song title: " << songs[i].title << "  Album: " << songs[i].album << endl;	
			isMatch = true;
		}	
	}
	if (!(isMatch))
		{
			cout << "I couldn't find the artist requested.\n";	//If there is no match, we report it to user
		}
	}

