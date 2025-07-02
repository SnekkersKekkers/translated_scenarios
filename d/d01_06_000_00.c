BGOpen("sc000",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Yep, nice weather!
I guess I'll take a walk along the
beach.)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("wf601",0);
ScrFadeIn(0);
VoicePlay("D010600000_34_000");
MsgDisp("Guy A","The waves are nice today.");
VoicePlay("D010600000_42_010");
MsgDisp("Guy B","Right?
The perfect day for surfing.");
MsgDisp("主人公","(Eh......
There are a lot of surfers out today.)");
MsgDisp("主人公","(......Huh?
Over at the cafe, is that——)");
SEPlay("EV_SE_531",0,0.3);
MsgClose();
ScrFadeOut(0);
ChClose(6,0,0);
SEWait();
BGMPlay("BGM_C06_INORI_I",0.01);
StlOpen("ev_06_06");
StlEye(6,0);
StlMouth(6,0);
ScrFadeIn(0);
MsgDisp("主人公","……｛氷室＊＊｝？");
StlEye(6,0);
StlMouth(6,0);
StlEyeOpenLevel(6,0);
VoicePlay("D010600000_06_000");
MsgDisp("Himuro","…………");
MsgDisp("主人公","Huh, does he not see me?");
StlEye(6,1);
StlMouth(6,0);
VoicePlay("D010600000_06_010");
MsgDisp("Himuro","......I see you.");
MsgDisp("主人公","That surfboard, is that yours......?");
StlEye(6,1);
StlMouth(6,0);
VoicePlay("D010600000_06_020");
MsgDisp("Himuro","What if it is?");
MsgDisp("主人公","｛氷室＊＊｝ surfs∋");
StlEye(6,1);
StlMouth(6,0);
StlEyeOpenLevel(6,5,1);
VoicePlay("D010600000_06_030");
MsgDisp("Himuro","What's with that surprised look.");
MsgDisp("主人公","It's not like that. I think it's
amazing. I want to watch you do it!");
StlEye(6,0,0);
StlMouth(6,0);
StlEyeOpenLevel(6,5,1);
VoicePlay("D010600000_06_040");
MsgDisp("Himuro","......There are a lot of other people you
can watch surf.");
SEPlay("EV_SE_621");
SEWait();
Wait(10,0);
SEPlay("EV_SE_586",0,0.2);
BGMStop();
MsgClose();
ScrFadeOut(0);
SEWait();
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ScrFadeIn(0);
MsgDisp("主人公","Ah, he left......");
VoicePlay("D010600000_34_020");
MsgDisp("Guy A","What a horrible thing to say.
You shouldn't take it personally.");
MsgDisp("主人公","Eh?");
VoicePlay("D010600000_42_030");
MsgDisp("Guy B","That guy is famous good at surfing but, 
he doesn't get along with us well.");
MsgDisp("主人公","I see......");
MsgDisp("主人公","(｛氷室＊＊｝, isn't that lonely......?)");
MsgClose();
ScrFadeOut(0);
ChPrmTblAdd(6,0);
