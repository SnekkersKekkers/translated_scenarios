MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChClose(1,0,0);
BGOpen("ne310",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_514");
Wait(50,0);
VoicePlay("B360115101_01_000");
MsgDisp("Kazama","Seriously? A 7 and 10 split.");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(1,255,7,2,0,0,#1,0,0);
ChMotion(1,2);
ChEyeOpenLevel(1,8);
VoicePlay("B360115101_01_010");
MsgDisp("Kazama","There's two bad ones left.
Seems like a herculean task even for a
pro.");
MsgDisp("主人公","But ｛風真＊＊｝ could probably knock them
down.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("B360115101_01_020");
MsgDisp("Kazama","O-Oh.
If you say so, I guess I'll try it.");
MsgDisp("主人公","Yeah! ｛風真＊＊｝, good luck!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChClose(1);
VoicePlay("B360115101_01_030");
MsgDisp("Kazama","What an annoying pin...
I can somewhat see those two in it...");
VoicePlay("B360115101_01_040");
MsgDisp("Kazama","Haaー.
This is our alone time!");
SEPlay("EV_SE_786");
SEWait();
MsgDisp("主人公","Amazing! ｛風真＊＊｝!");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(1,255,0,3,3,#1,#1,0,0,0,30);
ChMotion(1,3);
VoicePlay("B360115101_01_050");
MsgDisp("Kazama","Yeah, with this now, it's just the two of
us.");
MsgDisp("主人公","Eh?
Was someone there?");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B360115101_01_060");
MsgDisp("Kazama","Those 7 and 10 splits.
It looked a bit like tem.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,4);
ChEyeOpenLevel(1,0);
VoicePlay("B360115101_01_070");
MsgDisp("Kazama","They disturbed our time together, so I
threw it and they fell.");
MsgDisp("主人公","Ehhh?
I feel sorry for those two.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("B360115101_01_080");
MsgDisp("Kazama","Is that right?
But it's the person who interrupts who's
at fault.");
ChEye(1,4);
ChMouth(1,0);
ChMotion(1,2);
ChEyeOpenLevel(1,0);
VoicePlay("B360115101_01_090");
MsgDisp("Kazama","If I throw with this image in mind, I
might come out with a high score.");
MsgDisp("主人公","(｛風真＊＊｝...... I think finding a
different technique might be better?)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ChCheek(1,0);
