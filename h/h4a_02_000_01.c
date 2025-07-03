BGOpen("sc624",0);
ChLayout(1);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    case 4:
    case 5:
    ScrFadeIn(0);
    MsgClose();
    BGMPlay("BGM_C02_SASSA_C",0.01);
    ChOpen(2,254,4,0,4,-1,-1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("H4A0200001_02_000");
    MsgDisp("Sassa","｛主人公｝,
good work.");
    MsgDisp("主人公","｛颯砂＊＊｝.
Sorry you came all this way.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("H4A0200001_02_010");
    MsgDisp("Sassa","Why are you apologizing?
All you have to do is receive your
results. No one else matters.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("H4A0200001_02_020");
    MsgDisp("Sassa","That's how sports are.
That's why it's both fun and hard......
right?");
    MsgDisp("主人公","Y, yeah......");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("H4A0200001_02_030");
    MsgDisp("Sassa","Frustration is proof you took this
seriously. If you don't self-assess, it's
disrespectful of your own hard work.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,1);
    VoicePlay("H4A0200001_02_040");
    MsgDisp("Sassa","It's something no one else but you
can do. Right?　Look forward and keep
going!");
    MsgDisp("主人公","(It's just as ｛颯砂＊＊｝ says.
I lost, but I'm glad I stayed in the
rhythmic gymnastics club.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
