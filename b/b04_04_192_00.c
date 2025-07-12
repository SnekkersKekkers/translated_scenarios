BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChNanaType(#1);
ChOpen(4,253,0,0,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was the best!","Today's movie was so-so","Today's movie was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B040419200_04_000");
    MsgDisp("Nanatsumori","That kitty was great!
It was like he really understood
how people feel, right? I was 
drawn in by his performanceー.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040419200_04_010");
    MsgDisp("Nanatsumori","That kitty acted really well.
I'll buy some merchandise.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040419200_04_020");
    MsgDisp("Nanatsumori","Do you dislike cats?
Ahh, are you a dog person?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
