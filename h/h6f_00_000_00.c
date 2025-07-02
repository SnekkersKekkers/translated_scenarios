BGMPlay("BGM_CLUB_JYUSHO");
BGOpen("sc631",0);
SEPlay("EV_SE_871",1,0.6);
ScrFadeIn(0);
MsgDisp("主人公","My entry in the gardening contest
won the grand prize!");
MsgDisp("主人公","I'm glad I worked so hard
for the gardening club!");
SEStop("EV_SE_871",1);
MsgClose();
ScrFadeOut(0);
