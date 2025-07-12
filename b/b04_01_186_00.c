BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChOpen(1,253,0,0,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was wonderful!","Today's movie was so-so huh","Today's movie was a miss");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040118600_01_000");
    MsgDisp("Kazama","I'm glad.
Well, I could feel your excitement too, 
it was fun.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040118600_01_010");
    MsgDisp("Kazama","Really?
Who was so excited that they 
threw their popcorn?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040118600_01_020");
    MsgDisp("Kazama","Yeah, the total production cost
and the amount of gunpowder was
staggering though.");
    MsgDispSksp(1,0);
    ChEyeOpenLevel(1,#1);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
