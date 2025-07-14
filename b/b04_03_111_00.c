BGOpen("fp610",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChLayout(1);
ChSet(3,0,1);
ScrFadeIn(0);
VoicePlay("B040311100_03_000");
MsgDisp("Honda","Are you good at skating?");
MsgSel("Call me a princess on the ice ","To the point I won't fall over...","I was hoping you could teach me...");
switch (MsgSelRsltGet()){
    case 0:
    if (PlPrmGet(2)>=40){
        DateRateSet(4);
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,3);
        ChEyeOpenLevel(3,0);
        VoicePlay("B040311100_03_010");
        MsgDisp("Honda","Niceー! I wish I could skate like youー. I
admire you.");
        MsgDispSksp(1,8);
        MsgDateResultDisp();
        MsgDispSksp(0);
        }
    else {
        DateRateSet(0);
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,0,1);
        VoicePlay("B040311100_03_020");
        MsgDisp("Honda","There's no need to show off like that...");
        MsgDateResultDisp();
        }
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0);
    VoicePlay("B040311100_03_030");
    MsgDisp("Honda","You're on the right level to skate with
me.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,1);
    VoicePlay("B040311100_03_040");
    MsgDisp("Honda","Eh? Is that so. I was hoping that you
could teach me thoughー.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
