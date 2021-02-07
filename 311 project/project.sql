Create schema Shooting_Game;

create table User_Table
( 
	User_Id NUMERIC(10) NOT NULL,
    User_Fname VARCHAR(50),
    User_Lname VARCHAR(50),
    Country VARCHAR(50),
    IGN VARCHAR(50),
    Email VARCHAR(50),
    Pasword VARCHAR(50),
    Varified boolean,
    Fb_Auth boolean,
    Google_Auth boolean,
    primary key (User_Id)
);

CREATE TABLE Log_In 
(    
    Login_Id int NOT NULL AUTO_INCREMENT, 
    User_Id NUMERIC(10),
    Login_Time TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    Logout_Time TIMESTAMP,
    primary key (Login_Id),
    FOREIGN KEY(User_Id) REFERENCES User_Table(User_Id) ON DELETE CASCADE
);

CREATE TABLE Character_Stat
( 
     Character_Id NUMERIC(10) NOT NULL,
     Character_Name VARCHAR(50),
     User_Id NUMERIC(10) NOT NULL,
     Kills NUMERIC(10),
     Headshot NUMERIC(10),
     AR_Kill NUMERIC(10),
     SMG_Kill NUMERIC(10),
     LMG_Kill NUMERIC(10),
     Pistol_Kill NUMERIC(10),
     Win NUMERIC(10),
     Damage NUMERIC(10),
     Revive NUMERIC(10),
     Game_played NUMERIC(10),
     Shot_Gun NUMERIC(10),
     Sniper_Kill NUMERIC(10),
     primary key (Character_Id, User_Id),
     FOREIGN KEY(User_Id) REFERENCES User_Table(User_Id) ON DELETE CASCADE
);




CREATE TABLE Multiplayer
(    
    Match_Id NUMERIC(10) NOT NULL,  
    User_Id NUMERIC(10) NOT NULL,
    Result_Id NUMERIC(10), 
    Team_Id NUMERIC(10),
    primary key (Match_Id, User_Id),
    FOREIGN KEY(User_Id) REFERENCES User_Table(User_Id) ON DELETE CASCADE
);


CREATE TABLE Messages
(    
    Message_Id NUMERIC(10) NOT NULL unique, 
    User_Id NUMERIC(10) NOT NULL,
    Match_Id NUMERIC(10) NOT NULL,
    message varchar(170),
    primary key (Message_Id),
    FOREIGN KEY(User_Id) REFERENCES User_Table(User_Id) ON DELETE CASCADE,
    FOREIGN KEY(Match_Id) REFERENCES  Multiplayer(Match_Id) ON DELETE CASCADE
);

CREATE TABLE Summary
(    
    Match_Id NUMERIC(10) NOT NULL, 
    User_Id NUMERIC(10) NOT NULL,
    Kills NUMERIC(10),
    Damage NUMERIC(10),
	result_position varchar(20),
    primary key (Match_Id, User_Id),
    FOREIGN KEY(User_Id) REFERENCES User_Table(User_Id) ON DELETE CASCADE,
    FOREIGN KEY(Match_Id) REFERENCES Multiplayer(Match_Id) ON DELETE CASCADE
);


CREATE TABLE Battle_Royale
(    
    Battle_Royale_Id NUMERIC(10) NOT NULL, 
    User_Id NUMERIC(10),
    Result_Id NUMERIC(10), 
    Team_Type VARCHAR(50),
    primary key (Battle_Royale_Id, User_Id),
    FOREIGN KEY(User_Id) REFERENCES User_Table(User_Id) ON DELETE CASCADE
);



insert into user_table values
(111001, 'Salman', 'Alif', 'Bangladesh', 'xyzpn', 'SAlif@gmail', 'salif009', true, false, true),
(111002, 'Kayes', 'Fahim', 'Bangladesh', 'xyzsm', 'KFahim@gmail', 'KFahim501', true, true, true),
(111003, 'Tanzina', 'Meem', 'Bangladesh', 'xyzbb', 'Tanzina@gmail', 'Tanmeem777', true, true, true),
(111004, 'Anil', 'Hasan', 'India', 'xyzsm', 'AnilH@gmail', 'anil838', false, false, true),
(111005, 'Alex', 'Cooper', 'USA', 'abcny', 'AlexK@gmail', 'alex007', true, false, true),
(111007, 'Sheldon', 'jackson', 'UK', 'abcbg', 'Shelly@gmail', 'sheldonJ0007', false, false, false),
(111009, 'James', 'Fraser', 'Scotland', 'abcr', 'Jamie@gmail', 'Fraser20', false, true, false),
(111011, 'Nick', 'Jason', 'USA', 'abcwv', 'Nicky@gmail', 'NickJ695', true, false, false),
(111013, 'Shabbar', 'Islam', 'Pakistan', 'xyzff', 'Shaon@gmail', 'ShaonI111', false, true, true),
(111015, 'Bella', 'Swan', 'USA', 'abcnm', 'SBella@gmail', 'Bellan088', true, true, false);

select * from user_table;



insert into Log_In values 
(11, 111013, '2020-09-21 00:00:01', '2020-09-21 04:50:33'),
(101, 111001, '2020-09-23 11:45:01', '2020-09-24 13:20:57'),
(111, 111002, '2020-09-25 14:52:49', '2020-09-25 22:35:38'),
(0091, 111003, '2020-01-11 12:55:27', '2020-01-12 09:30:11'),
(451, 111007, '2020-05-21 04:45:46', '2020-05-21 09:20:13');
insert into Log_In(User_Id) values 
(111015);
select * from log_in;


