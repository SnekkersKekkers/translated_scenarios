BGMPlay("BGM_PLACE_POOL",0.01);
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
ScrFadeIn(0);
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("B040111000_01_000");
MsgDisp("Kazama","Since I came back, I've had a lot of
opportunities to swim...
You like swimming, right?");
MsgSel("Call me the mermaid of Habataki City!","Well, I'd love to learn how...","Can I get an inner tube?");
switch (MsgSelRsltGet()){
    case 0:
    if (PlPrmGet(2)>=40){
        DateRateSet(4);
        ChEye(1,4);
        ChMouth(1,2);
        ChMotion(1,0);
        ChCheek(1,7);
        VoicePlay("B040111000_01_010");
        MsgDisp("Kazama","A...
Mermaid.
In Habataki City.");
        MsgDispSksp(1,7);
        MsgDateResultDisp();
        MsgDispSksp(0);
        }
    else {
        DateRateSet(0);
        ChEye(1,2);
        ChMouth(1,1);
        ChMotion(1,3);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040111000_01_020");
        MsgDisp("Kazama","Whoa, hey, take it easy!
More like the Habataki Merlion.");
        MsgDateResultDisp();
        }
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,1);
    VoicePlay("B040111000_01_030");
    MsgDisp("Kazama","I don't have the qualifications to teach.
Can't you just kind of paddle your way
through?");
    MsgDispSksp(1,7);
    ChEyeOpenLevel(1,#1);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("B040111000_01_040");
    MsgDisp("Kazama","Nice.
Ask for a big one, please.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
