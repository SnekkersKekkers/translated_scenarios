MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("tr470",2);
BGMPlay("BGM_PLACE_AMUSE_NIGHT",0.01);
ChLayout(1);
MsgClose();
ChEye(5,3);
ChMouth(5,4);
ChMotion(5,0,1);
ScrFadeIn(0);
VoicePlay("B360523600_05_000");
MsgDisp("Hiiragi","Phew, made it on time.");
MsgDisp("主人公","Yeah, good thing.
But ｛柊＊＊＊｝, do you enjoy
night parades?");
ChEye(5,4);
ChMotion(5,4);
VoicePlay("B360523600_05_010");
MsgDisp("Hiiragi","Well if anything...
I guess I like seeing you enjoy it?");
MsgDisp("主人公","Umm...");
ChEye(5,3);
ChMouth(5,2);
VoicePlay("B360523600_05_020");
MsgDisp("Hiiragi","Is it no good?
But it was written in the Habataki date
guide, right?");
MsgDisp("主人公","Ehh?");
ChEye(5,2);
ChMouth(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("B360523600_05_030");
MsgDisp("Hiiragi","Haha, sorry.");
ChMotion(5,0);
ChEyeOpenLevel(5,9);
VoicePlay("B360523600_05_040");
MsgDisp("Hiiragi","But my feelings are the same as the ones
written there.");
MsgDisp("主人公","I wont be deceived anymore.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
Wait(12,0);
ChEyeOpenLevel(5,#1);
VoicePlay("B360523600_05_050");
MsgDisp("Hiiragi","That's troublesome.
Then, as proof, I'll turn my back on the
parade and only look at you.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChClose(5,0,30);
ChLayout(0);
MsgClose();
ChOpen(5,255,0,3,4,#1,#1,0,0,0,30);
VoicePlay("B360523600_05_060");
MsgDisp("Hiiragi","See, my field of vision has narrowed.");
MsgDisp("主人公","Um...
｛柊＊＊＊｝?");
ChEye(5,4);
VoicePlay("B360523600_05_070");
MsgDisp("Hiiragi","What is it?");
MsgDisp("主人公","I can't see the parade at all...");
ChEye(5,3);
ChMouth(5,2);
ChCheek(5,5);
VoicePlay("B360523600_05_080");
MsgDisp("Hiiragi","Ah...excuse me.");
MsgClose();
SEPlay("EV_SE_544");
ChClose(5,0,30);
ChCheek(5,0);
ChLayout(1);
VoicePlay("B360523600_05_090");
MsgDisp("Hiiragi","I'll make do with your side profile for
today.");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChOpen(5,255,7,0,0,#1,#1,0,0,0,0);
