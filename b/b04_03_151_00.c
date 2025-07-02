BGOpen("ne310",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChLayout(1);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040315100_03_000");
MsgDisp("Honda","Wellー, let's start!");
MsgSel("I won't lose!","｛本多＊＊｝'s ball seems heavy'","A competition is a bit...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,1);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040315100_03_010");
    MsgDisp("Honda","Yep yep, me too!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("B040315100_03_020");
    MsgDisp("Honda","Right right, that's bowling's iron rule. I
don't have much strength myself, so I
compensate with the weight of the ball.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("B040315100_03_030");
    MsgDisp("Honda","Eh?
Either way the score will be posted,
and the winner will be clear, right?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
