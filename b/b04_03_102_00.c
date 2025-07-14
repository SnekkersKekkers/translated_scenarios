BGOpen("fp420",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChLayout(1);
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040310200_03_000");
MsgDisp("Honda","This is wasted on someone like me who
doesn't understand the merit of this
placeー.");
MsgSel("Shall we learn together?","Let's start with a motorbike license first!","Let's ask the curator");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040310200_03_010");
    MsgDisp("Honda","Yep yep, that's right.
Let's learn from scratch");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,0);
    ChMotion(3,5);
    VoicePlay("B040310200_03_020");
    MsgDisp("Honda","Ehh∋ You're starting from thereー. I need
to follow your sense of initiative!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,2);
    ChMotion(3,2);
    VoicePlay("B040310200_03_030");
    MsgDisp("Honda","We need to start by thinking about what to
ask though...");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
