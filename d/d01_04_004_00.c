BGOpen("sc300",1);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_609");
SEWait();
MsgDisp("主人公","…………");
MsgDisp("主人公","Like usual, Nana looks really cool in
this edition of Habacha.");
MsgDisp("主人公","(I still can't believe I know such a
famous person......)");
VoicePlay("D010400400_04_000");
MsgDisp("Nanatsumori?","Ah......
You're still here?");
MsgClose();
SEPlay("EV_SE_544");
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,0,0,60);
MsgDisp("主人公","Ah, ｛七ツ森＊｝!
I was reading Habacha and lost track of
time.");
VoicePlay("D010400400_04_010");
MsgDisp("Nanatsumori","Habacha?");
MsgDisp("主人公","Yeah.
This month is a Nana edition▼");
ChMotion(4,0,1);
VoicePlay("D010400400_04_020");
MsgDisp("Nanatsumori","I see......");
MsgDisp("主人公","Hey, I was wondering......For interviews
do you usually carry make-up or something
like that with you?");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("D010400400_04_030");
MsgDisp("Nanatsumori","......Do you really want to know?");
MsgDisp("主人公","I want to know!");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("D010400400_04_040");
MsgDisp("Nanatsumori","Ok.
Since there's no one around......Let's
hang out a bit.");
MsgDisp("主人公","?");
MsgClose();
ScrFadeOut(0);
ChClose(4);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEWait();
BGMPlay("BGM_C04_NANA_C",0.01);
StlOpen("ev_04_11");
StlEye(4,0);
StlMouth(4,0);
ScrFadeIn(0);
VoicePlay("D010400400_04_050");
MsgDisp("Nanatsumori","......Perfect.");
MsgDisp("主人公","Amazing......
｛七ツ森＊｝ really looks like a girl∈");
StlEye(4,0);
StlMouth(4,0);
StlEyeOpenLevel(4,0);
VoicePlay("D010400400_04_060");
MsgDisp("Nanatsumori","Well......
I'm also good at this sort of thing.");
StlEye(4,1,0);
StlMouth(4,0);
StlEyeOpenLevel(4,5,1);
VoicePlay("D010400400_04_070");
MsgDisp("Nanatsumori","You've also become really cute,
you know?");
MsgDisp("主人公","Really?");
StlEye(4,1);
StlMouth(4,1);
VoicePlay("D010400400_04_080");
MsgDisp("Nanatsumori","Really.
Come on, let's take a photo together.");
MsgDisp("主人公","S-Sure.");
MsgDisp("主人公","(Woah......
I look so different∋)");
VoicePlay("D010400400_04_090");
MsgDisp("Nanatsumori","It's good, right?
Okay, I'll take the picture.
Lower your head and smile......");
StlEye(4,0);
StlEyeOpenLevel(4,0,1);
StlMouth(4,0);
VoicePlay("D010400400_04_100");
MsgDisp("Nanatsumori","Cheese!");
SEPlay("EV_SE_041");
MsgClose();
ScrFadeOut(0,1,3);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
StlClose();
BGMVol(0.5,2);
BGOpen("sc300",1);
MsgClose();
ChLayout(1);
ChNanaType(0);
ChOpen(4,254,0,3,3,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Wow......That was really fun!");
VoicePlay("D010400400_04_110");
MsgDisp("Nanatsumori","That's the most important part.");
MsgDisp("主人公","You not only carry makeup with you,
but you also carry wigs, huh?");
ChEye(4,4);
ChMouth(4,3);
VoicePlay("D010400400_04_120");
MsgDisp("Nanatsumori","Hm?
I just happened to have them today.");
MsgDisp("主人公","Just happened to?");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("D010400400_04_130");
MsgDisp("Nanatsumori","That's right.
Just happened to.");
MsgDisp("主人公","(｛七ツ森＊｝......just happens to be
carrying around womens' wigs∋)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
ChPrmTblAdd(4,0);
