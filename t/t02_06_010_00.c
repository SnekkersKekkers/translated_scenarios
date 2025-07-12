MsgType(1);
BGOpen("ex980",0);
ChLayout(0);
ScrFadeIn(0);
VoiceEVSPlay(6);
VoicePlay("T020601000_06_000");
MsgDisp("Himuro?","｛主人公｝.");
MsgClear();
Wait(60);
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
BGMPlay("BGM_C06_INORI_KOKU",0.01);
ChOpen(6,254,7,0,0,#1,#1,0,0);
VoicePlay("T020601000_06_010");
MsgDisp("Himuro","That's good, you're here......");
MsgDisp("主人公","｛氷室＊＊｝.");
ChEye(6,0);
ChMouth(6,0);
VoicePlay("T020601000_06_020");
MsgDisp("Himuro","To be honest, I was worried. What would I
do if you graduated without me seeing you
again?");
MsgDisp("主人公","Eh?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("T020601000_06_030");
MsgDisp("Himuro","It's possible for you.");
ChEye(6,4);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,8);
VoicePlay("T020601000_06_040");
MsgDisp("Himuro","You've surprised me many times before
with your words and actions.");
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("T020601000_06_050");
MsgDisp("Himuro","At first, I was very frustrated.
Things weren't going as I expected,
and I had no time to spare......");
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("T020601000_06_060");
MsgDisp("Himuro","And that's when I first realized how
painful it is to chase after someone");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("T020601000_06_070");
MsgDisp("Himuro","To be honest, I was desperate. Even though
we met many times, I would always just
promise myself I would do it next time.");
ChEye(6,4);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,8);
VoicePlay("T020601000_06_080");
MsgDisp("Himuro","Thinking about it now...... I think, even
back then I was charmed by you.");
MsgDisp("主人公","Me......?");
MsgClear();
ChClose(6);
ChCustomLayout(6,5,0,-2.5);
Wait(60);
SEPlay("EV_SE_544");
ChOpen(6,254,7,4,0,#1,#1,0,0,0,120);
VoicePlay("T020601000_06_090");
MsgDisp("Himuro","Yes. 
I've always liked you.");
MsgDisp("主人公","!");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("T020601000_06_100");
MsgDisp("Himuro","Haa......
Why did you have to be my senior?");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("T020601000_06_110");
MsgDisp("Himuro","How am I supposed to spend the year 
after you're gone?");
ChEye(6,4);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("T020601000_06_120");
MsgDisp("Himuro","Take responsibility for this.");
