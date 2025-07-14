SEPlay("EV_SE_SCHOOL_002");
BGOpen("sc310",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","There's nice weather today.
Should we eat our lunch on the rooftop?");
SEPlay("EV_SE_787");
Wait(50,0);
MsgDisp("主人公","(Oh, a text message.
......Ah, it's from ｛七ツ森＊｝.
Is it an invitation for lunch?)");
MsgDisp("主人公","(\"Where? Music now. In the room.
Really......Really, the room. The
corner......\" Is this code......∋)");
MsgDisp("主人公","Music in the room.
He probably means the music room?
Let's go!");
SEStop("EV_SE_SCHOOL_002",1.5);
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
SEPlay("EV_SE_DOOR_013");
BGOpen("sc340",0);
ScrFadeIn(0);
MsgDisp("主人公","......｛七ツ森＊｝?");
MsgDisp("主人公","(Huh?
I guess he isn't here......)");
VoicePlay("D010400200_04_000");
MsgDisp("Nanatsumori?","............");
MsgDisp("主人公","Zzz......");
MsgClose();
ScrFadeOut(0);
BGMPlay("BGM_C04_NANA_B",0.01);
StlOpen("ev_04_07");
StlMouth(4,0);
ScrFadeIn(0);
VoicePlay("D010400200_04_010");
MsgDisp("Nanatsumori","............");
MsgDisp("主人公","He really fell asleep here.");
MsgDisp("主人公","......Hehe. He looks like he's sleeping
well, too.");
MsgDisp("主人公","Did you stay up too late browsing
the net?");
VoicePlay("D010400200_04_020");
MsgDisp("Nanatsumori","Mnn......");
MsgDisp("主人公","(He's still fast asleep......)");
VoicePlay("D010400200_04_030");
MsgDisp("Nanatsumori","Mnnn......");
MsgDisp("主人公","Hehe!
Your glasses are falling off.");
MsgDisp("主人公","Won't they realize you're Nana-kun like
this?");
VoicePlay("D010400200_04_040");
MsgDisp("Nanatsumori","Na......na......");
MsgDisp("主人公","Hehe!");
VoicePlay("D010400200_04_050");
MsgDisp("Nanatsumori","......Hm?");
MsgClose();
ScrFadeOut(0);
StlClose();
BGMVol(0.5,2);
MsgClose();
BGOpen("sc340",0);
ChLayout(1);
ChNanaType(0);
ChOpen(4,254,0,2,4,0,#1,0,0);
SEPlay("EV_SE_616",0,0.4);
SEWait();
ScrFadeIn(0);
VoicePlay("D010400200_04_060");
MsgDisp("Nanatsumori","......Good morning.");
MsgDisp("主人公","Good morning.
Did you sleep okay?");
VoicePlay("D010400200_04_070");
MsgDisp("Nanatsumori","Kind of.
I'm hungry......");
MsgDisp("主人公","Lunch break will be over soon, you know?
Want to eat together?");
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,1,1);
VoicePlay("D010400200_04_080");
MsgDisp("Nanatsumori","I'll eat.");
MsgDisp("主人公","Okay then, the weather is really nice so
let's eat on the rooftop!");
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,2,1);
VoicePlay("D010400200_04_090");
MsgDisp("Nanatsumori","Eh...... I just woke up and it's so bright
up there......I'll burn......");
MsgDisp("主人公","Geez.
You're not a vampire.");
ChEye(4,5);
ChMouth(4,5);
ChMotion(4,0,1);
VoicePlay("D010400200_04_100");
MsgDisp("Nanatsumori","Rawr.");
MsgDisp("主人公","Come on, lunch break will end soon!
Let's go!");
ChEye(4,2);
ChMouth(4,3);
VoicePlay("D010400200_04_110");
MsgDisp("Nanatsumori","Yes ma-am.");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
ChPrmTblAdd(4,0);
