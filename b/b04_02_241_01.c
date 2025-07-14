BGOpen("tr510",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
ScrFadeIn(0);
VoicePlay("B040224101_02_000");
MsgDisp("Sassa","It says \"A lamb has been born\".");
MsgSel("I want to go see it!","Is that all they're reporting..?","Do you like sheep ｛颯砂＊＊｝?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040224101_02_010");
    MsgDisp("Sassa","Yeah, let's go greet them.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("B040224101_02_020");
    MsgDisp("Sassa","Haha, definitely, something like \"Cute
Baby Sheep\" would have been better huh?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    ChEyeOpenLevel(2,7);
    VoicePlay("B040224101_02_030");
    MsgDisp("Sassa","Are you talking about whether I like
eating them?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
