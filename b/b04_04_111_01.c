BGOpen("fp610",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChLayout(1);
ChEye(4,0);
ChMouth(4,2);
ChMotion(4,1);
ScrFadeIn(0);
VoicePlay("B040411101_04_000");
MsgDisp("Nanatsumori","Oops!
Isn't it super slippy around here?");
MsgSel("We are skating after all","Relax, relax!","Shall we skate whilst holding hands?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(4,1);
    ChMouth(4,2);
    ChMotion(4,2,1);
    VoicePlay("B040411101_04_010");
    MsgDisp("Nanatsumori","It's coldー......");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("B040411101_04_020");
    MsgDisp("Nanatsumori","...Even if I do that, it won't change the
fact it's slippery.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,0,1);
    ChCheek(4,5);
    VoicePlay("B040411101_04_030");
    MsgDisp("Nanatsumori","...Please.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
