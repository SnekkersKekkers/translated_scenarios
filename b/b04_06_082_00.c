BGOpen("fp200",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040608200_06_000");
MsgDisp("Himuro","The sunlight feels nice...");
MsgSel("Yeah, I'm getting sleepy...","It really feels  like spring...","Shall we bask in the sun?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040608200_06_010");
    MsgDisp("Himuro","The spring is so comfortable that you
sleep like a log? Geez... We're together,
so don't fall asleep.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040608200_06_020");
    MsgDisp("Himuro","It's just like that.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("B040608200_06_030");
    MsgDisp("Himuro","What a waste... or rather, what an
indulgent way to pass the time. It's not a
bad thing. Let's live it up.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
