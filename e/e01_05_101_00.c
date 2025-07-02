BGOpen("wf100",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Well, I guess it's time to go home.
......Huh?)");
MsgDisp("主人公","｛柊＊＊＊｝?
What are you doing infront of the store?");
MsgClose();
BGMPlay("BGM_C05_HIIRAGI_A");
ChOpen(5,255,3,0,4,-1,-1,0,0);
VoicePlay("E010510100_05_000");
MsgDisp("Hiiragi","Oh, it's you.
Good timing.
Could you share your opinion on this?");
MsgDisp("主人公","What is it?");
ChMouth(5,4);
ChMouth(5,2);
ChMotion(5,0);
VoicePlay("E010510100_05_010");
MsgDisp("Hiiragi","I was looking at cleaning supplies earlier
and someone recommended me a robotic
vacuum cleaner.");
MsgDisp("主人公","Yeah,
the ones in commercials recently, right?
They seem convenient.");
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,4);
VoicePlay("E010510100_05_020");
MsgDisp("Hiiragi","I see.
Do you think so as well?");
MsgDisp("主人公","Eh?");
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("E010510100_05_030");
MsgDisp("Hiiragi","I can't deny that I like
convenient cleaning products as well.
But in the end, it's my decision.");
ChEye(5,4);
ChMouth(5,0);
ChMotion(5,2);
VoicePlay("E010510100_05_040");
MsgDisp("Hiiragi","If it's done automatically,
you miss the process of the space being
cleaned, or feeling the room become
bigger once it's tidy.");
MsgDisp("主人公","Such a deep way of thinking.");
ChEye(5,2);
ChMouth(5,0);
ChMotion(5,1);
VoicePlay("E010510100_05_050");
MsgDisp("Hiiragi","It's neither deep nor shallow. Useful
gadgets aren't just for cleaning. They
help because they address inconvenience.");
ChEye(5,4);
ChMouth(5,0);
ChMotion(5,0);
VoicePlay("E010510100_05_060");
MsgDisp("Hiiragi","It's better if we eliminate
inconvenience from the start.");
MsgDisp("主人公","Um......");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,2);
VoicePlay("E010510100_05_070");
MsgDisp("Hiiragi","If you can't understand it,
I guess others won't either.");
MsgDisp("主人公","｛柊＊＊＊｝?");
ChEye(5,0);
ChMotion(5,0);
VoicePlay("E010510100_05_080");
MsgDisp("Hiiragi","No, it's nothing.
I dislike pointless arguments.
They waste time and ruin relationships.");
ChMotion(5,0,1);
VoicePlay("E010510100_05_090");
MsgDisp("Hiiragi","Let's leave it at that for today.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(5);
MsgDisp("主人公","(｛柊＊＊＊｝ 's way of thinking
is a bit complicated......)");
MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(5,-1);
ChMouthOpenLevel(5,-1);
ChCheek(5,0);
