BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChOpen(1,253,0,0,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was wonderful!","Today's movie was so-so huh","Today's movie was a miss");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,4);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040119200_01_000");
    MsgDisp("Kazama","Featuring cat paws that much...
Well, I do think they were decisive in
that decision.");
    MsgDispSksp(1,0);
    ChEye(1,0);
    ChMotion(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040119200_01_010");
    MsgDisp("Kazama","I feel the same.
It was just the every day life of a cat.
Well, it was well-made.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040119200_01_020");
    MsgDisp("Kazama","Right. I wasn't expecting much in the
first place, so I guess this is about
right.");
    MsgDispSksp(1,0);
    ChEye(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
