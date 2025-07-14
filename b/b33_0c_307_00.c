ChClose(5,0,0);
ChClose(6,0,0);
ChClose(7,0,0);
BGOpen("tr200",0);
ScrFadeIn(0);
Wait(40,1);
ScrFadeOut(1,0,40);
BGOpen("tr210",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(2);
ChOpen(7,253,0,0,0,#1,#1,0,3);
ChOpen(5,253,0,0,4,#1,#1,0,3);
ChOpen(6,253,0,0,0,#1,#1,0,3);
ScrFadeIn(0);
ChEye(6,0);
ChMouth(6,3);
VoicePlay("B330C30700_06_000");
MsgDisp("Himuro","The face of this zoo as I thought, is the
elephant, Konami.");
MsgDisp("主人公","You've been to this place for a long time
huh?");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,0);
VoicePlay("B330C30700_06_010");
MsgDisp("Himuro","I drew her again and again at sketch
sessions in Elementary School.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("B330C30700_07_000");
MsgDisp("Mikage","Oh, that's good.
Shall we do it?");
MsgDisp("主人公","Eh?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0,1);
VoicePlay("B330C30700_05_000");
MsgDisp("Hiiragi","Yes, it seems fun.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,3);
VoicePlay("B330C30700_06_020");
MsgDisp("Himuro","...If Yanosuke-senpai wants to try it,
that's fine.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,4);
VoicePlay("B330C30700_07_010");
MsgDisp("Mikage","Alright, They probably sell notebooks and
pens at the kiosk.
Wait here.");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
ChClose(7);
ChEye(5,3);
ChMouth(5,2);
ChMotion(5,4);
VoicePlay("B330C30700_05_010");
MsgDisp("Hiiragi","Ah, Mikage-sensei!");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B330C30700_06_030");
MsgDisp("Himuro","He's already gone.
Seriously, what great initiative.");
MsgClose();
ScrFadeOut(0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
BGOpen("tr200",1);
MsgClose();
ChOpen(7,255,7,0,0,#1,#1,0,0);
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
ChPosition(5,3);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,7);
ChPosition(6,3);
ScrFadeIn(0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("B330C30700_07_020");
MsgDisp("Mikage","I got too carried away with the sketch
session.");
MsgDisp("主人公","Yes.
The sketches turned out well.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("B330C30700_07_030");
MsgDisp("Mikage","Now that we've come this far, let's color
it and finish it off on our own.
Today's sketching contest ends here.");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,0,1);
VoicePlay("B330C30700_06_040");
MsgDisp("Himuro","It's just like a school event.");
ChEye(5,3);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B330C30700_05_020");
MsgDisp("Hiiragi","It was fun sketching with everyone.");
MsgDisp("主人公","(Hehe! ｛柊＊＊＊｝ seems to be having
fun. Alright, I'll also finish it at
home.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,7);
ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,7);
ChEyeOpenLevel(6,#1);
ChMouthOpenLevel(6,#1);
ChCheek(6,0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,7);
ChEyeOpenLevel(7,#1);
ChMouthOpenLevel(7,#1);
ChCheek(7,0);
