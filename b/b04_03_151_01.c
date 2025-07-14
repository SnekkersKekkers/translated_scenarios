BGOpen("ne310",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChLayout(1);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,5,1);
ScrFadeIn(0);
VoicePlay("B040315101_03_000");
MsgDisp("Honda","Alright, a strike!");
MsgSel("The next throw is important!","Amazing! You're like a pro!","I won't lose either!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("B040315101_03_010");
    MsgDisp("Honda","Yep yep.
In terms of the score, the next throw is
critical.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040315101_03_020");
    MsgDisp("Honda","Eh, really?
I'm extremely happy!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(3,1);
    ChMotion(3,1);
    VoicePlay("B040315101_03_030");
    MsgDisp("Honda","Fine, let's play seriously!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
