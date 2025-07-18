BGOpen("fp200",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040608301_06_000");
MsgDisp("Himuro","The sunlight is strong, are you alright?");
MsgSel("I've taken perfect countermeasures for sunburn!","It makes you want to eat ice cream...","｛氷室＊＊｝ is more dazzling.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("B040608301_06_010");
    MsgDisp("Himuro","Heh, you've got your act together huh?
Proper measures are important after all.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,1);
    VoicePlay("B040608301_06_020");
    MsgDisp("Himuro","It'll melt quickly and it'll get annoying
but...I feel the same. Let's go buy some.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040608301_06_030");
    MsgDisp("Himuro","Has the heat already made you go crazy?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
