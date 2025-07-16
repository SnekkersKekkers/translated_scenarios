BGOpen("wf110",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,4,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040601101_06_000");
MsgDisp("Himuro","Are you smoke, or are you an idiot?");
MsgSel("What does that mean?","You also like it huh, ｛氷室＊＊｝?","It's not like that?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040601101_06_010");
    MsgDisp("Himuro","Do you not know the proverb?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,1);
    VoicePlay("B040601101_06_020");
    MsgDisp("Himuro","... Heh, is that your response?
How interesting.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040601101_06_030");
    MsgDisp("Himuro","Do you not understand jokes?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
