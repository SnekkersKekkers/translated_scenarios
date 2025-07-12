BGOpen("sc510",0);
ChLayout(1);
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(21,254,0,0,0,#1,#1,0,1,0,30);
ChOpen(22,254,0,3,3,#1,#1,0,2,0,30);
ScrFadeIn(0);
ChMotion(22,4,1);
VoicePlay("L020D00000_22_000");
MsgDisp("Hikaru","Mari～♪
Did you bring the chocolate?");
MsgDisp("主人公","Yeah!
I hope they'll be happy......");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("L020D00000_21_000");
MsgDisp("Michiru","It'll be fine.
You put all your feelings into it, right?");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("L020D00000_22_010");
MsgDisp("Hikaru","Right right.
What you need now is courage.
We're both cheering for you▼");
MsgDisp("主人公","Thank you!");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(21,0,0);
ChClose(22,0,0);
