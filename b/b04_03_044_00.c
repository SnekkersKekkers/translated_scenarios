BGOpen("wf400",1);
ChLayout(1);
ChOpen(3,253,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
MsgSel("Today's event was great!！","Today's event was okay.","Today's event was a letdown.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("B040304400_03_000");
    MsgDisp("Honda","Y-yeah. It's hard to put into words,
but... it was definitely a new experience.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,2);
    ChMouth(3,3);
    ChMotion(3,2);
    VoicePlay("B040304400_03_010");
    MsgDisp("Honda","Were you okay? I felt like I was about to 
be swept away.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040304400_03_020");
    MsgDisp("Honda","Hahaha, yeah. Honestly, the two of us felt
out of place.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
