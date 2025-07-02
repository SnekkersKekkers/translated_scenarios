BGOpen("fp610",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChLayout(1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040411100_04_000");
MsgDisp("Nanatsumori","Can you skate?");
MsgSel("Call me a princess on ice!","It's to the point I won't fall over...","I want you to teach me...");
switch (MsgSelRsltGet()){
    case 0:
    if (PlPrmGet(2)>=40){
        DateRateSet(4);
        ChEye(4,3);
        ChMouth(4,2);
        ChMotion(4,1,1);
        ChEyeOpenLevel(4,10);
        VoicePlay("B040411100_04_010");
        MsgDisp("Nanatsumori","Oh, you're like a pro.
Amazing.");
        MsgDisp("主人公","(Yay! A perfect impression∈)");
        }
    else {
        DateRateSet(0);
        ChEye(4,2);
        ChMouth(4,1);
        ChMotion(4,2,1);
        VoicePlay("B040411100_04_020");
        MsgDisp("Nanatsumori","What a timid princess.");
        MsgDateResultDisp();
        }
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040411100_04_030");
    MsgDisp("Nanatsumori","You don't need to be so humble?
If you're good, you're good.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    VoicePlay("B040411100_04_040");
    MsgDisp("Nanatsumori","I can teach you the
trick to not fall over.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
