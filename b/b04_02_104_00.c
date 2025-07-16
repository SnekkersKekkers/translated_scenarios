BGOpen("fp440",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0,1);
ScrFadeIn(0);
VoicePlay("B040210400_02_000");
MsgDisp("Sassa","The rhinoceros beetle is cool, huh?");
MsgSel("Insects are insects","It's somewhat scary","The belly part is just...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(0);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    ChEyeOpenLevel(2,7);
    VoicePlay("B040210400_02_010");
    MsgDisp("Sassa","I never said they weren't insects, did I?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040210400_02_020");
    MsgDisp("Sassa","Well, I understand your feelings.
I can also only handle 10 at a time?
Anything more than that is a little...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B040210400_02_030");
    MsgDisp("Sassa","Really?
They kinda look like robots, I think
that's cool.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
