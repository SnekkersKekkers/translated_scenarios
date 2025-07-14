BGOpen("ne600",1);
MsgClose();
ChOpen(5,253,0,0,0,#1,#1,0,0,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgSel("Today's movie was the best!","Today's movie was so-so","Today's movie was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040519100_05_000");
    MsgDisp("Hiiragi","It's astonishing to know that it's real
footage.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0,1);
    VoicePlay("B040519100_05_010");
    MsgDisp("Hiiragi","Yes, thanks to it I was able to learn
about a world I didn't know before.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040519100_05_020");
    MsgDisp("Hiiragi","It's a documentary, so don't expect it to
be entertaining.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
