ChLayout(1);
ChNanaType(1);
MsgClose();
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(1);
    ChOpen(4,35,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("I330400001_04_000");
    MsgDisp("Nanatsumori","......Ah.");
    MsgDisp("主人公","Huh...... ｛七ツ森＊｝?");
    ChEye(4,2);
    ChMouth(4,1);
    ChMotion(4,4,1);
    VoicePlay("I330400001_04_010");
    MsgDisp("Nanatsumori","Shh!");
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("I330400001_04_020");
    MsgDisp("Nanatsumori","Why are you here?");
    MsgDisp("主人公","I'm working part-time here
starting today.
Um......");
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("I330400001_04_030");
    MsgDisp("Nanatsumori","......Me?
The modeling agency's nearby,
so I take breaks here sometimes.");
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,1,1);
    VoicePlay("I330400001_04_040");
    MsgDisp("Nanatsumori","So...... get it?");
    MsgDisp("主人公","Yeah.
You're the model NANA here, right?
Got it. See you around!");
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("I330400001_04_050");
    MsgDisp("Nanatsumori","'Kay, 'kay.
......I'm counting on you.");
    MsgDisp("主人公","(Alright, let's do this!)");
    MsgClose();
    break ;
    case 3:
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(1);
    ChOpen(4,35,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("I330400001_04_060");
    MsgDisp("Nanatsumori","Hm?
You......");
    MsgDisp("主人公","Huh, ｛七ツ森＊｝?");
    ChEye(4,2);
    ChMouth(4,1);
    ChMotion(4,4,1);
    VoicePlay("I330400001_04_070");
    MsgDisp("Nanatsumori","Shh!");
    MsgDisp("主人公","Ah...... sorry.
Why are you here?");
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("I330400001_04_080");
    MsgDisp("Nanatsumori","My modeling agency is nearby.
And, I'm on my break right now......");
    MsgDisp("主人公","I see.
Then, I guess I'll see you at work?");
    ChMotion(4,1,1);
    VoicePlay("I330400001_04_090");
    MsgDisp("Nanatsumori","Guess so.
We're both business-like here.");
    MsgDisp("主人公","Ah...... I see.
It's the model NANA here, after all.
Looking forward to seeing you.");
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("I330400001_04_100");
    MsgDisp("Nanatsumori","Yeah.");
    MsgDisp("主人公","(Alright, let's do this!)");
    MsgClose();
    break ;
    case 4:
    case 5:
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(1);
    ChOpen(4,35,0,2,1,10,#1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(4);
    VoicePlay("I330400001_04_110");
    MsgDisp("Nanatsumori","｛主人公｝.
What are you doing?");
    MsgDisp("主人公","Ah......
I'm working here starting today.");
    ChEye(4,2);
    ChMouth(4,4);
    VoicePlay("I330400001_04_120");
    MsgDisp("Nanatsumori","Seriously?");
    MsgDisp("主人公","Um, is there something wrong?");
    ChMotion(4,0,1);
    VoicePlay("I330400001_04_130");
    MsgDisp("Nanatsumori","Just a little worried that guys
from my modeling agency might come here
from time to time.");
    MsgDisp("主人公","?");
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,1,1);
    ChCheek(4,5);
    VoicePlay("I330400001_04_140");
    MsgDisp("Nanatsumori","Haa......
The apron looks great on you......");
    MsgDisp("主人公","Th-Thanks.
Hey, what are you worried about?");
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    ChCheek(4,0);
    VoicePlay("I330400001_04_150");
    MsgDisp("Nanatsumori","Listen up.
There are a lot of good-looking guys
here, so don't be fooled, okay?");
    MsgDisp("主人公","???");
    ChEye(4,0);
    ChMouth(4,1);
    ChMotion(4,1,1);
    VoicePlay("I330400001_04_160");
    MsgDisp("Nanatsumori","I gotta be careful too.
If anyone messes with you, I'll get them.
Don't worry, and work.");
    MsgDisp("主人公","(Good-looking guys?　Get them??
I guess there'll be different types of
customers. Alright, let's do this!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
