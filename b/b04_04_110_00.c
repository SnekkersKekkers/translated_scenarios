BGMPlay("BGM_PLACE_POOL",0.01);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ScrFadeIn(0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("B040411000_04_000");
MsgDisp("Nanatsumori","Can you swim?");
MsgSel("Call me the mermaid of Habataki City!","I wanted you to teach me how to swim...","Could I bring a swim ring?");
switch (MsgSelRsltGet()){
    case 0:
    if (PlPrmGet(2)>=40){
        DateRateSet(4);
        ChEye(4,3);
        ChMouth(4,2);
        ChMotion(4,1,1);
        ChEyeOpenLevel(4,10);
        VoicePlay("B040411000_04_010");
        MsgDisp("Nanatsumori","Ohー, pretty.
You really are like a mermaid.");
        MsgDispSksp(1,7);
        MsgDateResultDisp();
        MsgDispSksp(0);
        }
    else {
        DateRateSet(0);
        ChEye(4,2);
        ChMouth(4,1);
        ChMotion(4,2,1);
        VoicePlay("B040411000_04_020");
        MsgDisp("Nanatsumori","...Mermaids don't sink, 
do they?");
        MsgDateResultDisp();
        }
    break ;
    case 1:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,2,1);
    VoicePlay("B040411000_04_030");
    MsgDisp("Nanatsumori","That's impossible.
Since I don't want to swim.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040411000_04_040");
    MsgDisp("Nanatsumori","ＯＫ. Then you should bring one that'll
look good in photos.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
