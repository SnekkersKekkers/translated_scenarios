BGMPlay("BGM_FESTIVAL",0.01);
Wait(50,0);
BGOpen("sc710",0);
MsgClose();
ChClose(21);
ChClose(22);
ScrFadeIn(0);
MsgDisp("主人公","(At last, the Rose Queen of
our era will be decided!)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc730",0);
ScrFadeIn(0);
VoicePlay("X200D00002_22_000");
MsgDisp("Hikaru","Look, look!
Mari is the Rose Queen∈
Yay∈");
MsgDisp("主人公","Eeehhh∋");
VoicePlay("X200D00002_21_000");
MsgDisp("Michiru","Mari, congratulations!
We're super happy too...!");
VoicePlay("X200D00002_22_010");
MsgDisp("Hikaru","Hikaru is also super happy...!
Mari, you did it▼");
MsgDisp("主人公","(I'm... rose queen!)");
SEPlay("EV_SE_082");
MsgDisp("","(I received a \"Queen's gown\" as proof of
my status as Rose Queen!)");
SEStop("EV_SE_082",1);
MsgClose();
ScrFadeOut(0,0);
