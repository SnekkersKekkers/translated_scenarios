MsgDisp("主人公","I too, like ｛柊＊＊＊｝.");
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEye(5,4);
ChMouth(5,2);
ChEyeOpenLevel(5,10);
ChCheek(5,5);
VoicePlay("T020511020_05_000");
MsgDisp("Hiiragi","Eh...");
MsgDisp("主人公","Even if times are tough,
｛柊＊＊＊｝ always tries his
best and shines so brightly.");
ChMotion(5,0,1);
ChEyeOpenLevel(5,0);
Wait(16,0);
ChEye(5,2);
ChMouth(5,2);
ChEyeOpenLevel(5,9);
ChCheek(5,0);
VoiceEVSPlay(5);
VoicePlay("T020511020_05_010");
MsgDisp("Hiiragi","｛主人公｝, I could do all
that because of you.");
MsgDisp("主人公","Eh, me...");
ChEye(5,4);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChMouth(5,4);
ChEyeOpenLevel(5,10);
VoicePlay("T020511020_05_020");
MsgDisp("Hiiragi","Hey.
If you make that face, I'll be troubled.");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(5,0,0);
Wait(120,0);
StlOpen("ev_05_18");
ScrFadeIn(0);
VoicePlay("T020511020_05_030");
MsgDisp("Hiiragi","Until now, and from this point forwards,
your smile has always been my light.");
VoicePlay("T020511020_05_040");
MsgDisp("Hiiragi","——Thank you.");
MsgClear();
StlEffect(1,1,60);
Wait(300,0);
MsgClose();
ScrFadeOut(0,1,120);
StlClose();
Wait(300,0);
