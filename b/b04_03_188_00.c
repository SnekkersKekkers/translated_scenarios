BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChOpen(3,253,0,0,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was the best!","Today's movie was so-so","Today's movie was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040318800_03_000");
    MsgDisp("Honda","Yep yep.
I felt like I was being forced to laugh.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040318800_03_010");
    MsgDisp("Honda","A so-so comedy is iffy.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,2);
    VoicePlay("B040318800_03_020");
    MsgDisp("Honda","Huh? I wonder if my sense of humour is
off..");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
