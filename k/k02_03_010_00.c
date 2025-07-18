BGMStop();
BGOpen("ho000",0);
ChClose(3);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChOpen(3,255,0,0,0,#1,#1,0,0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
ScrFadeIn(0);
MsgDisp("主人公","Thanks for walking me home.");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,2);
VoicePlay("K020301000_03_000");
MsgDisp("Honda","I couldn't find the right timing to give
this to you until now.");
MsgDisp("主人公","Hm?");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1);
ChEyeOpenLevel(3,0);
SEPlay("EV_SE_665");
SEWait();
VoicePlay("K020301000_03_010");
MsgDisp("Honda","Here's your present!
Today's your birthday, right?");
MsgDisp("主人公","Could it be that...you had this with you
this whole time?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,4);
VoicePlay("K020301000_03_020");
MsgDisp("Honda","Right, right.
I did my best to hide it from you.");
ChMouth(3,4);
ChMouth(3,0);
ChMotion(3,0);
VoicePlay("K020301000_03_030");
MsgDisp("Honda","Since it'd be weird to suddenly give you a
present at the shrine, right?");
MsgDisp("主人公","Hehe, I see.");
ChMouth(3,0);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("K020301000_03_040");
MsgDisp("Honda","But it was worth hiding it.
I got to see your surprised face.");
MsgDisp("主人公","Geez...");
ChEye(3,3);
ChMotion(3,3);
VoicePlay("K020301000_03_050");
MsgDisp("Honda","Well, I'm going home.
Again, please take care of me this year!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(3);
Wait(30);
MsgDisp("主人公","(｛本多＊＊｝ celebrated my birthday...
This year is going to be a good year!)");
MsgClose();
ScrFadeOut(0,0);
