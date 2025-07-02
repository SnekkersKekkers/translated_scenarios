MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
BGOpen("wf200",1);
MsgClose();
ChLayout(2);
ScrFadeIn(0);
MsgDisp("主人公","(Wow......
The sea is beautiful today too.)");
MsgDisp("主人公","(......Ah.
Kuya-san is over there!)");
MsgDisp("主人公","Kuya——");
MsgClose();
SEPlay("EV_SE_544",0,0.5);
ChOpen(9,35,2,2,2,-1,-1,0,0);
VoicePlay("D030900701_09_000");
MsgDisp("Kuya","…………");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(9);
MsgDisp("主人公","(Wow, he seems really busy......)");
MsgDisp("主人公","…………");
MsgDisp("主人公","(Yeah.
I should stop getting in Kuya-san's
way......)");
MsgClose();
ScrFadeOut(0,0);
