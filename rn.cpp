
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
  "Lite-Green",
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
  "Dwarf",
  "Zombie",
  "Miki",
  "Megumi",
  "Kan-na",
  "Reimu",
  "Marisa",
  "Tenshi",
  "Alice",
  "Yohmu",
  "Reisen",
  "Air",
  "Kui",
  "Degawa",
  "Surikae",
  "Dareka",
  "Spidahma",
  "Tetsuo",
  "Jack",
  "Qween",
  "King",
  "Playmate",
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
  "Talk about self",
  "Song",
  "Pacrat",
  "Expand",
  "Read the Book",
  "Open up the door",
  "Jump",
  "Bomb",
  "Spectate",
  "Break",
  "",
};

std::string satw[] = {
  "Hell",
  "Today",
  "Rainy_Town",
  "Mountain",
  "Kyoto",
  "Saitama",
  "Dome",
  "Basement",
  "Station",
  "Street",
  "Pole",
  "Chiba",
  "Top_of_the_World",
  "Zoo",
  "Hive",
  "HoTo",
  "School",
  "Black_Hole",
  "Land",
  "House",
  "Ice",
  "Bar",
  "Sun",
  "Underground",
  "Mars",
  "Mugi's home",
  "House made by cakes",
  "Tsunderera castle",
  "India",
  "Dezeni land",
  "Pinchi",
  "Westside",
  "",
};

int
get_randint0 (int n)
{
  if (n == 0)
    return 0;
  return rand () % n;
}

std::string get_rnd_str (std::string s[])
{
  std::string rval = "";
  for (int i = 0; s[i].c_str ()[0]; i++)
  {
    if (get_randint0 (i) == 0)
    {
      rval = s[i];
    }
  }
  return rval;
}

int
main ()
{
  srand (time (0));
  int cnt = 22;
  for (int i = 0; i < cnt; i++)
  {
    std::cout << get_rnd_str (sfureiba) << " ";
    std::cout << get_rnd_str (sone) << " ";
    std::cout << get_rnd_str (sdowhat) << " ";
    std::cout << "at " << get_rnd_str (satw) << ".";
    std::cout << std::endl;
  }
  return 0;
}
