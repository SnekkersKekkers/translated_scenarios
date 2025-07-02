BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChOpen(3,253,0,0,0,-1,-1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was the best!","Today's movie was so-so","Today's movie was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChSet(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040318300_03_000");
    MsgDisp("Honda","Yep yep, the bestー!
I felt as if I had become
the main character.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("B040318300_03_010");
    MsgDisp("Honda","That's right.
I wanted to focus more on the story
rather than the 4D experience.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(3,2);
    ChMouth(3,2);
    ChMotion(3,5);
    VoicePlay("B040318300_03_020");
    MsgDisp("Honda","Eh, why?
Where was the bad part?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
