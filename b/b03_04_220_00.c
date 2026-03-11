BGOpen("tr300",0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B030422000_04_000");
MsgDisp("Nanatsumori","Pretty old-school, huh.
I mean, for a hangout spot for us.");
VoicePlay("B030422000_04_010");
MsgDisp("Nanatsumori","Castle or exhibit, which do you want to
see?");
MsgSel("I want to see the castle tower","Let's go to the Exhibition Corner");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,1,1);
    VoicePlay("B030422000_04_020");
    MsgDisp("Nanatsumori","Well, the weather's nice, so why not.
You got it.");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,1,1);
    ChEyeOpenLevel(4,8);
    VoicePlay("B030422000_04_030");
    MsgDisp("Nanatsumori","Doubling down on the old-school...
Are you secretly a serious type?");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
