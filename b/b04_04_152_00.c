BGOpen("ne320",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChLayout(1);
ChEye(4,0);
ChMouth(4,4);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040415200_04_000");
MsgDisp("Nanatsumori","Do you know how to play?");
MsgSel("This is what you should know to be a refined adult","For now, I'll just throw it until I hit it!","I was hoping you'd teach me the rules?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040415200_04_010");
    MsgDisp("Nanatsumori","Hoo, as I expected.
Then, by all means, show me 
how to be a refined adult.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("B040415200_04_020");
    MsgDisp("Nanatsumori","Rules be damned.
Well, I guess that's not 
really wrong either.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040415200_04_030");
    MsgDisp("Nanatsumori","Got it.
It's not my fault if you don't
improve though, okay?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
