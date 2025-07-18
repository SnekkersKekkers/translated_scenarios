ChEyeOpenLevel(2,#1);
ChMouthOpenLevel(2,#1);
ChCheek(2,0);
ChEye(2,4);
ChMouth(2,0);
ChMotion(2,4);
MsgDisp("主人公","I also like ｛颯砂＊＊｝.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,5);
ChCheek(2,10);
VoicePlay("T020200020_02_000");
MsgDisp("Sassa","Eh...");
MsgDisp("主人公","I was also happy to have the opportunity
to help ｛颯砂＊＊｝ achieve his
dream.");
ChEye(2,4);
ChMouth(2,0);
ChMotion(2,0);
ChCheek(2,0);
VoicePlay("T020200020_02_010");
MsgDisp("Sassa","You really feel that way, huh?
I didn't force or drag you into it?");
MsgDisp("主人公","Yes.
So don't try to give up on your own.");
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("T020200020_02_020");
MsgDisp("Sassa","...Yeah.
I promise.");
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("T020200020_02_030");
MsgDisp("Sassa","Maybe it was already decided from the
first day I ran alongside you...");
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("T020200020_02_040");
MsgDisp("Sassa","Let's keep running like this.
The two of us together.");
MsgDisp("主人公","Yes...!");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("T020200020_02_050");
MsgDisp("Sassa","Then, stand up straight and lift your chin
a little.");
MsgDisp("主人公","Hehe, advice from when we ran together?");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(2,0,0);
Wait(120,0);
StlOpen("ev_02_17");
ScrFadeIn(0);
VoicePlay("T020200020_02_060");
MsgDisp("Sassa","Yes, your gaze is...on me.");
VoicePlay("T020200020_02_070");
MsgDisp("Sassa","Now all I can see is you.");
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
