BGOpen("tr110",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChLayout(1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040420000_04_000");
MsgDisp("Nanatsumori","How's your skiing ability?");
MsgSel("Call me a princess on the snow!","It's to the point I won't fall over...","I was hoping you would teach me...");
switch (MsgSelRsltGet()){
    case 0:
    if (PlPrmGet(2)>=40){
        DateRateSet(4);
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040420000_04_010");
        MsgDisp("Nanatsumori","Oh, what a beautiful turn.
As expected of Princess.");
        MsgDispSksp(1,8);
        MsgDateResultDisp();
        MsgDispSksp(0);
        }
    else {
        DateRateSet(0);
        ChEye(4,2);
        ChMouth(4,1);
        ChMotion(4,2,1);
        VoicePlay("B040420000_04_020");
        MsgDisp("Nanatsumori","You're lying. Ah... I can't watch this
anymore.");
        MsgDateResultDisp();
        }
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040420000_04_030");
    MsgDisp("Nanatsumori","That's more than enough.
Let's relax and enjoy this.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,1);
    ChMotion(4,2,1);
    VoicePlay("B040420000_04_040");
    MsgDisp("Nanatsumori","Eh, no way.
I'm also just a novice.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
