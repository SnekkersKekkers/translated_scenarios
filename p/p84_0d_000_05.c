ScrFadeIn(0);
BGMStop();
VoicePlay("P840D00005_45_000");
MsgDisp("Girl","Uugh...
Mom....");
MsgDisp("主人公","Hey, don't cry!
Do you want to tell me your name?");
VoicePlay("P840D00005_45_010");
MsgDisp("Girl","Uwaaah!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
SEWait();
ChOpen(21,254,5,0,4,#1,#1,0,1);
ChOpen(22,254,0,2,0,#1,#1,0,2);
VoicePlay("P840D00005_21_000");
MsgDisp("Michiru","That's no good, Mari.
First you have to calm that kid down.");
MsgDisp("主人公","Calm them down...
Ah!
Would sweets be good?");
ChEye(22,2);
ChMouth(22,0);
ChMotion(22,2,1);
VoicePlay("P840D00005_22_000");
MsgDisp("Hikaru","Ahー...Isn't that a last resort? You have
to put yourself in the kid's shoes first.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChClose(22);
VoicePlay("P840D00005_22_010");
MsgDisp("Hikaru","Okay, enough crying～♪ Why don't you give
me a big smile? These big sisters will
look for your Mom together▼");
VoicePlay("P840D00005_45_020");
MsgDisp("Girl","...Hehe, yeah!");
MsgClose();
SEPlay("EV_SE_544",0,0.5);
ChOpen(22,254,0,0,3,#1,#1,0,2);
ChEye(21,4);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("P840D00005_21_010");
MsgDisp("Michiru","I guess it was Hikaru's victory?");
MsgDisp("主人公","(Even though I was in the student council
for three years, In the end I caused
trouble... sigh.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(21,0,0);
ChClose(22,0,0);
