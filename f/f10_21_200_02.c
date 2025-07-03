BGOpen("sc230",0);
ChLayout(1);
MsgClose();
ChOpen(21,254,0,0,0,-1,-1,0,0,0,0);
BGMPlay("BGM_HANYOU_A",0.01);
ScrFadeIn(0);
MsgDisp("主人公","Ah,｛みちる＊｝.");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("F102120002_21_000");
MsgDisp("Michiru","Mari.
You're looking lively
and cute today too.");
MsgDisp("主人公","Come on,｛みちる＊｝!
I'm embarrassed....");
ChClose(21,0,30);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChOpen(21,254,7,0,0,-1,-1,0,1,0,30);
ChOpen(6,254,0,0,0,-1,-1,0,2,0,30);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("F102120002_06_000");
MsgDisp("Himuro","Ah.");
MsgDisp("主人公","Ah,｛氷室＊＊｝.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("F102120002_06_010");
MsgDisp("Himuro","...Goodbye.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(6);
MsgDisp("主人公","???
What's up with ｛氷室＊＊｝ ");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,3);
VoicePlay("F102120002_21_010");
MsgDisp("Michiru","Hey Mari.
Don't you think the way Himuro-chan
addresses people is weird?");
MsgDisp("主人公","The way he addresses people?");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,4);
VoicePlay("F102120002_21_020");
MsgDisp("Michiru","Me and Hikaru are twin sisters.
Even so, he calls both of us
\"Hanatsubaki-senpai\".");
ChEye(21,2);
ChMouth(21,4);
ChMotion(21,0);
VoicePlay("F102120002_21_030");
MsgDisp("Michiru","I don't know which of us he's 
referring to. Even though most other
people would call us by our first names.");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,2);
VoicePlay("F102120002_21_040");
MsgDisp("Michiru","So when I asked him if he should 
call me by my first name, he avoided 
me for some reason. He's a weird boy.");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,0);
VoicePlay("F102120002_21_050");
MsgDisp("Michiru","...Hey, what does he call you, Mari?");
MsgDisp("主人公","(Isn't it actually kind of embarrassing
for ｛氷室＊＊｝ to call girls by
their first names?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