insert into Character_Stat values
(991, 'Crypto', 111001, 14, 16, 23, 44, 33, 46, 48, 5862, 1, 80, 25, 65),
(995, 'Bloodhound', 111001, 90, 118, 73, 13, 41, 53, 72, 29280, 3, 22, 65, 33),
(992, 'Wraith', 111001, 107, 126, 52, 75, 16, 65, 21, 36311, 2, 57, 11, 22),
(993, 'Bangalore', 111001, 3193, 3680, 211, 322, 154, 555, 654, 1051231, 886, 678, 345, 77),
(994, 'Pathfinder', 111001, 18, 17, 42, 15, 35, 5, 13, 4737, 9, 19, 25, 35),
(997, 'Mirage', 111013, 3, 1, 8, 6, 14, 7, 6, 1921, 1, 8, 4, 9),

(991, 'Crypto', 111002, 111, 15, 33, 4, 133, 20, 18, 3672, 12, 43, 35, 34),
(995, 'Bloodhound', 111002, 43, 74, 76, 12, 351, 563, 12, 4565, 2, 43, 55, 22),
(992, 'Wraith', 111002, 76, 156, 33, 15, 36, 43, 24, 45431, 4, 43, 3, 12),
(993, 'Bangalore', 111002, 3223, 654, 2345, 64, 134, 143, 654, 265431, 654, 642, 652, 27),
(994, 'Pathfinder', 111002, 32, 432, 32, 12, 52, 11, 21, 5431, 5, 123, 52, 15),
(997, 'Mirage', 111002, 1, 2, 3, 5, 4, 1, 8, 951, 1, 4, 5, 7),

(991, 'Crypto', 111003, 13, 19, 9, 12, 7, 21, 6, 5477, 4, 11, 7, 13),
(995, 'Bloodhound', 111003, 8, 10, 19, 2, 5, 7, 16, 3416, 4, 21, 17, 11),
(992, 'Wraith', 111003, 11, 17, 14, 6, 13, 3, 19, 5434, 5, 21, 17, 6),
(993, 'Bangalore', 111003, 5422, 564, 123, 422, 1214, 15, 32, 45632, 211, 42, 22, 12),
(994, 'Pathfinder', 111003, 54, 21, 532, 542, 31, 15, 42, 2343, 6, 532, 66, 33),
(997, 'Mirage', 111003, 11, 322, 113, 35, 14, 31, 58, 4311, 11, 43, 25, 24),

(991, 'Crypto', 111005, 24, 54, 29, 53, 24, 53, 23, 1678, 13, 32, 43, 23),
(995, 'Bloodhound', 111005, 21, 31, 42, 46, 432, 22, 32, 1234, 1, 521, 44, 22),
(992, 'Wraith', 111005, 321, 42, 653, 536, 33, 23, 43, 3224, 65, 34, 65, 12),
(993, 'Bangalore', 111005, 432, 220, 431, 32, 432, 11, 24, 52322, 36, 55, 76, 111),
(994, 'Pathfinder', 111005, 33, 432, 22, 42, 42, 22, 43, 5431, 4, 44, 12, 21),

(991, 'Crypto', 111007, 34, 15, 39, 32, 37, 11, 36, 4122, 21, 41, 17, 12),
(995, 'Bloodhound', 111007, 442, 22, 42, 22, 15, 4, 22, 422, 42, 1, 3, 5),
(993, 'Bangalore', 111007, 542, 34, 5433, 35, 77, 543, 33, 4212, 46, 567, 54, 72),
(994, 'Pathfinder', 111007, 32, 44, 22, 45, 345, 45, 7, 98764, 23, 49, 8, 9),
(997, 'Mirage', 111007, 32, 32, 443, 64, 76, 31, 75, 1032, 12, 65, 3, 9);

select * from character_stat;


insert into Multiplayer values
(101, 111001, 997701, 551),
(101, 111002, 997702, 551),
(101, 111003, 997703, 551),
(103, 111005, 997704, 553),
(103, 111007, 997705, 553),
(103, 111013, 997707, 553);
select * from Multiplayer;


insert into Messages values
(771, 111001, 101, 'Hello'),
(772, 111002, 101, 'whats up?'),
(773, 111003, 101, 'we guys r playing really well today.'),
(774, 111005, 103, 'there is an enemy.'),
(775, 111007, 103, 'yeah. i got it. dont worry'),
(776, 111013, 103, 'overconfident....you missed. haha...');
select * from messages;

insert into Summary values
(101, 111001, 12, 7, '1st'),
(101, 111002, 23, 18, '1st'),
(101, 111003, 12, 7, '1st'),
(103, 111005, 9, 17, '4th'),
(103, 111007, 5, 11, '4th'),
(103, 111013, 10, 9, '4th');
select * from summary;

insert into Battle_Royale values
(33991, 111015, 995501, 'x'),
(33991, 111013, 995502, 'x'),
(33992, 111011, 995503, 'y'),
(33992, 111009, 995504, 'y'),
(33993, 111007, 995505, 'z'),
(33993, 111005, 995506, 'z');
select * from Battle_Royale;



