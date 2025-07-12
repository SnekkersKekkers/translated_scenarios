BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChOpen(1,253,0,0,3,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was wonderful!","Today's movie was so-so huh","Today's movie was a miss");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040118300_01_000");
    MsgDisp("Kazama","Yeah, it's true,
the attention to detail in the 
props and sets was amazing.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,4);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040118300_01_010");
    MsgDisp("Kazama","They spent so much on production costs
that it makes me sad to hear you 
say something like \"it's so-so\".");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(1,2);
    ChMouth(1,1);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040118300_01_020");
    MsgDisp("Kazama","You say this movie was a miss, 
what kind of bogus critic are you?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
