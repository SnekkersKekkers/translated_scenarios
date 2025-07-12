BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChNanaType(#1);
ChOpen(4,253,0,0,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was the best!","Today's movie was so-so","Today's movie was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0);
    VoicePlay("B040418200_04_000");
    MsgDisp("Nanatsumori","Really?
The motif was super interesting, but it
wasn't great as a horror movie.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040418200_04_010");
    MsgDisp("Nanatsumori","Right.
The motif being a closet completely 
threw me for a loop.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,0);
    VoicePlay("B040418200_04_020");
    MsgDisp("Nanatsumori","What did you dislike so much?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
