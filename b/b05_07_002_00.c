MsgClose();
BGOpen("tr510",0);
ChOpen(7,255,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
SEPlay("EV_SE_779");
ChEye(7,1);
ChMouth(7,4);
ChMotion(7,0,1);
Wait(50,0);
VoicePlay("B050700200_41_000");
MsgDisp("Male Customer","Ah, that's dangerous!");
VoicePlay("B050700200_48_000");
MsgDisp("Staff","Please get away from that horse∈");
ChEye(7,1);
ChMouth(7,4);
ChMotion(7,4);
VoicePlay("B050700200_07_000");
MsgDisp("Mikage","That way!");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
ChClose(7);
MsgDisp("主人公","Eh, ｛御影＊＊｝∋");
SEPlay("EV_SE_583",0,0.5);
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_780");
SEWait();
SEPlay("EV_SE_779");
SEWait();
Wait(50,0);
StlOpen("ev_07_03");
BGMPlay("BGM_C07_MIKAGE_I",0.01);
ScrFadeIn(0);
StlEye(7,0);
StlMouth(7,0);
VoicePlay("B050700200_07_010");
MsgDisp("Mikage","Calm down.
You're a good girl, Momo-chan.");
MsgDisp("主人公","(Eh...Momo-chan?)");
StlEye(7,0);
StlMouth(7,1);
StlEyeOpenLevel(7,5);
VoicePlay("B050700200_07_020");
MsgDisp("Mikage","It's alright.
It's me, you understand?");
SEPlay("EV_SE_780");
SEWait();
StlEye(7,0,0);
StlMouth(7,0);
StlEyeOpenLevel(7,0,1);
VoicePlay("B050700200_07_030");
MsgDisp("Mikage","Calm down...");
MsgDisp("主人公","(｛御影＊＊｝, amazing...
He's calmed down an enraged horse...)");
StlEye(7,0);
StlMouth(7,1);
VoicePlay("B050700200_07_040");
MsgDisp("Mikage","Oh... got it.
It's me, your lover.");
MsgDisp("主人公","Ehh∋");
SEPlay("EV_SE_779",0,0.8);
SEWait();
StlEye(7,1);
StlMouth(7,0);
VoicePlay("B050700200_07_050");
MsgDisp("Mikage","Shh.");
StlEye(7,0);
StlMouth(7,1);
VoicePlay("B050700200_07_060");
MsgDisp("Mikage","...Good girl.");
MsgDisp("主人公","(Hehe, looks like she's become completely 
well-behaved.
But, a lover he says...)");
MsgClose();
ScrFadeOut(0);
StlClose();
BGMVol(0.5,2);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("tr510",0);
ChOpen(7,255,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","｛御影＊＊｝, do you know that horse?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,4);
VoicePlay("B050700200_07_070");
MsgDisp("Mikage","Yeah, I was there when she was born.
From then on, she was my lover.");
MsgDisp("主人公","Hehe!
So that's how it is.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("B050700200_07_080");
MsgDisp("Mikage","Yeah, but she's normally a kind girl...");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("B050700200_07_090");
MsgDisp("Mikage","...I see.");
MsgDisp("主人公","Eh?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("B050700200_07_100");
MsgDisp("Mikage","She saw that I brought a cute girl with
me, and got jealous.");
MsgDisp("主人公","Ehh?");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(7,0);
