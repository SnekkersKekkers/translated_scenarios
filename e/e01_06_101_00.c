BGOpen("wf200",1);
ChLayout(0);
ScrFadeIn(0);
MsgDisp("主人公","Well then,
I think I'll head home now.");
BGMPlay("BGM_C06_INORI_C",0.01);
MsgClose();
SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
SEWait();
ChOpen(6,255,4,2,0,-1,-1,0,0);
VoicePlay("E010610100_06_000");
MsgDisp("Himuro","Right on time!");
MsgDisp("主人公","Wow, ｛氷室＊＊｝ ∋");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("E010610100_06_010");
MsgDisp("Himuro","Have you seen any elementary
school boys around here?");
MsgDisp("主人公","Eh, I haven't seen any......
Is something wrong?");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("E010610100_06_020");
MsgDisp("Himuro","......I got separated from my brother.");
MsgDisp("主人公","Eh...... brother ∋
｛氷室＊＊｝, you have a younger brother?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
ChEyeOpenLevel(6,7);
VoicePlay("E010610100_06_030");
MsgDisp("Himuro","Why do you look so surprised?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("E010610100_06_040");
MsgDisp("Himuro","We went shopping together,
but the moment I looked away I lost
sight of him.");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("E010610100_06_050");
MsgDisp("Himuro","Haaa......
What am I doing?
I've failed as an older brother......");
SEPlay("EV_SE_579");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("E010610100_06_060");
MsgDisp("Himuro","......Ah, that's mine.
Sorry.");
SEStop("EV_SE_579",0);
SEWait();
BGMStop(2);
MsgClose();
ChClose(6);
Wait(30,0);
VoicePlay("E010610100_06_070");
MsgDisp("Himuro","......Huh? He's back home?");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
ChLayout(1);
MsgClose();
BGMPlay("BGM_HANYOU_C",0.01);
SEPlay("EV_SE_544",0,0.6);
ChOpen(6,255,0,0,0,-1,-1,0,0);
VoicePlay("E010610100_06_080");
MsgDisp("Himuro","My little brother returned home safely.
Mom just contacted me.");
MsgDisp("主人公","Eh, really?
That's good!");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("E010610100_06_090");
MsgDisp("Himuro","Yeah......
I didn't think he'd go home by himself.
Sorry for making you worry.");
MsgDisp("主人公","It's no problem at all.
He's a realiable little brother, just
like ｛氷室＊＊｝, isn't he?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
VoicePlay("E010610100_06_100");
MsgDisp("Himuro","I wonder. Sometimes I think he's more
reliable than me.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("E010610100_06_110");
MsgDisp("Himuro","Apparently he told mother
that I got lost.");
MsgDisp("主人公","Hehe.
So it turns out he was actually
looking for ｛氷室＊＊｝?");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("E010610100_06_120");
MsgDisp("Himuro","Seems like it.
Honestly, I can't win against him.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("E010610100_06_130");
MsgDisp("Himuro","Well, I'll be heading home now
Thanks for today.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
MsgClose();
ChClose(6);
MsgDisp("主人公","(I'm glad he's safe......
I also got to see what the relationship
of ｛氷室＊＊｝ and his brother is like.)");
MsgClose();
ScrFadeOut(0,0);
