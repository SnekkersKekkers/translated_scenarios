SEPlay("EV_SE_668");
SEWait();
ChEye(5,4);
ChMouth(5,0);
ChMotion(5,0,1);
VoicePlay("K010500102_05_000");
MsgDisp("Hiiragi","This is......");
MsgDisp("主人公","How is it?");
ChEye(5,0);
ChMouth(5,3);
VoicePlay("K010500102_05_010");
MsgDisp("Hiiragi","Yes, thank you for this wonderful gift.
I will cherish it.");
MsgDisp("主人公","(Yeah, seems like he liked it.)");
MsgClose();
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
