BGMPlay("BGM_PLACE_POOL",0.01);
ChLayout(1);
ChSet(3,0,1);
ScrFadeIn(0);
VoicePlay("B040311000_03_000");
MsgDisp("Honda","By the way, are you good at swimming?");
MsgSel("I've been called the Habataki City Mermaid!","I was hoping you could teach me how to swim...","Could I bring a float?");
switch (MsgSelRsltGet()){
    case 0:
    if (PlPrmGet(2)>=40){
        DateRateSet(4);
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,3);
        ChEyeOpenLevel(3,0);
        VoicePlay("B040311000_03_010");
        MsgDisp("Honda","Yep yep, your swimming
lives up to the name right? ");
        MsgDispSksp(1,7);
        MsgDateResultDisp();
        MsgDispSksp(0);
        }
    else {
        DateRateSet(0);
        ChEye(3,0);
        ChMouth(3,4);
        ChMotion(3,0,1);
        ChEyeOpenLevel(3,8);
        VoicePlay("B040311000_03_020");
        MsgDisp("Honda","That name is a lie though...");
        MsgDateResultDisp();
        }
    break ;
    case 1:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("B040311000_03_030");
    MsgDisp("Honda","I understand the theory but,
I can't teach you something I
can't put into practice myself.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040311000_03_040");
    MsgDisp("Honda","Yep yep I was thinking of asking that too.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
