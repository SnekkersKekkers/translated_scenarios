ChEyeOpenLevel(3,#1);
ChMouthOpenLevel(3,#1);
ChCheek(3,0);
MsgDisp("主人公","I also like
｛本多＊＊｝.");
ChEye(3,3);
ChMouth(3,4);
ChMotion(3,4);
ChCheek(3,5);
VoicePlay("T020300020_03_000");
MsgDisp("Honda","I-Is that so......thank you.");
MsgDisp("主人公","Thank you for always having fun
conversations with me and spending time
with me.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
VoicePlay("T020300020_03_010");
MsgDisp("Honda","I'll be talking a lot from now on.
Be prepared.");
MsgDisp("主人公","Hehe, yes. Please take care of me.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,4,1);
ChEyeOpenLevel(3,0);
ChCheek(3,10);
VoicePlay("T020300020_03_020");
MsgDisp("Honda","Haa......
It's getting hot around here.");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(3,0,0);
Wait(120,0);
StlOpen("ev_03_17");
ScrFadeIn(0);
VoicePlay("T020300020_03_030");
MsgDisp("Honda","More on that later.");
SEPlay("EV_SE_695");
MsgClear();
StlEffect(1,1,60);
Wait(60,0);
VoicePlay("T020300020_03_040");
MsgDisp("Honda","Huu......
I want it to stay like this forever.");
Wait(120,0);
MsgClose();
ScrFadeOut(0,1,120);
StlClose();
Wait(160,0);
SEStop("EV_SE_695",3.5);
Wait(220,0);
