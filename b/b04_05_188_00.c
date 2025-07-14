BGOpen("ne600",1);
MsgClose();
ChOpen(5,253,0,0,0,#1,#1,0,0,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgSel("Today's movie was the best!","Today's movie was so-so","Today's movie was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(0);
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,2);
    VoicePlay("B040518800_05_000");
    MsgDisp("Hiiragi","I didn't understand the points everyone
laughed at.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,0,1);
    VoicePlay("B040518800_05_010");
    MsgDisp("Hiiragi","I know this is thoughtless, but could you
explain a bit?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040518800_05_020");
    MsgDisp("Hiiragi","Ah, I'm glad.
I didn't understand the funny parts
either.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
