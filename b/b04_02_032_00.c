BGOpen("wf320",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4,1);
ScrFadeIn(0);
VoicePlay("B040203200_02_000");
MsgDisp("Sassa","Woah, this kind of place exists.");
MsgSel("It was on the news, right?","Maybe they made it in secret?","It's great when it's sunny, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("B040203200_02_010");
    MsgDisp("Sassa","Oh, am I the only one whose out of the
loop?
That's a bit sad.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040203200_02_020");
    MsgDisp("Sassa","That must be it.
They shouldn't make it and not tell us.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(2,3);
    ChMouth(2,4);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("B040203200_02_030");
    MsgDisp("Sassa","In that case, today is the best day to be
here.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
