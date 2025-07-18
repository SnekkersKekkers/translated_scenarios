MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ne710",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChLayout(1);
MsgClose();
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ScrFadeIn(0);
MsgDisp("主人公","Shopping?");
ChEye(5,4);
VoicePlay("B360507001_05_000");
MsgDisp("Hiiragi","Yes.
I wanted you to help me pick clothes.");
MsgDisp("主人公","Sure.
What do you like?");
ChEye(5,0);
ChMotion(5,4);
VoicePlay("B360507001_05_010");
MsgDisp("Hiiragi","I'll leave that up to you.");
MsgDisp("主人公","Well then...");
MsgClose();
ScrFadeOut(0,0);
Wait(40,0);
BGOpen("wf810",0);
ChLayout(1);
ChEye(5,3);
ChMouth(5,2);
ChMotion(5,0,1);
ChCheek(5,7);
ScrFadeIn(0);
VoicePlay("B360507001_05_020");
MsgDisp("Hiiragi","This area is for women...
Moreover, the clothes are quite
revealing...");
MsgDisp("主人公","This shop has a small selection, but they
also carry men's clothes.");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,9);
VoicePlay("B360507001_05_030");
MsgDisp("Hiiragi","I-I see...");
MsgDisp("主人公","Was it too much?");
ChMotion(5,0);
ChEyeOpenLevel(5,8);
ChCheek(5,0);
VoicePlay("B360507001_05_040");
MsgDisp("Hiiragi","No, I asked you to do this.
I'll leave it up to you.");
MsgClose();
ScrFadeOut(0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("wf100",1);
ChLayout(1);
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,0,1);
ChEyeOpenLevel(5,9);
ChCheek(5,7);
ScrFadeIn(0);
VoicePlay("B360507001_05_050");
MsgDisp("Hiiragi","...Well, I bought it.
It feels like a new door has been opened.");
MsgDisp("主人公","(｛柊＊＊＊｝, I think sexy leather suits
you...)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
ChCheek(5,0);
