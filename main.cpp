#include <iostream>
#include <vector>
using namespace std;

uint population;

string firstMaleNames[] = {"Wesley","Silas","Amare","Cruz","Steven","Kadin","Sawyer","Nash","Frederick","Jovany","Hayden","Tyler","Blaze","Rene","Ty","Malachi","Ray","Lukas","Gavyn","Dalton","Toby","Alan","Gael","Branden","Dennis","Quentin","Matteo","Hunter","Zachary","Abdullah","Ellis","Marquis","Maxwell","Easton","Elvis","Jaeden","Isaac","Miles","Aditya","Yadiel","Braxton","Dereon","Giancarlo","Brogan","Seth","Deacon","Marshall","Alonso","Alexis","Israel","Trevin","Chris","Jairo","Allan","Jakobe","Kolten","Anton","Victor","Jonah","Emmett","Kale","Kyson","Orion","Blake","Caleb","Jeramiah","Jeffrey","Jayson","Lucas","Kylan","Dean","Cortez","Cornelius","Zaire","Caden","Nasir","Shaun","Clark","Colby","Jaylon","Bailey","Maverick","Richard","Jake","Ryker","Jean","Ernest","Santos","Zander","Beckham","Dylan","Gilberto","Jamir","Seamus","Kyle","Kasen","Ernesto","Malaki","Reilly","Trystan","Benjamin","Jose","Braiden","Chandler","Kael","Gunnar","Grayson","Juan","Felipe","Rhett","Jorge","Jaidyn","Keaton","Carl","Mike","Travis","Kareem","Marcelo","Finn","Gabriel","Kameron","Ulises","Cason","Isaias","Wilson","Braden","Byron","Jamarion","Semaj","Darnell","Tyson","Carter","Luciano","Deangelo","Hector","Curtis","Edgar","Prince","Cordell","Rex","Brandon","Efrain","Reuben","Jaime","Jay","Darian","Corbin","Zion","Branson","Enzo","Kaden","Johnathan","Jonas","Josue","Brycen","Geovanni","Baron","Marley","John","Brayden","Paxton","Jared","Andreas","Dangelo","Kaiden","Zechariah","Armando","Eli","Arthur","Zaid","Gustavo","Tanner","Cannon","Armani","Bryson","Eden","Aldo","Lyric","Kayden","Manuel","Josh","Jace","Colton","Gerardo","Terrance","Emiliano","Maxim","Rylan","Dominick","Milo","Ronan","Triston","Adolfo","Elijah","Tyree","Tony","Kason","Jamie","Octavio","Landon","Davian","Frankie","Collin","Atticus","Aden","Ryder","Fletcher","Sebastian","Aedan","Brodie","Dillon","Lawson","Braylon","Kamren","Aarav","Rodrigo","Malik","Owen","Uriel","Kyler","Deven","Alden","Brian","Vance","Henry","Jermaine","Jerome","Nathanael","Ricardo","Damion","Addison","Jaylan","Kaeden","Bradyn","Omar","Conner","Maximus","Immanuel","Erick","Julio","Oliver","Kole","Cassius","Draven","Raul","Nickolas","Gilbert","Valentin","King","Dayton","Sergio","Rowan","Arjun","Micah","Aidyn","Trent","Kevin","Tristen","Guillermo","Jabari","Franco","Brendan","Declan","Donavan","Cullen","Andres","Landen","Salvador","Caiden","Brenton","Chace","Ross","Ethen","Johnathon","Reagan","Kolby","Malcolm","Brett","Salvatore","Scott","Nick","Carlos","Camron","Sam","Jonathan","Walker","Shamar","Barrett","Eddie","Winston","Darren","Arturo","Gideon","Isiah","Aydin","Coleman","Marcel","Demetrius","Micheal","Coby","Derick","Harrison","Desmond","Jason","Mateo","Leandro","Misael","Jan","Noah","Urijah","Kane","Kristopher","Thomas","Agustin","Casey","Issac","Matthew","Weston","Nikolas","Rolando","Jerimiah","Kendrick","Nikhil","Royce","Joseph","Jensen","Zackary","Cale","Sonny","Conor","Zayden","Keon","Jarrett","Gerald","Jeremy","Rafael","Xzavier","Sidney","Nolan","Kendall","Teagan","Aiden","Waylon","Tate","Konnor","Justice","Layne","Marcos","Cyrus","Dawson","Kian","Leonidas","Jaquan","Keagan","Deandre","Wayne","Yusuf","Boston","Cristopher","Ryland","Malakai","Damien","Robert","Jadiel","Jesse","Derrick","Grant","Ari","Adam","Tyrell","Leo","Dorian","Amari","Lennon","Angelo","Gavin","Elias","Trevon","Izayah","Darius","Alex","Eric","Gunner","Bruce","Noe","Roberto","Leonard","Elliott","Lamar","Alvin","Andre","Jadon","Kristian","Ashton","Maximillian","Jett","Nico","Spencer","Jamarcus","Makhi","Javon","Jax","Diego","Rhys","Jessie","Chaz","Brenden","Jameson","Marques","Yandel","Zain","Asa","Kolton","Roland","Davon","Jude","Hassan","Cedric","Rayan","Mohammed","Sterling","Joaquin","Avery","Damon","Braylen","Jamari","William","Isaiah","Jagger","Mohamed","Tripp","Dominique","Zayne","Rey","Finley","Kasey","Graham","Bernard","Emerson","Jaydon","Marlon","Charlie","Markus","Jackson","Camren","Frank","Erik","Romeo","Charles","Houston","Dale","Nehemiah","Zack","Angel","Lawrence","Raphael","Jovanny","Samuel","Nigel","Tristian","Donte","Humberto","Ayaan","Deon","Mario","Javier","Jorden","Marc","Tyrese","River","Rory","Parker","Santiago","Noel","Ahmed","Kenny","Titus","Sincere","Nathanial","Ishaan","Holden","Sean","Eduardo","Carmelo","Hamza","Jase","Koen","Colin","Zachery","Nikolai","Hudson","Keyon","Harry","Julien","Jesus","Xander","Simon","Matias","Jamison","Johnny"};
string firstFemaleNames[] = 
{"Salma","Alissa","Nylah","Kimora","Dahlia","Maryjane","Kailyn","Raelynn","Alannah","Sarai","Ainsley","Donna","Melanie","Maia","Briana","Laurel","Luna","Taniya","Scarlett","Sydney","Sabrina","Krista","Matilda","Cynthia","Thalia","Mercedes","Regan","Jaidyn","Emmy","Saniya","Sanaa","Kadence","Precious","Natalee","Karen","Arely","Avery","Rubi","Kayley","Marley","Litzy","Kaliyah","Esperanza","Tara","Sage","Kaydence","Jaiden","Natalya","Rylie","Jocelynn","Anne","Aylin","Jasmin","Fiona","Maleah","Britney","Bella","Esther","Isis","Margaret","Julissa","Jessie","Jaida","Amiya","Valerie","Elisa","Tabitha","Kylee","Allyson","Jaylee","Abbigail","Madeline","Quinn","Corinne","Anabella","Chloe","Neveah","Alejandra","Kaelyn","Olive","Adriana","Tori","Patience","Lizeth","Gracie","Bailee","Lesly","Jamiya","Mollie","Lana","Tatiana","Kate","Adeline","Deborah","Callie","Shayla","Joy","Alisa","Madyson","Brisa","Averie","Karley","Denisse","Ryann","Lila","Kassidy","Lillian","Ayla","Emilie","Diya","Kaylen","Yaritza","Amanda","Moriah","Jordin","Paloma","Jayden","Marissa","Abbie","Alanna","Rayna","Areli","Carla","Aliza","Nora","Delilah","Alyssa","Katrina","Jaden","Ryleigh","Rylee","Kenna","Esmeralda","Eva","Iyana","Dakota","Kendall","Edith","Brenda","Danielle","Chanel","Dixie","Jillian","Carissa","Emilee","Tamara","Juliana","Kaylah","Angeline","Sierra","Amber","Iliana","Laci","Ellie","Imani","Skylar","Clare","Keely","Monica","Roselyn","Laney","Julie","Karlee","Aleah","Emma","Ashley","Jayda","Alyson","Marie","Adelaide","Ellen","Phoenix","Alyvia","Essence","Aisha","Jade","Kaitlyn","Paris","Helen","Kathryn","Tiara","Lindsey","Carmen","Alessandra","Lillianna","Madison","Monique","Kaylee","Mckenna","Izabella","Lailah","Abril","Allie","Sariah","Athena","Kaiya","Lena","Rihanna","Kaylyn","Avah","Ashlee","Sylvia","Nathalie","Jakayla","Londyn","Courtney","Cameron","Nina","Jordan","Campbell","Amiah","Charlotte","Selah","Micaela","Alexandra","Paityn","Sofia","Ximena","Jazlyn","Theresa","Halle","Paula","Mylie","Hailey","Aileen","Lara","Destiney","Kyla","India","Yuliana","Nadia","Zoe","Madalyn","Ali","Viviana","Jenna","Katelyn","Christina","April","Emery","Audrey","Julianne","Selina","Lina","Carina","Angelica","Makenzie","Carly","Amirah","Alicia","Mara","Elsie","Eliana","Pamela","Damaris","Michaela","Luz","Alisha","Jasmine","Hailee","Zaniyah","Daphne","Sarah","Myla","Kylie","Regina","Alana","Evangeline","Lindsay","Daniella","Aleena","Chelsea","Rebecca","Audrina","Gwendolyn","Abigayle","Johanna","Nia","Monserrat","Justine","Anna","Miriam","Eliza","Aracely","Kiersten","Ashly","Allison","Shirley","Jaylin","Hayden","Eileen","Noelle","Samara","Yoselin","Savannah","Abby","Emmalee","Kathy","Sienna","Araceli","Makena","Alondra","Larissa","Desiree","Annabella","Phoebe","Hanna","Kendra","Jaelynn","Ada","Cassidy","Sadie","Naomi","Yamilet","Amani","Ruth","Kaylie","Bethany","Maya","Ruby","Jazmyn","Cailyn","Annalise","Carley","Belinda","Tania","Carlee","Maren","Daisy","Vivian","Kiley","Kali","Katie","Miley","Taliyah","Shannon","Lainey","Lorena","Aubree","Joanna","Claire","Rhianna","Giana","Dayami","Adelyn","Mariela","Anya","Celia","Marianna","Ashleigh","Jaycee","Brynn","Keira","Haylee","Macy","Kinley","Nayeli","Gabriella","Aniyah","Eden","Khloe","Aaliyah","Laura","Yazmin","Presley","Hadassah","Riya","Rose","Jordyn","Yaretzi","Savanna","Addyson","Aspen","Alexia","Ashtyn","Sophia","Cristal","Amina","Shaylee","Juliette","Michelle","Amelie","Priscilla","Jazmin","Yareli","Marisa","Zara","Adrianna","Marina","Jaslene","Patricia","Heidy","Cassandra","Kinsley","Tianna","Braelyn","Samantha","Emerson","Aubrie","Marlene","Valery","Raina","Kaylynn","Genevieve","Kasey","Skyla","Morgan","Mariana","Natasha","Elianna","Yesenia","Jamya","Lisa","Aliya","Payton","Christine","Hallie","Kenzie","Sloane","Leilani","Kaila","Evelin","Destiny","Kristin","Caitlyn","Taryn","Mila","Jaylynn","Kamryn","Linda","Mckenzie","Shania","Violet","Selena","Gisselle","Addison","Amelia","Andrea","Karly","Janae","Reese","Cecilia","Ariel","Sonia","Jazmine","Liana","Annabelle","Ayanna","Lucy","Arielle","Delaney","Talia","Maliyah","Maggie","Lyric","Genesis","Leila","Elle","Dayanara","Alaina","Journey","Joselyn","Tatum","Evelyn","Shea","Ally","Carleigh","Norah","Jane","Amara","Serenity","Jimena","Marin","Skye","Jocelyn","Cecelia","Bailey","Haven","Elizabeth","Carlie","Lilian","Amy","Kiera","Judith","Adalyn","Valentina","Giovanna","Abigail","Mackenzie","Meadow","Gloria","Alma","Aryana","Holly","Paola","Sara","Diana","Laylah","Dominique","Reina"};
string lastNames[] = 
{"Durham","Gregory","Lester","Mejia","Mayer","Robinson","Velazquez","Frank","Kramer","Chang","Spencer","Nash","Riddle","Choi","Parks","Hayden","Aguilar","Fletcher","Dickerson","Carson","Perez","Ross","Cross","Alvarez","Burgess","Oliver","Glenn","Price","Mcgee","Duffy","Ray","Espinoza","Estes","Anderson","Chaney","Hurley","Mcneil","Bruce","Nixon","Snow","Lane","Fritz","Lozano","Bowman","Hutchinson","Cook","Haley","Houston","Beltran","Glass","Petty","Archer","Pacheco","Dickson","Butler","Kennedy","Todd","Bonilla","Gordon","Pham","Boyd","Watts","Jensen","Cuevas","Bush","Trujillo","Bentley","Bullock","Stephens","Jennings","Key","Malone","Griffin","Morris","Tanner","Campos","Waller","Bryan","Bean","Obrien","Bates","Hudson","Marquez","Bautista","Eaton","Meyer","Rowe","Shepherd","Donaldson","George","Good","Huerta","Mueller","Craig","Chapman","Munoz","Valenzuela","Sparks","Herman","Cherry","Page","Rojas","Stafford","Finley","Wyatt","Kaufman","Suarez","Palmer","Hamilton","Willis","Prince","Wilkinson","Schaefer","Mercer","Arias","Shah","Wagner","Gould","Case","Chen","Buck","Lucero","Campbell","Guzman","Lowe","Arroyo","Cochran","Mitchell","Compton","Delacruz","Bell","Quinn","Macias","Kim","Blake","Paul","Rush","Bailey","Black","Stewart","Dawson","Joseph","Haney","Reyes","Roth","Henderson","Chase","Jacobson","Harmon","Higgins","Mcmillan","Kent","Christian","Ingram","Wiggins","Crane","Mcmahon","Randolph","Roberts","Mcdowell","Hunter","Hughes","Barrett","Whitney","Barrera","Cardenas","Pittman","Boone","Blanchard","Andrade","Burton","Rogers","Clements","Livingston","Khan","Strickland","Sampson","Woods","Ryan","Buchanan","Baldwin","Park","Hartman","Ibarra","Sloan","Gutierrez","Brewer","Mckenzie","Moss","Kirby","Maxwell","Acevedo","Robbins","Mayo","Spence","Cowan","Peterson","Torres","Dougherty","Charles","Harrell","Collier","Wall","Harrington","Pope","Vaughan","Mcbride","Greer","Lutz","Pratt","Miranda","Gallegos","Haynes","Allison","Crosby","Mays","Whitehead","Wallace","Wong","Poole","Reese","Farley","Bishop","Bird","Yoder","Barton","Mason","Young","Nichols","Short","Leon","Richards","Beard","Mercado","Allen","Nielsen","Manning","Meadows","Thompson","Shannon","Weiss","Hodge","Parker","Berg","Hickman","Odonnell","Knox","Li","Lin","Shea","Mahoney","Woodward","Velez","English","Wood","Rangel","Austin","Garner","Schmitt","Gardner","Wolf","Kerr","Barnett","Walters","Bowers","Huynh","Cannon","Berger","Vaughn","Serrano","Gomez","Howell","Rich","Kirk","Bond","Ellis","Tyler","Ortega","Rios","Odom","Hardy","Proctor","Mcfarland","Ruiz","Sexton","Nicholson","Hooper","Cain","Phelps","Kline","Holden","Mcconnell","Sanford","Chung","Gonzalez","Hubbard","Barajas","Stevens","Fuller","Becker","Benson","Jarvis","Rowland","Erickson","Noble","Brennan","Lynn","Burch","Hart","Farmer","Lynch","Hawkins","Ford","Tapia","Dean","Woodard","Davies","Atkins","Werner","Simmons","Daniels","Macdonald","Gaines","Fleming","Hanna","Clark","Hancock","Zuniga","Glover","Johnston","Le","Bartlett","Rollins","Holder","Ferrell","Wise","Miles","Rosales","Roy","Harding","Parsons","Cooke","Blevins","Cameron","Keller","Davenport","Pace","Hampton","Wells","Bowen","Flynn","Holloway","Moyer","Garrison","Ward","Stark","Fernandez","Davis","Sutton","Klein","Ewing","Ayala","Barr","Sanders","Roach","Cruz","Kelly","Velasquez","Pennington","Hayes","Cline","Singh","Ellison","Arnold","Perry","Gilmore","Singleton","Byrd","Harvey","Lowery","Lara","Dyer","May","Warren","Martin","Skinner","Kaiser","Hunt","Mullins","Chandler","Levy","Hinton","Ballard","Powers","Terrell","Dillon","Hardin","Booker","Krueger","Delgado","Keith","Peters","Phillips","Mclean","Barnes","Potts","Green","Ashley","Francis","Curtis","Molina","Hull","Santos","Frazier","Sims","Riggs","Robles","Hurst","Orr","Dorsey","Love","Moon","Savage","Liu","Fowler","Garza","Wu","Tran","Marsh","Larson","Mills","White","Evans","Mann","Hernandez","Simon","Landry","Elliott","Morrow","Best","Mckinney","Patel","Gay","Carney","Scott","Matthews","Holmes","Moses","Webster","Frey","Vang","Church","Parrish","Harrison","Boyer","Gates","Jenkins","Blair","Oconnell","Maddox","Strong","Leblanc","Cordova","Clarke","Coffey","Summers","Bray","Mathis","Galloway","Duncan","Payne","Rosario","Costa","Duarte","Wilkins","Kelley","Lyons","Reynolds","Ayers","Mclaughlin","Gamble","Fry","Baxter","Montes","Mccormick","Ferguson","Gross","Oneill","Hogan","Schneider","Herring","Horn","Fuentes","Villegas","Alexander","Mora","Norton","Richmond","Mccall","Deleon"};


