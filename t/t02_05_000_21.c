ChEye(5,4);
ChMouth(5,2);
ChEyeOpenLevel(5,0);
ChCheek(5,5);
Wait(60,0);
ChEyeOpenLevel(5,#1);
VoicePlay("T020500021_05_000");
MsgDisp("Hiiragi","Does that mean you'll be with me?");
MsgDisp("主人公","Yes.
I also like ｛柊＊＊＊｝.");
ChEye(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
Wait(16,0);
ChMouth(5,4);
VoicePlay("T020500021_05_010");
MsgDisp("Hiiragi","If my confession made you smile, I
couldn't be happier.");
MsgDisp("主人公","If I'm with ｛柊＊＊＊｝, I'm
always smiling.
Thank you.");
ChMotion(5,0);
Wait(12,0);
ChEye(5,4);
ChMouth(5,4);
ChEyeOpenLevel(5,10);
ChCheek(5,0);
VoicePlay("T020500021_05_020");
MsgDisp("Hiiragi","Then, let me see your smile once more.");
MsgDisp("主人公","Eh...");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(5,0,0);
Wait(120,0);
StlOpen("ev_05_17");
ScrFadeIn(0);
VoicePlay("T020500021_05_030");
MsgDisp("Hiiragi","I'll be with you... for all of
eternity.");
MsgClear();
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
