BGOpen("wf620",0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040306300_03_000");
MsgDisp("Honda","The sea at Hanegasaki differs depending on
the season.");
MsgSel("We have the sea all to ourselves!","The winter sea is miserable huh...","The winter sea has many tasty things♪");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,1);
    VoicePlay("B040306300_03_010");
    MsgDisp("Honda","The winter sea definitely doesn't have
many living things.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040306300_03_020");
    MsgDisp("Honda","But it's definitely cleaner than the
summer sea. There's less plankton, so the
visibility increases, and the seasonal
winds bring the deep sea water up!");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChSet(3,3,1);
    VoicePlay("B040306300_03_030");
    MsgDisp("Honda","Yep yep, that's right!
The cold makes the body fatty, large fish
are best in winter!");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
