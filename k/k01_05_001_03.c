SEPlay("EV_SE_668");
SEWait();
ChEye(5,4);
ChMouth(5,0);
ChMotion(5,2,1);
VoicePlay("K010500103_05_000");
MsgDisp("Hiiragi","This is......");
MsgDisp("主人公","How is it?");
ChEye(5,2);
ChMouth(5,2);
ChEyeOpenLevel(5,8);
VoicePlay("K010500103_05_010");
MsgDisp("Hiiragi","What shall I do with this......?
I wonder if this is a test......");
ChMouth(5,4);
ChMotion(5,0);
ChEyeOpenLevel(5,-1);
VoicePlay("K010500103_05_020");
MsgDisp("Hiiragi","Th, thank you.
I will think about how best to use this.
Allow me to take it home.");
MsgClose();
ChClose(5);
MsgDisp("主人公","(Ugh......
I don't think he liked it.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
