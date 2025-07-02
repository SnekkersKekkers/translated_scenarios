BGMStop();
BGOpen("sc710",0);
ScrFadeIn(0);
MsgDisp("主人公","Haa...I missed a note.
I inconvenienced everyone.");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(32,254,0,0,0,-1,-1,0,0);
VoicePlay("P553200005_32_000");
MsgDisp("Vice Principal Himuro","What are you doing 
by yourself here?");
MsgDisp("主人公","Ah, Himuro-sensei.
I inconvenienced everyone and 
I don't know how to face them...");
ChEye(32,1);
ChMouth(32,0);
ChEyeOpenLevel(32,0);
VoicePlay("P553200005_32_010");
MsgDisp("Vice Principal Himuro","...Hm.
What have you, yourself learned as a 
member of the wind instrument club?");
MsgDisp("主人公","How to play an instrument and...");
ChEye(32,0);
ChMouth(32,0);
VoicePlay("P553200005_32_020");
MsgDisp("Vice Principal Himuro","And?");
MsgDisp("主人公","To enjoy music with everyone.");
ChEye(32,0);
ChMouth(32,2);
VoicePlay("P553200005_32_030");
MsgDisp("Vice Principal Himuro","Very well. If you know, then quickly join
your friends and take the next steps.");
MsgDisp("主人公","Yes!");
MsgClose();
ScrFadeOut(0);
ChClose(32,0,0);
