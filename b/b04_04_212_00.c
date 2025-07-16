BGOpen("tr230",0);
ChLayout(1);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040421200_04_000");
MsgDisp("Nanatsumori","Oh.
They have a pretty good selection of items
hereー.");
MsgSel("I have to get the limited edition stuff","Just looking is fine...","I want a plushie");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B040421200_04_010");
    MsgDisp("Nanatsumori","I get it. It's limited by time, limited to
this place, and limited to the zoo. It's
like you have to get them all.");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,0);
    VoicePlay("B040421200_04_020");
    MsgDisp("Nanatsumori","...Are you trying to save money?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040421200_04_030");
    MsgDisp("Nanatsumori","Oh, how about this lion?
Isn't it kind of charming?");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
