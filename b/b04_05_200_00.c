BGOpen("tr110",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B040520000_05_000");
MsgDisp("Hiiragi","How is your skiing abilities?");
MsgSel("Call me a princess on the snow!","It's to the point I won't fall over...","I was hoping you'd teach me...");
switch (MsgSelRsltGet()){
    case 0:
    if (PlPrmGet(2)>=40){
        DateRateSet(4);
        ChEye(5,4);
        ChMotion(5,0);
        VoicePlay("B040520000_05_010");
        MsgDisp("Hiiragi","If I'm with you,
I'll look like an advanced skier too.");
        MsgDispSksp(1,8);
        MsgDateResultDisp();
        MsgDispSksp(0);
        }
    else {
        DateRateSet(0);
        ChEye(5,2);
        ChMotion(5,1);
        VoicePlay("B040520000_05_020");
        MsgDisp("Hiiragi","If you tell me to call you that, 
I will, but princess?");
        MsgDateResultDisp();
        }
    break ;
    case 1:
    DateRateSet(1);
    ChEye(5,2);
    ChMotion(5,0);
    VoicePlay("B040520000_05_030");
    MsgDisp("Hiiragi","I'm the same.
Well, there's no point in just the 
two of us standing there.
Let's go and look around the lodge.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,4);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040520000_05_040");
    MsgDisp("Hiiragi","I see, there's an idea.
Let's take a beginner's lesson together.
I'll sign up.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
