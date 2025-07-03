BGOpen("sc320",0);
ChLayout(1);
MsgClose();
BGMPlay("BGM_C07_MIKAGE_A",0.01);
ChOpen(7,254,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("D010500200_07_000");
MsgDisp("Mikage","Today we will continue on with DNA
structures.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("D010500200_07_010");
MsgDisp("Mikage","It may be a pain to remember but......
Just accept it and try to learn.");
SEPlay("EV_SE_GAYA_008",0,0.5);
VoicePlay("D010500200_38_000");
MsgDisp("Students","Eh?");
Wait(30,0);
SEStop("EV_SE_GAYA_008",1.5);
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
BGOpen("sc300",0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ScrFadeIn(0);
SEPlay("EV_SE_834",1,0.5);
Wait(50,1);
VoicePlay("D010500200_40_010");
MsgDisp("Male Student A","Other side!　Come on!");
MsgDisp("主人公","(The field is full of people......
Looks like there's another class out
there playing soccer.)");
VoicePlay("D010500200_39_020");
MsgDisp("Male Student B","Hiiragi!　Here!");
MsgDisp("主人公","(Is that ｛柊＊＊＊｝'s class?)");
VoicePlay("D010500200_40_030");
MsgDisp("Male Student A","Ohh!");
SEStop("EV_SE_834",2);
SEPlay("EV_SE_726",0,0.5);
SEWait();
MsgClose();
ScrFadeOut(0,0);
VoicePlay("D010500200_05_000");
MsgDisp("Hiiragi","Ahh∋");
BGMPlay("BGM_C05_HIIRAGI_B",0.01);
StlOpen("ev_05_08");
StlEye(5,0);
StlMouth(5,0);
ScrFadeIn(0);
SEPlay("EV_SE_725",0.5);
Wait(60,0);
VoicePlay("D010500200_40_040");
MsgDisp("Male Student A","O-Oy!　Are you okay∋");
VoicePlay("D010500200_05_010");
MsgDisp("Hiiragi","Yeah, but was that a goal just now∋");
SEStop("EV_SE_725",1);
VoicePlay("D010500200_40_050");
MsgDisp("Male Student A","Ahh, that kick was a little
slow but it was right on course!");
StlEye(5,1);
StlMouth(5,1);
VoicePlay("D010500200_05_020");
MsgDisp("Hiiragi","I got one for the first time!
It made me fall over, though.");
VoicePlay("D010500200_38_010");
MsgDisp("Students","Hahaha, nice goal∈");
BGMVol(0.5,2);
MsgClose();
ScrFadeOut(0,0);
StlClose();
BGOpen("sc300",0);
ScrFadeIn(0);
MsgDisp("主人公","(What a relief......
It's a good thing ｛柊＊＊＊｝ wasn't
injured.)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
ChOpen(7,254,1,0,0,-1,-1,0,0);
ChEyeOpenLevel(7,0);
VoiceEVSPlay(7);
VoicePlay("D010500200_07_020");
MsgDisp("Mikage","｛主人公｝.");
MsgDisp("主人公","Ah, sensei.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("D010500200_07_030");
MsgDisp("Mikage","Don't \"Ah, sensei\" me.
I know it's boring, but please pay
attention.");
MsgDisp("主人公","Sorry......");
SEPlay("EV_SE_GAYA_024");
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc530",0);
ScrFadeIn(0);
MsgClose();
SEPlay("EV_SE_544");
ChOpen(5,30,0,0,4,-1,-1,0,0);
MsgDisp("主人公","Ah, ｛柊＊＊＊｝!
Earlier you scored a goal, huh?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoiceEVSPlay(5);
VoicePlay("D010500200_05_030");
MsgDisp("Hiiragi","｛主人公｝, were you watching?
It's my first ever goal.");
MsgDisp("主人公","Nice, congratulations!");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("D010500200_05_040");
MsgDisp("Hiiragi","Thank you.
But you shouldn't get distracted during
class, okay?");
MsgDisp("主人公","Ugh......Yes sir.");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
ChPrmTblAdd(5,0);
