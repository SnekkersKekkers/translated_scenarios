ChEye(7,5);
ChMouth(7,1);
ChMotion(7,5,1);
VoicePlay("T020720022_07_000");
MsgDisp("Mikage","Oi-∋
W-What's wrong?");
MsgDisp("主人公","I also like ｛御影＊＊｝.
Did you......receive my feelings?");
ChEye(7,2);
ChMouth(7,3);
ChMotion(7,2);
ChCheek(7,6);
VoicePlay("T020720022_07_010");
MsgDisp("Mikage","Yes, I received them.
Thank you.");
MsgDisp("主人公","Hehe.
Were you surprised?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
ChCheek(7,0);
VoicePlay("T020720022_07_020");
MsgDisp("Mikage","What's that?
Haha, that'll be hard to tell them.");
MsgDisp("主人公","Eh∋
You......don't need to tell them.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ChEyeOpenLevel(7,8);
VoicePlay("T020720022_07_030");
MsgDisp("Mikage","I got it.
But, since you and I both graduated——");
ChEye(7,1);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("T020720022_07_040");
MsgDisp("Mikage","Doesn't that mean we've given up on this 
being one-sided?");
MsgDisp("主人公","Yes. I got it.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("T020720022_07_050");
MsgDisp("Mikage","Haa?
Where is my serious girl......?");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(7,0,0);
Wait(120,0);
StlOpen("ev_07_16");
ScrFadeIn(0);
VoicePlay("T020720022_07_060");
MsgDisp("Mikage","There's no return now.");
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
