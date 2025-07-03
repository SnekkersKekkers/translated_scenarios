BGOpen("wf400",1);
ChLayout(1);
ChOpen(8,253,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
MsgSel("Today's event was wonderful!","Today's event was so-so","Today's event was a miss");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(8,3);
    ChMouth(8,0);
    ChMotion(8,3,1);
    VoicePlay("B040804500_08_000");
    MsgDisp("Shirahane","Yeah... it was super moving...
I can't believe that their chairman is
the same age as us...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(8,2);
    ChMouth(8,0);
    ChMotion(8,2,1);
    VoicePlay("B040804500_08_010");
    MsgDisp("Shirahane","That's harsh...
I thought it was pretty good.
Their chairman is the same
age as us too?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(0);
    ChEye(8,2);
    ChMouth(8,2);
    ChMotion(8,4,1);
    VoicePlay("B040804500_08_020");
    MsgDisp("Shirahane","To go so far as ta say
\"It was a miss\"... their Chairman
is the same age as us and he's 
that impressive...");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
