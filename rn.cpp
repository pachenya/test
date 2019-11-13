
#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <time.h>

std::string sfureiba[] = {
  "White",
  "Black",
  "Blue",
  "Red",
  "Crimson",
  "Green",
  "Yello",
  "Tea-colored",
  "Shining",
  "Gray",
  "Mighty",
  "Invisible",
  "Dark",
  "Happy",
  "Treat-an-ice",
  "Small",
  "Little",
  "Big",
  "Fxn'shit",
  "Lite-Gteen",
  "Perfect",
  "Sexy",
  "Creative",
  "Great",
  "Super",
  "Undead",
  "Weekly",
  "Killer",
  "Fine",
	"Flying",
  "Cute",
	"Friendry",
	"",
};
std::string sone[] = {
  "Man",
  "Woman",
  "Lady",
  "Girl",
  "Bob",
  "Tom",
  "Marco",
  "Tom-Marco",
  "Mio",
  "Yui",
  "Ritsu",
  "Tsumugi",
  "Azusa",
  "Sawaco",
  "Gorio",
  "Yukari",
  "Kazuma",
	"Ogre",
	"Warrior",
	"Mage",
	"Priest",
	"Rogue",
	"Fighter",
	"Writer",
	"Dog",
	"Cat",
	"We",
	"You",
	"Me",
	"They",
	"Tiger",
	"Ao-Oni",
	"Ayumu",
	"Tomo",
	"Chiyo",
	"Sakaki-san",
	"Warlock",
	"Elf",
	"",
};

std::string sdowhat[] = {
  "Fx",
  "Hit",
  "Smite",
  "Kick",
  "Pray",
  "Slay",
  "Beat",
  "Watch",
  "Fight",
  "Fly",
  "Cry",
  "Run",
  "Cast a spell",
  "Fire",
  "Shoot",
  "Look",
  "Eat it",
  "Take",
  "Get",
  "Let it be",
  "Say hello",
	"",
};

int get_randint0(int n)
{
  if (n==0)
    return 0;
	return rand()%n;
}

std::string get_rnd_str(std::string s[])
{
  std::string rval = "";
	for(int i=0;s[i].c_str()[0];i++)
	{
  	if (get_randint0(i)==0)
		{
      rval = s[i];
		}
	}
  return rval;
}

int main()
{
	srand(time(0));
	int cnt = 22;
	for(int i=0;i<cnt;i++)
	{
	std::cout << get_rnd_str(sfureiba) << " ";
  std::cout << get_rnd_str(sone)<< " ";
	std::cout << get_rnd_str(sdowhat)<< " ";
	std::cout << std::endl;
	}
				return 0;
}




