ChEyeOpenLevel(2,#1);
ChMouthOpenLevel(2,#1);
ChCheek(2,0);
ChEye(2,4);
ChMouth(2,0);
ChMotion(2,4);
MsgDisp("主人公","I feel the same way.
I'd love to join ｛颯砂＊＊｝ in
achieving his dream.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
ChCheek(2,10);
VoicePlay("T020201020_02_000");
MsgDisp("Sassa","...Seriously, together with me?...?");
MsgDisp("主人公","Yes.
I'm sorry I didn't notice when
｛颯砂＊＊｝ was suffering.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,5);
VoicePlay("T020201020_02_010");
MsgDisp("Sassa","Oh, don't apologize.
I'm the one who's usually sorry.
So, thank you.");
MsgDisp("主人公","｛颯砂＊＊｝...");
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,4);
ChCheek(2,0);
VoicePlay("T020201020_02_020");
MsgDisp("Sassa","Now I can pursue my dreams with the person
I love.
I couldn't be happier.");
MsgDisp("主人公","Me too.
With my beloved ｛颯砂＊＊｝...");
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("T020201020_02_030");
MsgDisp("Sassa","...Yeah.
Let's keep running together.");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(2,0,0);
Wait(120,0);
StlOpen("ev_02_17");
ScrFadeIn(0);
VoicePlay("T020201020_02_040");
MsgDisp("Sassa","This is our start.");
VoiceEVSPlay(2);
VoicePlay("T020201020_02_050");
MsgDisp("Sassa","｛主人公｝, I love you.");
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
