ChLayout(1);
MsgClose();
ChOpen(3,255,0,0,4,#1,#1,0,0);
VoicePlay("G020310101_03_000");
MsgDisp("Honda","......Hm? 
Why are you looking around?");
MsgDisp("主人公","Eh?
I was just looking at the fireflies?");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,1);
VoicePlay("G020310101_03_010");
MsgDisp("Honda","Ah, I see.
I thought you were looking for someone you
knew.");
ChEye(3,1);
ChMouth(3,0);
ChMotion(3,4);
VoicePlay("G020310101_03_020");
MsgDisp("Honda","Remember when we went out, the four of us?
What if we ran into them here again by
chance?");
ChEye(3,0);
ChMotion(3,0);
VoicePlay("G020310101_03_030");
MsgDisp("Honda","If that happened, what would you do?");
MsgDisp("主人公","What would I do......?");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,4);
VoicePlay("G020310101_03_040");
MsgDisp("Honda","If it were me, I'd take your hand and run
away.");
MsgDisp("主人公","Eh......");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0);
VoicePlay("G020310101_03_050");
MsgDisp("Honda","Ah, you look surprised.");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,4);
VoicePlay("G020310101_03_060");
MsgDisp("Honda","But, I'm the most surprised that those
words came out without hesitation.");
MsgDisp("主人公","｛本多＊＊｝......?");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,5);
VoicePlay("G020310101_03_070");
MsgDisp("Honda","——Aah! Look over there, a huge group of
fireflies! Let's go to see them!");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
ChClose(3);
MsgDisp("主人公","(Just now, ｛本多＊＊｝'s face was very
serious huh......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChOpen(3,255,0,0,0,#1,#1,0,0);
