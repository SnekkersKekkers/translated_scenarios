MsgClose();
ScrFadeOut(0);
ChClose(5,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("wf221",0);
ChLayout(1);
ChOpen(5,255,0,0,4,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","The wind feels good, huh?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B050500000_05_000");
MsgDisp("Hiiragi","Yeah.
I think it's calming......");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B050500000_05_010");
MsgDisp("Hiiragi","Over here.");
SEPlay("EV_SE_727",0,0.8);
SEWait();
MsgDisp("主人公","Huh?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("B050500000_05_020");
MsgDisp("Hiiragi","The deck of the ship looks exactly
like the stage.");
MsgDisp("主人公","Hehe, that's true.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("B050500000_05_030");
MsgDisp("Hiiragi","I guess it's my intuition as an actor.
Is that weird?");
SEPlay("EV_SE_729",0.6);
Wait(30,0);
MsgDisp("主人公","Uwaah......
So many seagulls!");
ChEye(5,0);
ChMouth(5,2);
ChMotion(5,0,1);
VoicePlay("B050500000_05_040");
MsgDisp("Hiiragi","So suddenly too, I wonder......");
MsgDisp("主人公","I wonder if they think we're
going to feed them?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B050500000_05_050");
MsgDisp("Hiiragi","I get it.
......Wait here a minute.
I'll go buy some.");
MsgClose();
SEStop("EV_SE_729",1);
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(5);
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
StlOpen("ev_05_02");
StlEye(5,0);
StlMouth(5,0);
BGMPlay("BGM_C05_HIIRAGI_B",0.01);
ScrFadeIn(0);
VoicePlay("B050500000_05_060");
MsgDisp("Hiiragi","Here!");
SEPlay("EV_SE_728",0,0.8);
SEPlay("EV_SE_729");
Wait(50,0);
StlEyeOpenLevel(5,5);
VoicePlay("B050500000_05_070");
MsgDisp("Hiiragi","Good job!
......Did you see that?　It caught it.");
MsgDisp("主人公","Yeah, that was cute!
My turn now......Catch!");
SEStop("EV_SE_729",0.5);
SEPlay("EV_SE_668",0,0.6);
SEWait();
SEPlay("EV_SE_728",0,0.7);
SEPlay("EV_SE_729");
Wait(50,0);
StlEye(5,1);
VoicePlay("B050500000_05_080");
MsgDisp("Hiiragi","Come, it's tasty!
Haha, come here too!");
SEStop("EV_SE_729",1);
MsgDisp("主人公","(Hehe, it's my first time seeing
｛柊＊＊＊｝ smile so innocently.
I guess it's a bit cute......?)");
MsgClose();
ScrFadeOut(0,0);
StlClose();
BGOpen("wf221",0);
BGMVol(0.5,2);
MsgClose();
ChOpen(5,255,0,4,4,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Phew, that was fun!");
ChEye(5,4);
ChMouth(5,3);
ChMotion(5,3);
VoicePlay("B050500000_05_090");
MsgDisp("Hiiragi","Yeah. The seagulls coming onto the stage
with us like that.");
ChEye(5,0);
ChMouth(5,3);
ChMotion(5,0);
VoicePlay("B050500000_05_100");
MsgDisp("Hiiragi","Let's come again sometime to
the ship's stage.");
MsgDisp("主人公","Yeah!");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(5,0);
