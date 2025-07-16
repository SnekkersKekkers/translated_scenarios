BGOpen("ar500",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Thank you very much!
Please come again.");
MsgClose();
BGMPlay("BGM_C21_MICHIRU_A",0.01);
Wait(15,0);
ChOpen(21,35,3,3,3,0,#1,0,0);
VoicePlay("I562100001_21_000");
MsgDisp("Michiru","Hehe.
Mari's greeting is so nice.");
MsgDisp("主人公","Really?");
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,4);
VoicePlay("I562100001_21_010");
MsgDisp("Michiru","Yeah.
They'll want to come back.
To see your beautiful smile.");
MsgDisp("主人公","(I did it!
｛みちる＊｝ praised me!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
