ChEyeOpenLevel(6,-1);
ChCheek(6,0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,5);
ChCheek(6,7);
VoicePlay("T020621000_06_200");
MsgDisp("Himuro","Nngh∋");
MsgDisp("主人公","That's my answer.");
VoicePlay("T020621000_06_210");
ChEye(6,3);
ChMouth(6,0);
ChMotion(6,5);
ChCheek(6,10);
MsgDisp("Himuro","…………");
VoicePlay("T020621000_06_220");
ChEye(6,0);
ChMouth(6,2);
ChMotion(6,2);
ChEyeOpenLevel(6,8);
MsgDisp("Himuro","......That was my first kiss.");
MsgDisp("主人公","Huh, you mean just now——");
VoicePlay("T020621000_06_230");
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,1);
MsgDisp("Himuro","Don't ask me more about it.
It's embarassing.");
VoicePlay("T020621000_06_240");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,0);
ChCheek(6,0);
MsgDisp("Himuro","
If those two found out we were doing
this kind of stuff, I seriously wonder
how they would react.");
MsgDisp("主人公","Hehe.");
VoicePlay("T020621000_06_250");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,3);
ChEyeOpenLevel(6,8);
MsgDisp("Himuro","......They do seem very calm.
But you never know, it could catch them
off guard if they're like that.");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(6,0,0);
Wait(120,0);
StlOpen("ev_06_16");
ScrFadeIn(0);
VoicePlay("T020621000_06_260");
MsgDisp("Himuro","This is for earlier.");
VoiceEVSPlay(6);
VoicePlay("T020621000_06_270");
MsgDisp("Himuro","｛主人公｝, I love you.
I'm not letting you go again.");
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
