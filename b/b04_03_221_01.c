BGOpen("tr320",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040322101_03_000");
MsgDisp("Honda","Cypress, Pine, Zelkova...
Procuring wood must have
been difficult at the time.");
MsgSel("I wonder how they carried it?","It's a splendid main pillar!","I wonder how much it cost?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040322101_03_010");
    MsgDisp("Honda","Good qustion!
They used a large sleigh to carry it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040322101_03_020");
    MsgDisp("Honda","Yep yep, that huge pillar is Zelkova.
It's hard and sturdy, 
with beautiful grain!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(3,2);
    ChMouth(3,4);
    ChMotion(3,5);
    VoicePlay("B040322101_03_030");
    MsgDisp("Honda","Ahー, that, huh～
I'll look into it properly next time.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
