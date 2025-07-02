BGOpen("ne210",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3,1);
ScrFadeIn(0);
VoicePlay("B040214000_02_000");
MsgDisp("Sassa","The sound you get to hear at
livehouse is somewhat different! ");
MsgSel("Haa, it was the best!","It was so-so...","The sound was so loud my ears are ringing!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040214000_02_010");
    MsgDisp("Sassa","Aah, I though that too!
It was seriously the best!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B040214000_02_020");
    MsgDisp("Sassa","Huh?
That's no good.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(0);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,5);
    VoicePlay("B040214000_02_030");
    MsgDisp("Sassa","Ehh?
This is what a band is like live.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
