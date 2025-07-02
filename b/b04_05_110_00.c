BGMPlay("BGM_PLACE_POOL",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("B040511000_05_000");
MsgDisp("Hiiragi","I'm not great with exercise,
but I like swimming.
What about you?");
MsgSel("Call me the mermaid of Habataki City!","I was hoping you could teach me how to swim...","Can I bring a float?");
switch (MsgSelRsltGet()){
    case 0:
    if (PlPrmGet(2)>=40){
        DateRateSet(4);
        ChEye(5,4);
        ChMouth(5,3);
        ChMotion(5,3);
        VoicePlay("B040511000_05_010");
        MsgDisp("Hiiragi","Pretty.
Just like a mermaid princess.");
        MsgDispSksp(1,7);
        MsgDateResultDisp();
        MsgDispSksp(0);
        }
    else {
        DateRateSet(0);
        ChEye(5,2);
        ChMouth(5,2);
        VoicePlay("B040511000_05_020");
        MsgDisp("Hiiragi","You're swimming though?
Make sure to properly give me a 
shout if you need any help.");
        MsgDateResultDisp();
        }
    break ;
    case 1:
    DateRateSet(2);
    ChMotion(5,4);
    VoicePlay("B040511000_05_030");
    MsgDisp("Hiiragi","Let's do the fundementals then.
For anything more than that,
let's learn it together.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,4);
    ChMouth(5,4);
    VoicePlay("B040511000_05_040");
    MsgDisp("Hiiragi","I'll get it for you.
Float at your leisure.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
