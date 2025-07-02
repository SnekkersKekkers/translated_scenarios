BGOpen("wf320",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,2);
ChMotion(6,4,1);
ScrFadeIn(0);
VoicePlay("B040603200_06_000");
MsgDisp("Himuro","Uwa...
It's filled with couples...");
MsgSel("Let's get lovey-dovey too!","Shall we go somewhere else?","People are people, us is us.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(0);
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("B040603200_06_010");
    MsgDisp("Himuro","No.
Have some autonomy, will you?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040603200_06_020");
    MsgDisp("Himuro","That feels like defeat.
I'll clear my head and get over it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("B040603200_06_030");
    MsgDisp("Himuro","Good idea.
Let's have fun on our own.
Without caring about what's around us.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
