BGOpen("sc710",0);
ChLayout(1);
MsgClose();
ChOpen(5,254,0,0,4,-1,-1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(5);
VoicePlay("F110510000_05_000");
MsgDisp("Hiiragi","｛主人公｝.");
MsgDisp("主人公","｛柊＊＊＊｝,
are you enjoying the festival?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("F110510000_05_010");
MsgDisp("Hiiragi","Yes. I was permitted to work the
information desk.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("F110510000_05_020");
MsgDisp("Hiiragi","The student council has been alternating
jobs, and the information desk was open.");
MsgDisp("主人公","You need to take a break, you know? If
not, your body won't be able to handle it.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("F110510000_05_030");
MsgDisp("Hiiragi","I am fine.
Though, my stomach is a bit full.");
MsgDisp("主人公","Huh?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("F110510000_05_040");
MsgDisp("Hiiragi","It is my responsibility to guide people,
and I have been checking the stalls as
well.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("F110510000_05_050");
MsgDisp("Hiiragi","There are more yakisoba stands than
what we have on record.");
MsgDisp("主人公","Have you been counting?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("F110510000_05_060");
MsgDisp("Hiiragi","Yes.
The flavors, too.
Because of that, I am now full.");
MsgDisp("主人公","So you really tried them all...");
ChEye(5,0);
ChMouth(5,3);
ChMotion(5,4);
VoicePlay("F110510000_05_070");
MsgDisp("Hiiragi","Of course. If I had not tested them, I
could not recommend them to customers.");
ChEye(5,3);
ChMouth(5,2);
VoicePlay("F110510000_45_000");
MsgDisp("Woman Customer","Clerk-san, the yakisoba stand that
you recommended was delicious. 
Do you have any sweets recommendations?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("F110510000_05_080");
MsgDisp("Hiiragi","Excuse me. 
I will see you later.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(5);
VoicePlay("F110510000_05_090");
MsgDisp("Hiiragi","My apologies, I have not studied the 
sweets options enough. Yakisoba is my 
specialty.");
MsgDisp("主人公","(Haha, he's the yakisoba information
clerk!)");
MsgClose();
ScrFadeOut(0,0);
