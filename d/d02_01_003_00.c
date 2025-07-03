BGOpen("sc300",1);
ScrFadeIn(0);
MsgDisp("主人公","(It's getting late......
I should go home.)");
MsgDisp("主人公","(Huh?
｛風真＊＊｝ 's bag is still here......
I wonder where he is?)");
MsgClose();
ScrFadeOut(0,0);
SEPlay("EV_SE_DOOR_025");
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
SEWait();
VoicePlay("D020100300_01_000");
MsgDisp("Kazama?","I'm not an elementary school kid
anymore.
.........Sorry.");
MsgDisp("主人公","(Ah, that voice......)");
VoicePlay("D020100300_01_010");
MsgDisp("Kazama","Dad.
I'll come over there so I can talk to
you properly.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
Wait(60);
VoicePlay("D020100300_01_020");
MsgDisp("Kazama","......Come here.");
MsgDisp("主人公","∋");
MsgClose();
SEPlay("EV_SE_DOOR_011",0,1);
SEWait();
BGOpen("sc231",1);
BGMPlay("BGM_C01_RYOUTA_D",0.01);
ChLayout(1);
MsgClose();
ChOpen(1,254,0,4,2,-1,-1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","S-Sorry.
I didn't mean to eavesdrop......");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("D020100300_01_030");
MsgDisp("Kazama","I feel like something like this
happened before.");
ChEyeOpenLevel(1,-1);
MsgDisp("主人公","Ah......Yeah.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("D020100300_01_040");
MsgDisp("Kazama","Everytime I talk to my dad, you just
happen to be here.");
MsgDisp("主人公","Like I thought, it was your dad......
｛風真＊＊｝, are you going to England?");
ChMotion(1,0);
Wait(16,0);
ChEye(1,4);
ChMouth(1,2);
VoicePlay("D020100300_01_050");
MsgDisp("Kazama","......Yeah, I'm going.");
MsgDisp("主人公","！");
ChEye(1,0);
ChMouth(1,4);
ChMotion(1,1);
VoicePlay("D020100300_01_060");
MsgDisp("Kazama","I promised my dad I would help out with
the business there after I graduated
high school.");
ChEye(1,4);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("D020100300_01_070");
MsgDisp("Kazama","So before that could happen, I asked
for a favor and was allowed to spend
three years here.");
MsgDisp("主人公","So that's how it is......");
ChMotion(1,0);
Wait(12,0);
ChEye(1,4);
ChMouth(1,2);
VoicePlay("D020100300_01_080");
MsgDisp("Kazama","I actually planned to go back there
during the summer of freshman year and
explain my feelings to him.");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("D020100300_01_090");
MsgDisp("Kazama","But I avoided doing it until just now.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("D020100300_01_100");
MsgDisp("Kazama","It was nothing more than insurance......
And I kept avoiding it, like a coward.");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,2);
ChMouth(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("D020100300_01_110");
MsgDisp("Kazama","Because I'm a coward, I'm stuck trying to
have it both ways......It's inconsiderate
to dad's business, and to my grandpa.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT",0.3,0.6);
ChClose(1,0,30);
ChCustomLayout(1,5,0,-2.7);
SEStop("EV_SE_FOOT_WALK_COME_ALONE_SHORT",0);
MsgClose();
SEPlay("EV_SE_544");
ChOpen(1,254,7,4,2,-1,-1,0,0,0,30);
VoicePlay("D020100300_01_120");
MsgDisp("Kazama","Most of all......
It was inconsiderate to you.");
MsgClose();
SEPlay("EV_SE_512",0.3,0.6,0.1);
SEPlay("EV_SE_551",0.5,0.4);
ScrFadeOut(0,0,30);
ChClose(1,0,0);
SEWait();
MsgDisp("主人公","｛風真＊＊｝……？");
VoicePlay("D020100300_01_130");
MsgDisp("Kazama","That's why I have to go......");
MsgDisp("主人公","......You'll come back, right?");
VoicePlay("D020100300_01_140");
MsgDisp("Kazama","I promise.
I'll be waiting for you at the usual
spot again.");
ChLayout(0);
SEPlay("EV_SE_677",0.4,0.2);
Wait(10,0);
MsgClose();
ChOpen(1,254,0,4,3,10,-1,0,0);
ScrFadeIn(0,30);
MsgDisp("主人公","Okay......");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("D020100300_01_150");
MsgDisp("Kazama","......Bye.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop(2);
ChClose(1);
SEWait();
MsgDisp("主人公","（｛風真＊＊｝……）");
MsgClose();
ScrFadeOut(0,0);
