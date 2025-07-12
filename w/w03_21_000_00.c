BGOpen("tr400",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(2);
ScrFadeIn(0);
MsgDisp("主人公","(｛みちる＊｝... You're... here!)");
MsgDisp("主人公","｛みちる＊｝, good morning!");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(21,255,3,0,3,#1,#1,0,0);
VoicePlay("W032100000_21_000");
MsgDisp("Michiru","Good morning, Mari.
Shall we have some fun today?
Hehe.");
