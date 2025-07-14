BGOpen("ne310",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChLayout(1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040415100_04_000");
MsgDisp("Nanatsumori","Are you a competitive person?");
MsgSel("I won't lose!","｛七ツ森＊｝'s ball seems heavy'","A contest is a bit..");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,1);
    ChMotion(4,2,1);
    VoicePlay("B040415100_04_010");
    MsgDisp("Nanatsumori","You're a hardcore player huh....
Then, it's fine if I lose.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040415100_04_020");
    MsgDisp("Nanatsumori","More than yours, probably.
I am a guy after all.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040415100_04_030");
    MsgDisp("Nanatsumori","Right. We came here to have fun, so let's
just enjoy it the way we like.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
