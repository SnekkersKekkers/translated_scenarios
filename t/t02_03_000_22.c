ChCheek(3,0);
ChEye(3,5);
ChMouth(3,4);
ChMotion(3,5,1);
VoicePlay("T020300022_03_000");
MsgDisp("Honda","You- what's wrong??");
MsgDisp("主人公","Erm, well I like ｛本多＊＊｝
too.");
ChEye(3,3);
ChMouth(3,0);
ChMotion(3,1,1);
ChCheek(3,5);
VoicePlay("T020300022_03_010");
MsgDisp("Honda","So, can I stay with you forever?");
MsgDisp("主人公","Hehe, yes.
Please take care of me.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
ChCheek(3,0);
VoicePlay("T020300022_03_020");
MsgDisp("Honda","Ah, but... It can't be just you getting
the upper hand all the time. Me also!");
ChMouth(3,0);
MsgDisp("主人公","Eh......");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(3,0,0);
Wait(120,0);
StlOpen("ev_03_17");
ScrFadeIn(0);
VoicePlay("T020300022_03_030");
MsgDisp("Honda","I have to be the one doing the research.");
VoicePlay("T020300022_03_040");
MsgDisp("Honda","From now on, I won't always be the one
getting beaten.");
MsgClear();
StlEffect(1,1,60);
Wait(60,0);
SEPlay("EV_SE_695");
Wait(120,0);
MsgClose();
ScrFadeOut(0,1,120);
StlClose();
Wait(160,0);
SEStop("EV_SE_695",3.5);
Wait(220,0);
