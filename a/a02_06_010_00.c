BGOpen("sc211",0);
ScrFadeIn(0);
MsgDisp("主人公","(It's time for the entrance 
ceremony......)");
MsgDisp("主人公","(......Huh?
This boy right here......)");
MsgClose();
BGMPlay("BGM_C06_INORI_I",0.01);
ChOpen(6,254,2,1,1,0,-1,0,0);
VoicePlay("A020601000_06_000");
MsgDisp("Himuro?","………………");
MsgDisp("主人公","(It's the guy who was talking 
to Vice Principal Himuro in the corridor
......I think?)");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("A020601000_06_010");
MsgDisp("Himuro?","What do you want?");
MsgDisp("主人公","Eh?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("A020601000_06_020");
MsgDisp("Himuro?","If you've got something to ask,
just do it already.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("A020601000_06_030");
MsgDisp("Himuro?","Or should I ask you first?
I know exactly what Habataki High 
students want to ask me.");
MsgDisp("主人公","? I mean......
Are you and Vice Principal Himuro——");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,4);
ChEyeOpenLevel(6,8);
VoicePlay("A020601000_06_040");
MsgDisp("Himuro?","Huh......As expected.
You think we look alike?");
MsgDisp("主人公","Huh?
Huh......Yeah sure!");
MsgClose();
ScrFadeOut(0);
ChClose(6,0,0);
StlOpen("ev_06_01");
StlEye(6,0);
StlMouth(6,0);
StlEyeOpenLevel(6,5,1);
SEPlay("EV_SE_623",0,0.8);
Wait(10,0);
ScrFadeIn(0);
SEPlay("EV_SE_049",0,0.8);
ScrQuake(1);
SEWait();
VoicePlay("A020601000_06_050");
MsgDisp("Himuro?","Shut up.
That's enough.");
MsgDisp("主人公","∋");
StlEye(6,0);
StlMouth(6,0);
VoicePlay("A020601000_06_060");
MsgDisp("Himuro?","I can see it on everyone's face,
\"What about his name, Himuro?\", or
\"What's he gotta do with Reiichi-san?\"");
StlEye(6,0);
StlMouth(6,0);
VoicePlay("A020601000_06_070");
MsgDisp("Himuro?","You judge people based on that only?");
MsgDisp("主人公","N-No, that's not......");
StlEye(6,0);
StlMouth(6,0);
StlEyeOpenLevel(6,5,1);
VoicePlay("A020601000_06_080");
MsgDisp("Himuro?","You're gonna ignore my personal 
identity? Is it so much more important 
to satisfy your own curiosity?");
StlEye(6,0,0);
StlMouth(6,0);
StlEyeOpenLevel(6,0,1);
VoicePlay("A020601000_06_090");
MsgDisp("Himuro?","I'm so sick of it.");
BGMVol(0.5,2);
MsgClose();
ScrFadeOut(0);
StlClose();
MsgClose();
SEPlay("EV_SE_552",0,0.8);
ChOpen(6,254,5,1,0,-1,-1,0,0);
Wait(60);
ScrFadeIn(0);
MsgDisp("主人公","......Um, I did something that
offended you, didn't I?
......I'm sorry.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("A020601000_06_100");
MsgDisp("Himuro?","………………");
ChEye(6,2);
ChMouth(6,2);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("A020601000_06_110");
MsgDisp("Himuro?","No, I'm sorry too.
It's our first time meeting and I've 
already been rude to you, even though 
you're my senpai.");
MsgDisp("主人公","No no, that's okay. I'm ｛主人公姓名｝.
Before anything else, it's nice to 
meet you, okay?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("A020601000_06_120");
MsgDisp("Himuro","I'm Himuro Inori. First year. As you might
have guessed, I'm Reiichi-san's...... Vice
Principal Himuro and I are related.");
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,0);
ChEyeOpenLevel(6,0);
VoicePlay("A020601000_06_130");
MsgDisp("Himuro","But don't
bring it up too much please.
......'cause I'll get angry.");
MsgDisp("主人公","O-Okay.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("A020601000_06_140");
MsgDisp("Himuro","Well then. You're dismissed.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(6);
MsgDisp("主人公","(｛氷室＊＊｝......
Seems like I should stay away from
bringing up his relationship with
the vice principal.)");
ChPrmTblAdd(6,0);
MsgClose();
ScrFadeOut(0);
