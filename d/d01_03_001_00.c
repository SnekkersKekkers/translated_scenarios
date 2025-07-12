BGOpen("sc510",0);
ChLayout(1);
SEPlay("EV_SE_736",1,0.4);
ScrFadeIn(0);
VoicePlay("D010300100_42_000");
MsgDisp("Male Student","I can't believe you have a poster.
That's amazing, Honda!");
VoicePlay("D010300100_44_000");
MsgDisp("School Girl","Iku-kun is really cool∈");
MsgDisp("主人公","(｛本多＊＊｝?
Why is everyone standing around here?)");
SEStop("EV_SE_736",1);
MsgClose();
ScrFadeOut(0);
BGMPlay("BGM_C03_HONDA_I",0.01);
StlOpen("ev_03_07");
StlEye(3,0);
StlMouth(3,0);
SEPlay("EV_SE_841",0.5,0.6);
ScrFadeIn(0);
VoicePlay("D010300100_03_000");
MsgDisp("Honda","Hehe, how's this?
Did I do it right?");
StlEye(3,1);
StlMouth(3,0);
VoiceEVSPlay(3);
VoicePlay("D010300100_03_010");
MsgDisp("Honda","｛主人公｝, look look!
It's the same pose as in the poster!");
MsgDisp("主人公","Eh, you have a poster∋");
StlEye(3,0);
StlMouth(3,0);
StlEyeOpenLevel(3,5,1);
SEStop("EV_SE_841",2);
VoicePlay("D010300100_03_020");
MsgDisp("Honda","That's right.
Every year, the previous year's champion
gets a poster.");
SEPlay("EV_SE_736",0,0.7);
MsgDisp("主人公","That's amazing!
Isn't this posted in all high schools
across the country?");
StlEye(3,1);
StlMouth(3,0);
VoicePlay("D010300100_42_020");
MsgDisp("Male Student","Wow, we have a famous person!
Honda, can I get your autograph?");
VoicePlay("D010300100_44_010");
MsgDisp("School Girl","Us too!");
StlEye(3,1);
StlMouth(3,0);
StlEyeOpenLevel(3,5);
VoicePlay("D010300100_03_030");
MsgDisp("Honda","Okiedokie, that's fine.
Line up?");
SEStop("EV_SE_736",1);
MsgClose();
ScrFadeOut(0);
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChOpen(3,254,7,0,0,#1,#1,0,0);
BGMVol(0.5,2);
ScrFadeIn(0);
ChMotion(3,1,1);
VoicePlay("D010300100_03_040");
MsgDisp("Honda","Sorry for the wait.
Now it's your turn, right?");
MsgDisp("主人公","Eh?");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("D010300100_03_050");
MsgDisp("Honda","You don't want my signature......?");
MsgDisp("主人公","Uhm, I guess I'll get it then.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
ChEyeOpenLevel(3,0);
VoicePlay("D010300100_03_060");
MsgDisp("Honda","Okay.
I'll also give you a special poster.");
MsgDisp("主人公","You're not going to take this one off
right?");
ChEye(3,1);
ChMouth(3,4);
ChMotion(3,0,1);
ChEye(3,0);
ChMouth(3,3);
VoicePlay("D010300100_03_070");
MsgDisp("Honda","I won't do that kind of thing.
I have a lot of them at home that I got
from people at the competition.");
MsgDisp("主人公","Hehe, I see.
Thank you.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("D010300100_03_080");
MsgDisp("Honda","I put a poster up in my sister's room.
What about putting it in your room?");
MsgDisp("主人公","Um......I'll think about it?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("D010300100_03_090");
MsgDisp("Honda","Okay, then until next time.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(3);
MsgDisp("主人公","(Did ｛本多＊＊｝ put that poster up
in his sister's room without her
permission......?)");
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(3,0);
