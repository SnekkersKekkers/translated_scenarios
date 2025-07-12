BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChOpen(6,253,0,0,4,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was wonderful!","Today's movie was so-so","Today's movie was a miss huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(6,4);
    ChMouth(6,3);
    ChMotion(6,5);
    VoicePlay("B040618900_06_000");
    MsgDisp("Himuro","Definitely.
I don't understand why they 
suddenly broke into dance.
Really, it was wonderful.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,4);
    VoicePlay("B040618900_06_010");
    MsgDisp("Himuro","I felt that way too at first.
But, before I knew it, 
I was already into it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B040618900_06_020");
    MsgDisp("Himuro","You failed as soon as you 
came to your senses.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
