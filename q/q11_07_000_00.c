MsgClose();
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ScrFadeIn(0);
VoicePlay("Q110700000_07_000");
MsgDisp("Mikage","Did you get to do some good shopping?");
MsgDisp("主人公","Yes. Plenty of castella for my family and
myself.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
VoicePlay("Q110700000_07_010");
MsgDisp("Mikage","That's nice.
I tasted it too, it was yummy.");
MsgDisp("主人公","What did you buy, ｛御影＊＊｝?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,2);
VoicePlay("Q110700000_07_020");
MsgDisp("Mikage","It's the MVP award for the extracurricular
lesson Nagasaki version.");
MsgDisp("主人公","Eh?");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT",0,0.7,0.4);
ChClose(7);
ChLayout(0);
MsgClose();
ChOpen(7,254,0,0,0,#1,#1,0,0);
SEPlay("EV_SE_668");
SEWait();
VoicePlay("Q110700000_07_030");
MsgDisp("Mikage","Tulip bulbs.
If you plant them by December, they'll
bloom beautifully in the spring.");
MsgDisp("主人公","Wow, amazing!");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,2);
ChEyeOpenLevel(7,8);
VoicePlay("Q110700000_07_040");
MsgDisp("Mikage","You too, don't lose, bloom beautifully and
welcome spring. Okay?");
MsgDisp("主人公","Yes! ｛御影＊＊｝, thank you very much.");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChLayout(1);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
