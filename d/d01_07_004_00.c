ScrFadeOut(0);
BGOpen("wf600",1);
ChLayout(1);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChOpen(7,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("D010700400_07_000");
MsgDisp("Mikage","Gather round!
Make sure you're not forgetting anything.");
SEPlay("EV_SE_744",0.3,0.3);
Wait(5,0);
SEPlay("EV_SE_608",0.5,0.5);
Wait(80,0);
SEStop("EV_SE_744",1);
SEStop("EV_SE_608",2);
VoicePlay("D010700400_42_000");
MsgDisp("Male Student A","Huh...
Is it over already?");
VoicePlay("D010700400_44_000");
MsgDisp("School Girl A","I don't want to go home already!");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
VoicePlay("D010700400_07_010");
MsgDisp("Mikage","Yeah, me neither.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("D010700400_07_020");
MsgDisp("Mikage","Okay then, when I was a student, there was
one thing I wanted to do.");
MsgDisp("主人公","Eh, what is it?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("D010700400_07_030");
MsgDisp("Mikage","Do you guys want to go with me?");
VoicePlay("D010700400_44_010");
MsgDisp("School Girl A","Eh, what is it?
I'll go!");
VoicePlay("D010700400_42_030");
MsgDisp("Male Student A","Me too!");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("D010700400_07_040");
MsgDisp("Mikage","Thanks.
Alright then, give me your hand.");
MsgDisp("主人公","S-Sure?");
SEPlay("EV_SE_504");
SEWait();
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,4);
VoicePlay("D010700400_07_050");
MsgDisp("Mikage","Everyone do the same, line up and hold
hands～!");
MsgClose();
ScrFadeOut(0);
ChClose(7,0,0);
BGMPlay("BGM_C07_MIKAGE_A",0.01);
StlOpen("ev_07_10");
StlEye(7,1);
StlMouth(7,1);
ScrFadeIn(0);
VoicePlay("D010700400_07_060");
MsgDisp("Mikage","I love you guys～!");
StlEyeOpenLevel(7,5);
SEPlay("EV_SE_GAYA_022");
VoicePlay("D010700400_44_020");
MsgDisp("School Girl A","Ahahaha!
Mikage-sensei, what in the world are you
doing?");
VoicePlay("D010700400_41_050");
MsgDisp("Male Student B","I love Mikagechi too!");
VoicePlay("D010700400_45_000");
MsgDisp("School Girl B","Eh?
Well, I love Mikage-sensei too!");
StlEyeOpenLevel(7,0);
SEPlay("EV_SE_GAYA_016");
VoicePlay("D010700400_38_000");
MsgDisp("Students","Hahaha!");
MsgDisp("主人公","Hehe!");
SEStop("EV_SE_GAYA_016",5);
StlEye(7,0);
StlMouth(7,0);
VoicePlay("D010700400_07_070");
MsgDisp("Mikage","Isn't it your turn now?");
MsgDisp("主人公","Eh...
Ehh∋");
StlEyeOpenLevel(7,5);
VoicePlay("D010700400_07_080");
MsgDisp("Mikage","Come on, say something!");
MsgDisp("主人公","Uhm...
I-I love ｛御影＊＊｝ too!");
StlNear(1,0,15);
Wait(15,1);
StlEyeOpenLevel(7,0);
StlMouth(7,1);
VoicePlay("D010700400_07_090");
MsgDisp("Mikage","Alright, you pass.");
StlEyeOpenLevel(7,#1);
MsgDisp("主人公","(Ah, ｛御影＊＊｝'s hand...)");
VoicePlay("D010700400_42_080");
MsgDisp("Male Student A","I also love Vice Principal Himuro!");
StlEye(7,1);
StlMouth(7,0);
VoicePlay("D010700400_07_100");
MsgDisp("Mikage","Ahhh?
Vice Principal Himuro?");
VoicePlay("D010700400_41_090");
MsgDisp("Male Student B","Mikagechi, that scared you way too much～!");
SEPlay("EV_SE_GAYA_016");
VoicePlay("D010700400_38_010");
MsgDisp("Students","Hahaha!");
StlEyeOpenLevel(7,5);
StlMouth(7,1);
VoicePlay("D010700400_07_110");
MsgDisp("Mikage","Shut up.");
MsgDisp("主人公","Hehe!");
SEStop("EV_SE_GAYA_016",2);
BGMStop();
MsgClose();
ScrFadeOut(0,0);
StlClose();
SEWait();
ChPrmTblAdd(7,0);
