BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChOpen(1,253,0,0,2,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was wonderful!","Today's movie was so-so huh","Today's movie was a miss");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040118100_01_000");
    MsgDisp("Kazama","The story had no twists, almost to
the point it made me feel uneasy.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040118100_01_010");
    MsgDisp("Kazama","I feel the same.
That feeling of predictability 
was just so-so.");
    MsgDispSksp(1,0);
    ChEyeOpenLevel(1,#1);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040118100_01_020");
    MsgDisp("Kazama","Right.
When it's this far off the mark, 
it  now feels good.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
