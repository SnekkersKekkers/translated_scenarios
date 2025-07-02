BGOpen("tr300",0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B030422000_04_000");
MsgDisp("Nanatsumori","So refined, huh.
This is our destination after all.");
VoicePlay("B030422000_04_010");
MsgDisp("Nanatsumori","Castle or exhibit, which do you want to
see?");
MsgSel("I want to see Habataki Tower","Let's go to the Exhibition Corner");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,1,1);
    VoicePlay("B030422000_04_020");
    MsgDisp("Nanatsumori","Well, tower sounds good.
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
    MsgDisp("Nanatsumori","It's becoming even more refined...
Are you really serious?");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
