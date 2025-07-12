MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChClose(2,0,0);
BGOpen("tr320",1);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B360222100_02_000");
MsgDisp("Sassa","Phewー......
The castle at sunset is nice, huh.");
MsgDisp("主人公","Yeah.
The town is dyed red,
it's beautiful.");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(2,255,3,0,4,#1,#1,0,0);
VoicePlay("B360222100_02_010");
MsgDisp("Sassa","Yeah, as I thought.");
MsgDisp("主人公","Yeah?");
ChEye(2,3);
ChMouth(2,4);
ChMotion(2,3);
ChEyeOpenLevel(2,0);
VoicePlay("B360222100_02_020");
MsgDisp("Sassa","There's very few visitors at this 
time, so we get this place 
to ourselves. I feel bad for 
Ryota and Inori though.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("B360222100_02_030");
MsgDisp("Sassa","And I'm an idiot, so I like high
places. Both the top of castle
and podium stand are great. ");
MsgDisp("主人公","Hehe.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("B360222100_02_040");
MsgDisp("Sassa","That's why, even in the podium
stand of your mind, I'll
be climbing to the top.");
MsgDisp("主人公","Eh?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("B360222100_02_050");
MsgDisp("Sassa","Haha, what am I even saying?");
MsgDisp("主人公","(｛颯砂＊＊｝?
He feels a bit different to usual...)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
ChCheek(2,0);
