BGOpen("fp720",0);
ScrFadeIn(0);
VoicePlay("D010100400_45_000");
MsgDisp("Manager","Can you go assist Kazama-kun?
He's doing inventory in the back.");
MsgDisp("主人公","Sure, I'll go right away!");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE",0,0.6);
MsgClose();
ScrFadeOut(0,0);
SEWait();
SEPlay("EV_SE_620",0,0.9);
SEWait();
MsgDisp("主人公","｛風真＊＊｝, I'm here to help you.");
VoicePlay("D010100400_01_000");
MsgDisp("Kazama","Thank you!
Hold on for a second.
And it's dark, so watch your step.");
MsgDisp("主人公","Yeah, leave it to me!");
MsgClose();
StlOpen("ev_01_11");
StlEye(1,0);
StlMouth(1,0);
BGMPlay("BGM_C01_RYOUTA_B",0.01);
SEPlay("EV_SE_603",0.6);
ScrFadeIn(0);
Wait(40,0);
VoicePlay("D010100400_01_010");
MsgDisp("Kazama","H-Hey......");
MsgDisp("主人公","Ah, our hands——");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
SEPlay("EV_SE_843",2,0.3);
SEPlay("EV_SE_511",3,0.3);
StlEye(1,1);
StlMouth(1,1);
VoicePlay("D010100400_47_000");
MsgDisp("Woman Customer A","Wow, look.
There's a new item.");
VoicePlay("D010100400_48_000");
MsgDisp("Woman Customer B","Oh, you're right.
Huh......Where is Kazama-kun?");
SEStop("EV_SE_843",2);
SEStop("EV_SE_511",2);
StlEyeOpenLevel(1,5);
StlMouth(1,1);
VoicePlay("D010100400_01_020");
MsgDisp("Kazama","......It feels like time froze, doesn't
it?");
StlEyeOpenLevel(1,0,1);
VoicePlay("D010100400_01_030");
MsgDisp("Kazama","Okay, just three more seconds like
this.");
MsgDisp("主人公","Eh?");
VoicePlay("D010100400_01_040");
MsgDisp("Kazama","......One, zero.");
StlEyeOpenLevel(1,#1);
StlMouth(1,1);
MsgClose();
ScrFadeOut(0,0);
StlClose();
Wait(50,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMVol(0.5,2);
BGOpen("fp720",0);
ChLayout(1);
MsgClose();
ChOpen(1,35,0,0,4,8,#1,7,0);
ScrFadeIn(0);
ChMotion(1,4);
VoicePlay("D010100400_01_050");
MsgDisp("Kazama","Look at us, what are we doing during work?");
MsgDisp("主人公","Uhm......Inventory?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChCheek(1,5);
VoicePlay("D010100400_01_060");
MsgDisp("Kazama","Right, so there's nothing to feel
guilty about, right? Please help me 
with inventory again sometime.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(1);
MsgDisp("主人公","Hehe, sure.");
VoicePlay("D010100400_01_070");
MsgDisp("Kazama","Welcome. Sorry for the wait.");
MsgDisp("主人公","(Haa......
My heart is racing......)");
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(1,0);
