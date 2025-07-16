BGOpen("fp440",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(4,1);
ChMouth(4,2);
ChMotion(4,2);
ChEyeOpenLevel(4,8);
ScrFadeIn(0);
VoicePlay("B040410400_04_000");
MsgDisp("Nanatsumori","Ugh...
I see something awful...");
MsgSel("Are you alright?","Sorry for dragging you along?","It's super interesting, right?!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChMotion(4,1,1);
    VoicePlay("B040410400_04_010");
    MsgDisp("Nanatsumori","... Is this a punishment game?
Did I do something wrong?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,2);
    ChMotion(4,0,1);
    VoicePlay("B040410400_04_020");
    MsgDisp("Nanatsumori","No, I was the one who decided to come
after all.
Why I did, I don't know though...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,3);
    ChMouth(4,4);
    ChMotion(4,0,1);
    ChEyeOpenLevel(4,10);
    VoicePlay("B040410400_04_030");
    MsgDisp("Nanatsumori","... You.
I seriously respect it.
I'm kind of patheticー...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
