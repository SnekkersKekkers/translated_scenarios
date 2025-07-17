BGOpen("sc510",0);
ChLayout(1);
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(21,254,0,0,0,#1,#1,0,1,0,30);
ChOpen(22,254,0,3,3,#1,#1,0,2,0,30);
ScrFadeIn(0);
ChMotion(22,4,1);
VoicePlay("L020D00006_22_000");
MsgDisp("Hikaru","Mari～♪
Today's Valentine's.");
MsgDisp("主人公","Yeah.
But I didn't prepare any chocolate.");
ChEye(22,5);
ChMouth(22,5);
ChMotion(22,5,1);
VoicePlay("L020D00006_22_010");
MsgDisp("Hikaru","No way!?");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,5);
VoicePlay("L020D00006_21_000");
MsgDisp("Michiru","Hikaru, it's fine.
It's none of our business.");
ChEye(22,2);
ChMouth(22,0);
ChMotion(22,2,1);
VoicePlay("L020D00006_22_020");
MsgDisp("Hikaru","That's true, but...
I think there are people who really wanted
Mari's chocolates.");
MsgDisp("主人公","(Hm, maybe I should've gotten chocolate.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(21,0,0);
ChClose(22,0,0);
