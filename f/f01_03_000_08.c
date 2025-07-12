ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Ah, ｛本多＊＊｝.");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(3,254,0,1,4,#1,#1,0,0);
VoicePlay("F010300008_03_000");
MsgDisp("Honda","......");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
ChClose(3);
SEWait();
MsgDisp("主人公","(｛本多＊＊｝
looked mad...)");