struct personDetails 
{
  string Name;
  bool sex;
  uint age;
  string DateOfBirth;
  bool HasHome;
  int occupation;
  
};

int yearsSimulated;

vector<personDetails> peopleDetails;

int nameGiving(int i)
{
  int randNum = rand()%(500-0 + 1) + 0;

  return randNum;
}
bool genderGiving(int i)
{
  int randNum = rand()%(1-0 + 1) + 0;

  return randNum;
}

void makingPeople()
{
  population = 100;
  peopleDetails.resize(population);
  
  for (int i = 0; i < population; i++) 
  {
    peopleDetails[i].sex = genderGiving(i);

    if(peopleDetails[i].sex == 0)
    {
      peopleDetails[i].Name = firstFemaleNames[i] + " " + lastNames[i];
    }
    else if(peopleDetails[i].sex == 1)
    {
      peopleDetails[i].Name = firstMaleNames[i] + " " + lastNames[i];
    }

    peopleDetails[i].age = 0;
    peopleDetails[i].DateOfBirth = "10/10/2010";
    peopleDetails[i].HasHome = false;
    peopleDetails[i].occupation = 0;

  }
  
}

void timeMovement()
{
  
  for(int i = 0; i < yearsSimulated; i++)
    {
      cout << "Year is " << i << endl;
      
      for (int x = 0; x < population; x++) 
      {
        peopleDetails[x].age += 1;
        cout << "Age of " << x << ": " << peopleDetails[x].age << endl;
      
      }

      cout << "Next Year?" << endl;
      cin >> i 
    }
}

int main() 
{
  cout << "How many years do you want to simulate?" << endl;
  cin >> yearsSimulated;
  makingPeople();
  timeMovement();
  return 0;
}




