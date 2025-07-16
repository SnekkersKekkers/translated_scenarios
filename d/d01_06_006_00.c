BGOpen("ho210",0);
ScrFadeIn(0);
SEPlay("EV_SE_787");
SEWait();
MsgDisp("主人公","(Ah......it's from Habatcher's editorial
department.)");
MsgDisp("主人公","(Let's see, it says \"Surfing exhibition in
progress at Habataki Beach\"......
Alright, I'll cover it!)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("wf601",0);
SEPlay("EV_SE_GAYA_003",0.9);
ScrFadeIn(0);
MsgDisp("主人公","(The exhibition was a huge success!
There are a lot of people in Habataki who
love surfing......)");
VoicePlay("D010600600_33_000");
MsgDisp("Male Customer A","Oh, it's that kid!
Apparently that guy won the 15 and Under
category.");
VoicePlay("D010600600_39_010");
MsgDisp("Male Customer B","Yeah, let's go with the flow!");
MsgDisp("主人公","(Hmm, I guess there's an amazing
candidate......)");
SEStop("EV_SE_GAYA_003",3);
SEPlay("EV_SE_GAYA_021",0,0.9);
SEPlay("EV_SE_CLAP_004",0,0.3);
Wait(50,0);
VoicePlay("D010600600_34_020");
MsgDisp("Live","And Inori Himuro is off!
That's a nice wave!");
MsgDisp("主人公","(Eh......
｛氷室＊＊｝∋ )");
EnvAutoSet(0);
BGMPlay("BGM_C06_INORI_C",0.01);
SEStop("EV_SE_GAYA_021",1);
SEStop("EV_SE_CLAP_004",1);
MsgClose();
ScrFadeOut(0);
SEPlay("EV_SE_532",0,0.8);
SEPlay("EV_SE_GAYA_003",0.9);
ChLayout(1);
StlEye(6,0);
StlMouth(6,0);
StlOpen("ev_06_12");
ScrFadeIn(0);
Wait(50,0);
VoicePlay("D010600600_34_030");
MsgDisp("Live","What a nice cutback!
One, two, ...... another one, he's going
crazy!");
SEPlay("EV_SE_793",0.2,0.5);
SEPlay("EV_SE_CLAP_004",0,0.5);
Wait(50,0);
MsgDisp("主人公","(Wow......!
｛氷室＊＊｝ is riding the wave!)");
StlEye(6,0);
StlMouth(6,0);
VoicePlay("D010600600_06_000");
MsgDisp("Himuro","......Just like that......!");
SEPlay("EV_SE_532",0,0.7);
MsgDisp("主人公","(What a serious face......
｛氷室＊＊｝ looks different than
usual.)");
BGMVol(0.5,2);
SEStop("EV_SE_GAYA_003",2);
SEStop("EV_SE_793",2);
SEStop("EV_SE_CLAP_004",2);
SEStop("EV_SE_532",2);
MsgClose();
ScrFadeOut(0);
EnvAutoSet(1);
StlClose();
Wait(30,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("wf601",1);
ScrFadeIn(0);
SEPlay("EV_SE_542");
SEWait();
ChOpen(6,31,0,0,0,#1,#1,0,0);
MsgDisp("主人公","Ah, ｛氷室＊＊｝!
Nice work!
You were amazing∈");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ChEyeOpenLevel(6,8);
VoicePlay("D010600600_06_010");
MsgDisp("Himuro","You're way too excited......");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("D010600600_06_020");
MsgDisp("Himuro","What's with the notebook and pen?");
MsgDisp("主人公","I've been waiting to interview you,
｛氷室＊＊｝.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("D010600600_06_030");
MsgDisp("Himuro","Interview?");
MsgDisp("主人公","Yeah. I work part-time for Habataki
Watcher. I'd like to get permission for an
interview.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
ChEyeOpenLevel(6,8);
VoicePlay("D010600600_06_040");
MsgDisp("Himuro","Would interviewing someone like me be
interesting?");
MsgDisp("主人公","It would be!");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("D010600600_06_050");
MsgDisp("Himuro","Ah, I see. Confident answer. Well, if it's
on the way home, I don't mind.");
MsgDisp("主人公","Really∋
Thanks!
Let's get right to it then——");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("D010600600_06_060");
MsgDisp("Himuro","I said \"On the way home\".");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("D010600600_06_070");
MsgDisp("Himuro","Or are you trying to make me go home still
dressed like this?");
MsgDisp("主人公","Agh, sorry!
I didn't mean it like that......");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("D010600600_06_080");
MsgDisp("Himuro","...... Geez.
Wait there.
I'll be right back.");
MsgClose();
SEPlay("EV_SE_531");
BGMStop();
MsgClose();
ChClose(6);
MsgDisp("主人公","(｛氷室＊＊｝ is already his usual self?
Alright, time to get a lot of stories!)");
MsgClose();
ScrFadeOut(0);
ChPrmTblAdd(6,0);
