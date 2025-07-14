BGOpen("sc812",0); 
ScrFadeIn(0); 
MsgClose(); 
SEPlay("EV_SE_544"); 
ChOpen(7,254,0,0,0,#1,#1,0,0); 
VoicePlay("Q010703100_07_000"); 
MsgDisp("Mikage","What are you doing?
Go back to your room already.");
MsgDisp("主人公","Ah, ｛御影＊＊｝. Will do!");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
VoicePlay("Q010703100_07_010");
MsgDisp("Mikage","How are you enjoying yourself?
The real charm of the school trip starts
here, don't you agree?");
MsgDisp("主人公","Huh?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("Q010703100_07_020");
MsgDisp("Mikage","Things like quietly slipping into your
futon and having girl talk?
Even I know of that.");
MsgDisp("主人公","｛御影＊＊｝ has experience with that
as well?");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("Q010703100_07_030");
MsgDisp("Mikage","Not at all.
Truth is, I want to join in on one too.");
SEPlay("EV_SE_863",0,0.1);
SEPlay("EV_SE_868",0,0.2);
SEPlay("EV_SE_867",0,0.2);
Wait(20,0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,4);
VoicePlay("Q010703100_07_040");
MsgDisp("Mikage","What's going on?
I'll be going over there to deal with
that.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("Q010703100_07_050");
MsgDisp("Mikage","You too, go have fun back in your room!
Or better yet, go to sleep!");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(7);
MsgDisp("主人公","Okay!");
SEStop("EV_SE_867",1);
SEStop("EV_SE_863",1);
SEStop("EV_SE_868",1);
MsgClose();
ScrFadeOut(0);
