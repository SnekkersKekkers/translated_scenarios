SEPlay("EV_SE_DOOR_014");
BGOpen("ar100",0);
ScrFadeIn(0);
VoicePlay("G110400300_34_000");
MsgDisp("Clerk","Welcome.");
MsgDisp("主人公","(Phew... I need to take a break from
Habatcher coverage. I'm so thirsty.)");
SEStop("EV_SE_DOOR_014");
MsgClose();
ScrFadeOut(0);
MsgClose();
BGOpen("ev004",0);
ChNanaType(1);
ChOpen(4,100,1,0,0,#1,#1,0,0);
BGMPlay("BGM_C04_NANA_A");
ScrFadeIn(0);
VoicePlay("G110400300_04_000");
MsgDisp("Nanatsumori","Yo, nice work.");
MsgDisp("主人公","Ah, ｛七ツ森＊｝.
Are you working today?");
ChEye(4,0);
ChMouth(4,2);
VoicePlay("G110400300_04_010");
MsgDisp("Nanatsumori","Yeah.
We're both working hard then.");
MsgDisp("主人公","Hehe!");
VoicePlay("G110400300_04_020");
MsgDisp("Nanatsumori","Umm, are you reporting for the Habatcher
news?");
MsgDisp("主人公","Yeah. I'm writing about the fun things and
daily life about Habataki City and turning
them into articles.");
ChEye(4,0);
ChMouth(4,0);
VoicePlay("G110400300_04_030");
MsgDisp("Nanatsumori","Woah...");
VoicePlay("G110400300_04_040");
MsgDisp("Nanatsumori","So, what did you write for today?");
MsgDisp("主人公","I'm still writing notes so I'll make a
summary of it soon.");
ChEye(4,0);
ChMouth(4,2);
VoicePlay("G110400300_04_050");
MsgDisp("Nanatsumori","Okay then, sorry for interrupting you.
It's time for me to take pictures so I'm
about to go soon.");
MsgClose();
ScrFadeOut(0);
ChClose(4);
MsgClose();
BGOpen("ar100",0);
ChLayout(1);
ChNanaType(1);
ChOpen(4,35,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Good luck at work!");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1);
VoicePlay("G110400300_04_060");
MsgDisp("Nanatsumori","You too.
See ya.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(4,0,30);
Wait(40,1);
SEPlay("EV_SE_DOOR_014");
MsgDisp("主人公","(Alright, time to compile my news notes!)");
SEStop("EV_SE_DOOR_014");
MsgClose();
ScrFadeOut(0,0);
