ChEyeOpenLevel(6,#1);
ChCheek(6,0);
ChEye(6,3);
ChMouth(6,1);
ChMotion(6,5);
VoicePlay("T020620000_06_240");
MsgDisp("Himuro","Eh, wait......∋");
MsgDisp("主人公","I too, like ｛氷室＊＊｝!");
VoicePlay("T020620000_06_250");
ChEye(6,0);
ChMouth(6,1);
ChMotion(6,4);
ChEyeOpenLevel(6,8);
ChCheek(6,10);
MsgDisp("Himuro","But still—— Is it normal to hug someone
in this situation?");
VoicePlay("T020620000_06_260");
ChEye(6,0);
ChMouth(6,1);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
MsgDisp("Himuro","Haaa......
I really can't read your actions.");
VoicePlay("T020620000_06_270");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ChCheek(6,0);
MsgDisp("Himuro","Come to think about it, on the way home
from hanging out together, you often used
to surprise me like this......");
VoicePlay("T020620000_06_280");
ChEye(6,2);
ChMouth(6,0);
MsgDisp("Himuro","I couldn't understand it, it bothered
me... I almost asked those two for advice.");
MsgDisp("主人公","Eh∋");
VoicePlay("T020620000_06_290");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,4);
MsgDisp("Himuro","I was just about to do it,
but then I actually changed my mind.");
VoicePlay("T020620000_06_300");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,0);
MsgDisp("Himuro","I need to be the only one to be aware
of your innocence.");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(6,0,0);
Wait(120,0);
StlOpen("ev_06_16");
ScrFadeIn(0);
VoiceEVSPlay(6);
VoicePlay("T020620000_06_310");
MsgDisp("Himuro","｛主人公｝.
From now on, we'll always be together.");
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
