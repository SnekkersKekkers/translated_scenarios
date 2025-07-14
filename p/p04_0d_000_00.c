ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,0);
ScrFadeIn(0);
ChEye(22,3);
ChMouth(22,4);
ChMotion(22,0,1);
ChEyeOpenLevel(22,0);
VoicePlay("P040D00000_22_000");
MsgDisp("Hikaru","These dango are delish～♪");
ChEye(21,4);
ChMouth(21,0);
ChMotion(21,3);
VoicePlay("P040D00000_21_000");
MsgDisp("Michiru","Yes. It's good enough to be part of the
assortment at a Japanese confectionary.");
ChEye(22,0);
ChMouth(22,0);
MsgDisp("主人公","Really?");
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,4);
VoicePlay("P040D00000_21_010");
MsgDisp("Michiru","Really. Your way of making tea is also
superb.");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("P040D00000_22_010");
MsgDisp("Hikaru","Mari, please bring me another dango!");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("P040D00000_21_020");
MsgDisp("Michiru","And another cup for me.");
MsgDisp("主人公","(I did it, what a great success!
I'm glad I worked so hard at the
preparations!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(21);
ChClose(22);
