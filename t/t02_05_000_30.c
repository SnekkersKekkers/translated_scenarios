BGMStop();
MsgDisp("主人公","......I'm sorry.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
ChCheek(5,0);
VoicePlay("T020500030_05_000");
MsgDisp("Hiiragi","No. Please don't apologize. Your smile is
my guide.");
BGMPlay("BGM_C05_HIIRAGI_C",0.01);
ChMotion(5,0);
Wait(12,0);
ChEye(5,0);
ChMouth(5,4);
VoicePlay("T020500030_05_010");
MsgDisp("Hiiragi","Please follow the path that can make you
smile.");
MsgDisp("主人公","｛柊＊＊＊｝......");
VoicePlay("T020500030_05_020");
MsgDisp("Hiiragi","Thanks to you, I now know what I should do
in the theater company.");
ChMotion(5,4);
ChEyeOpenLevel(5,0);
Wait(16,0);
ChEye(5,3);
ChMouth(5,4);
VoicePlay("T020500030_05_030");
MsgDisp("Hiiragi","Furthermore, I was able to graduate from a
great school, right?
Although it was a close call.");
MsgDisp("主人公","Hehe, yeah......");
ChEye(5,4);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(16,0);
ChMouth(5,4);
VoicePlay("T020500030_05_040");
MsgDisp("Hiiragi","......That's good. You were able to smile
a little in the end...... I'm not wrong
about this direction.");
Wait(40,0);
ChEye(5,0);
ChMouth(5,4);
VoicePlay("T020500030_05_050");
MsgDisp("Hiiragi","From tomorrow onwards, we will be on
different stages.");
BGMStop(3.6);
MsgClose();
ScrFadeOut(0,1,120);
ChClose(5,0,0);
Wait(120);
