BGOpen("tr300",0);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B030222000_02_000");
MsgDisp("Sassa","Huh, you like this kind of thing?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("B030222000_02_010");
MsgDisp("Sassa","Then please be my guide.
I don't get this stuff at all.");
MsgSel("I want to see Habataki Tower","Let's go to the Exhibition Corner");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B030222000_02_020");
    MsgDisp("Sassa","Yeah, that seems like fun.
Anything that tall up will feel good.");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B030222000_02_030");
    MsgDisp("Sassa","You're pretty into your studies, aren't
you?");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
