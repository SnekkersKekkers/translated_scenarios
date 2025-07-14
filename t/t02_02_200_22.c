ChEyeOpenLevel(2,#1);
ChMouthOpenLevel(2,#1);
ChCheek(2,0);
ChEye(2,5);
ChMouth(2,0);
ChMotion(2,4);
ChCheek(2,10);
VoicePlay("T020220022_02_000");
MsgDisp("Sassa","Hey! What's wrong?");
MsgDisp("主人公","That means I love ｛颯砂＊＊｝ too?");
ChEye(2,5);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("T020220022_02_010");
MsgDisp("Sassa","Seriously... Is that really the way to
answer this?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
ChCheek(2,10);
VoicePlay("T020220022_02_020");
MsgDisp("Sassa","What should I tell those two about?
That hug from you?");
MsgDisp("主人公","Eh∋
That's embarrassing......");
ChEye(2,2);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("T020220022_02_030");
MsgDisp("Sassa","Ah, I see.
That's right isn't it.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
ChCheek(2,0);
VoicePlay("T020220022_02_040");
MsgDisp("Sassa","I mean, you do always get the better of
me.");
MsgDisp("主人公","That's because I couldn't express it well
in words.");
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("T020220022_02_050");
MsgDisp("Sassa","I understood it anyways.
From now on, I can pursue my dreams with
you, the one I love.");
MsgDisp("主人公","Yes.");
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("T020220022_02_060");
MsgDisp("Sassa","......Let's run together forever.");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(2,0,0);
Wait(120,0);
StlOpen("ev_02_17");
ScrFadeIn(0);
VoicePlay("T020220022_02_070");
MsgDisp("Sassa","Now it's my turn to hug you.");
VoiceEVSPlay(2);
VoicePlay("T020220022_02_080");
MsgDisp("Sassa","｛主人公｝...... I love you.");
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
