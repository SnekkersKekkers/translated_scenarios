MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I fell...
Even though it was my last show...)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(3,254,0,0,4,-1,-1,0,0);
VoiceEVSPlay(3);
VoicePlay("P740300005_03_000");
MsgDisp("Honda","｛主人公｝, 
Are you alright?");
MsgDisp("主人公","Uuugh,
I'm so embarrassed...");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("P740300005_03_010");
MsgDisp("Honda","Ehh? Why? 
You have no reason to be embarrassed.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1,1);
VoicePlay("P740300005_03_020");
MsgDisp("Honda","Even though you fell,
you did your best until the end.
You were more beautiful than anything, 
and anyone.");
MsgDisp("主人公","｛本多＊＊｝...");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("P740300005_03_030");
MsgDisp("Honda","So, hold your chin up high!
My bride!");
MsgDisp("主人公","Ehh...∋
T-thank you, ｛本多＊＊｝.");
MsgDisp("主人公","(I might have failed but, I'm glad
I continued with the Handicrafts club
for the three years until now)");
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
