ChEyeOpenLevel(2,-1);
ChMouthOpenLevel(2,-1);
ChCheek(2,0);
ChEye(2,4);
ChMouth(2,0);
ChMotion(2,4);
MsgDisp("主人公","I feel the same way. I'd love to join
｛颯砂＊＊｝ in achieving his dream.");
ChEye(2,5);
ChMouth(2,0);
ChMotion(2,0);
ChCheek(2,10);
VoicePlay("T020220020_02_000");
MsgDisp("Sassa","...Seriously? With me...");
MsgDisp("主人公","I also like ｛颯砂＊＊｝.");
ChEye(2,4);
ChMouth(2,3);
ChMotion(2,1);
VoicePlay("T020220020_02_010");
MsgDisp("Sassa","I'm so happy!
I wonder if those two can hear
me if I shout here.");
MsgDisp("主人公","Eh∋");
ChEye(2,4);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("T020220020_02_020");
MsgDisp("Sassa","Ah, no.
It'd be troublesome if they came here.");
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,0);
ChCheek(2,0);
VoicePlay("T020220020_02_030");
MsgDisp("Sassa","...Look up a little.
Let me see your face.");
MsgDisp("主人公","Yes...");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(2,0,0);
Wait(120,0);
StlOpen("ev_02_17");
ScrFadeIn(0);
VoicePlay("T020220020_02_040");
MsgDisp("Sassa","...I'm in your care from now on——");
VoicePlay("T020220020_02_050");
MsgDisp("Sassa","My beloved.");
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
