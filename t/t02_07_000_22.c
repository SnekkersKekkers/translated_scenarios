ChEye(7,5);
ChMouth(7,1);
ChMotion(7,5);
VoicePlay("T020700022_07_000");
MsgDisp("Mikage","Oi-∋
Wh-what's wrong?");
MsgDisp("主人公","I love ｛御影＊＊｝ too.
Did you......receive my feelings?");
ChEye(7,2);
ChMouth(7,3);
ChMotion(7,2);
ChCheek(7,6);
VoicePlay("T020700022_07_010");
MsgDisp("Mikage","Ah, yes I received them
Thank you. ");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
ChEyeOpenLevel(7,10);
ChCheek(7,0);
VoicePlay("T020700022_07_020");
MsgDisp("Mikage","But......you and I have graduated now——");
ChEye(7,1);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("T020700022_07_030");
MsgDisp("Mikage","Which means we aren't just giving up 
like we have been until now, right?");
MsgDisp("主人公","Yes. I got it.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("T020700022_07_040");
MsgDisp("Mikage","Haa?
Where did my serious girl go......");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(7,0,0);
Wait(120,0);
StlOpen("ev_07_16");
ScrFadeIn(0);
VoicePlay("T020700022_07_050");
MsgDisp("Mikage","There's no going back now.");
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
