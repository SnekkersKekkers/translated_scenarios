BGOpen("ar500",0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("I562100002_40_000");
MsgDisp("Male Customer","Um...... What would you suggest I bring to
meet my girlfriend's parents......?");
MsgDisp("主人公","If you're looking for Japanese
sweets...... how about this assortment of
seasonal sweets?");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMPlay("BGM_C21_MICHIRU_A",0.01);
Wait(15,0);
ChOpen(21,35,0,0,0,#1,#1,0,0);
VoicePlay("I562100002_21_000");
MsgDisp("Michiru","You handled that well.");
MsgDisp("主人公","Really?");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("I562100002_21_010");
MsgDisp("Michiru","Really. You were right to recommend
seasonal items. As expected!");
MsgDisp("主人公","(I did it!
｛みちる＊｝ praised me!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
