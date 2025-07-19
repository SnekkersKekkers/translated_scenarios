MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ne600",1);
BGMPlay("BGM_C02_SASSA_B",0.01);
ChLayout(1);
MsgClose();
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0,1);
ScrFadeIn(0);
MsgDisp("主人公","｛颯砂＊＊｝, did you want to watch a movie
today?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("B360218001_02_000");
MsgDisp("Sassa","Hmmー...
To be honest, I don't really know why.
Is there something you wanted to watch?");
SEPlay("EV_SE_018");
MsgDisp("","(Growl～)");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,2);
VoicePlay("B360218001_02_010");
MsgDisp("Sassa","...Is that a sign that the screening is
about to start?");
MsgDisp("主人公","Ehh?
It's a sign you're hungry?");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,0);
VoicePlay("B360218001_02_020");
MsgDisp("Sassa","The smell of popcorn is irresistible after
all.");
MsgDisp("主人公","Hehe, shall we eat some?");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("B360218001_02_030");
MsgDisp("Sassa","Alright, I'll go buy some!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(2);
MsgDisp("主人公","(He ran off with great speed!
｛颯砂＊＊｝, were you really that hungry?)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChOpen(2,255,7,0,0,#1,#1,0,0,0,0);
