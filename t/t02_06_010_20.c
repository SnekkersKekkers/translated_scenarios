ChEyeOpenLevel(6,#1);
ChCheek(6,0);
MsgDisp("主人公","I also like ｛氷室＊＊｝.
I have for a long time.");
ChEye(6,3);
ChMouth(6,0);
ChMotion(6,5);
ChCheek(6,10);
VoicePlay("T020601000_06_130");
MsgDisp("Himuro","Eh.........");
VoicePlay("T020601000_06_140");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
MsgDisp("Himuro","Hey, 
isn't this the first time?");
MsgDisp("主人公","?");
VoicePlay("T020601000_06_150");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,4);
ChEyeOpenLevel(6,8);
ChCheek(6,0);
MsgDisp("Himuro","You've answered the way I hoped, it's come
full circle now; that was beyond what I
expected.");
MsgDisp("主人公","Yeah?");
VoicePlay("T020601000_06_160");
ChEye(6,4);
ChMouth(6,4);
ChMotion(6,3);
MsgDisp("Himuro","On that note, 
come here.");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(6,0,0);
Wait(120,0);
StlOpen("ev_06_16");
ScrFadeIn(0);
VoiceEVSPlay(6);
VoicePlay("T020601000_06_170");
MsgDisp("Himuro","｛主人公｝, I love you.");
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
