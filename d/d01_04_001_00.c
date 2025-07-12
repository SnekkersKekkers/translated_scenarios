BGOpen("ho210",2);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_787");
SEWait();
MsgDisp("主人公","Ah......
｛七ツ森＊｝ sent me a message.");
MsgDisp("主人公","\"I'm at the park nearby\"
......Eh, ｛七ツ森＊｝, is around here∋");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ex000",2);
SEPlay("EV_SE_FOOT_RUN_KEEP_ALONE");
SEWait();
ScrFadeIn(0);
MsgDisp("主人公","*Panting*......");
VoicePlay("D010400100_04_000");
MsgDisp("Nanatsumori?","You didn't have to run, you know.");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChNanaType(1);
ChOpen(4,35,0,4,3,#1,#1,0,0,0,60);
MsgDisp("主人公","｛七ツ森＊｝!
It's because you surprised me......");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("D010400100_04_010");
MsgDisp("Nanatsumori","Yeah.
Thank you.");
MsgDisp("主人公","Eh?");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("D010400100_04_020");
MsgDisp("Nanatsumori","I didn't think you would actually
come. You could have just brushed me
off with a reply.");
MsgDisp("主人公","I wouldn't do something like that......
You came all this way here.");
ChEye(4,4);
ChMouth(4,3);
ChMouthOpenLevel(4,0);
VoicePlay("D010400100_04_030");
MsgDisp("Nanatsumori","…………");
ChEye(4,0);
ChMotion(4,1,1);
ChMouthOpenLevel(4,#1);
VoicePlay("D010400100_04_040");
MsgDisp("Nanatsumori","Over there.
Let's sit on the bench.");
MsgDisp("主人公","Sure.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0);
ChClose(4);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
StlOpen("ev_04_10");
StlEye(4,0);
StlMouth(4,0);
BGMPlay("BGM_C04_NANA_B",0.01);
ScrFadeIn(0);
MsgDisp("主人公","Yep～, so yummy～▼
Cream is really the best!");
StlEye(4,0);
StlMouth(4,0);
StlEyeOpenLevel(4,5);
VoicePlay("D010400100_04_050");
MsgDisp("Nanatsumori","I get it but......
Look, there's cream stuck on your
mouth.");
MsgDisp("主人公","Ah......");
StlEye(4,0);
StlMouth(4,0);
VoicePlay("D010400100_04_060");
MsgDisp("Nanatsumori","Okay, I got it.");
MsgDisp("主人公","O-Okay......Thanks.");
StlEye(4,1);
StlMouth(4,1);
StlCheek(4,10);
VoicePlay("D010400100_04_070");
MsgDisp("Nanatsumori","Don't blush because of this.
You'll make me blush too.");
MsgDisp("主人公","......Hehe!");
StlEye(4,0);
StlMouth(4,0);
VoicePlay("D010400100_04_080");
MsgDisp("Nanatsumori","As congratulations for me being on the
cover of the magazine, a member of the
staff there gave me this gift.");
StlEye(4,0);
StlMouth(4,0);
StlEyeOpenLevel(4,5);
VoicePlay("D010400100_04_090");
MsgDisp("Nanatsumori","And, turns out it's really delicious 
so I wanted to hurry here and share it 
with you.");
MsgDisp("主人公","I see.
｛七ツ森＊｝, thank you.");
StlEye(4,0,0);
StlMouth(4,0);
StlEyeOpenLevel(4,0,1);
VoicePlay("D010400100_04_100");
MsgDisp("Nanatsumori","The pleasure is mine.
I'm glad we get to share this happiness
together.");
MsgDisp("主人公","Yeah!
Uhm......");
StlEye(4,0,0);
StlMouth(4,0);
StlEyeOpenLevel(4,5,1);
VoicePlay("D010400100_04_110");
MsgDisp("Nanatsumori","Hmm?");
MsgDisp("主人公","Do I still have cream on my mouth?");
StlEye(4,0);
StlMouth(4,1);
StlCheek(4,10);
VoicePlay("D010400100_04_120");
MsgDisp("Nanatsumori","Eh∋");
BGMVol(0.5,2);
MsgClose();
ScrFadeOut(0);
StlClose();
MsgClose();
BGOpen("ex000",2);
SEPlay("EV_SE_544",0,0.4);
ChNanaType(1);
ChOpen(4,35,0,2,4,#1,#1,9,0);
ScrFadeIn(0);
ChMotion(4,2,1);
VoicePlay("D010400100_04_130");
MsgDisp("Nanatsumori","No......
There isn't, not anymore.");
MsgDisp("主人公","Good.
It was embarrassing so I keep checking to
see if there's anymore left.");
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,0,1);
VoicePlay("D010400100_04_140");
MsgDisp("Nanatsumori","Not this again......
You're saying cute stuff again......");
MsgDisp("主人公","Huh?");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,2,1);
VoicePlay("D010400100_04_150");
MsgDisp("Nanatsumori","It's nothing.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
ChCheek(4,0);
VoicePlay("D010400100_04_160");
MsgDisp("Nanatsumori","Alright then, us good boys and girls
should get home before the big bad wolf
shows up.");
MsgDisp("主人公","Hehe, yeah!");
ChEye(4,4);
ChMouth(4,3);
VoicePlay("D010400100_04_170");
VoiceEVSPlay(4);
MsgDisp("Nanatsumori","Cya later.
｛主人公｝, good night.");
MsgDisp("主人公","Good night, ｛七ツ森＊｝.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(4,0,30);
MsgDisp("主人公","(The sweets were delicious but......
Feeling ｛七ツ森＊｝'s hand on my cheek
made my heart race like crazy......)");
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(4,0);
