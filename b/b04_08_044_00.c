BGOpen("wf400",1);
ChLayout(1);
ChOpen(8,253,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgSel("Today's event was wonderful!","Today's event was so-so","Today's event was a miss");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    ChEyeOpenLevel(8,0);
    VoicePlay("B040804400_08_000");
    MsgDisp("Shirahane","Yeah!
Today's performer is a Hane High
Alumnus. That guy is seriously amazing!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(8,0);
    ChMouth(8,4);
    ChMotion(8,0,1);
    VoicePlay("B040804400_08_010");
    MsgDisp("Shirahane","Huh?
There was a super cool band there,
did you not notice? ");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(8,2);
    ChMouth(8,4);
    ChMotion(8,2,1);
    VoicePlay("B040804400_08_020");
    MsgDisp("Shirahane","That's disappointing...
Even though that was an Alumnus from
Hane High too.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
