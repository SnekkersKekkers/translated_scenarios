BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChNanaType(#1);
ChOpen(4,253,0,0,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was the best!","Today's movie was so-so","Today's movie was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040418900_04_000");
    MsgDisp("Nanatsumori","No wonder it's a hot topic.
It was pretty mind blowing.
That dance was addictiveー...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040418900_04_010");
    MsgDisp("Nanatsumori","I get what you mean.
It's probably not a matter of reason.
i think it's about going 
along with the flow.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChMotion(4,0);
    VoicePlay("B040418900_04_020");
    MsgDisp("Nanatsumori","I see.
It might be a love-it-or-hate-it
sort of genre.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
