BGOpen("wf620",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0,1);
ScrFadeIn(0);
VoicePlay("B040206302_02_000");
MsgDisp("Sassa","Somehow I really want to walk right on the
edge of the water.");
MsgSel("It'll be annoying if our shoes get wet.","Me too!","A big wave might come.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040206302_02_010");
    MsgDisp("Sassa","Will you do it barefoot, then?");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040206302_02_020");
    MsgDisp("Sassa","That's good, it's a match!");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040206302_02_030");
        MsgDisp("Sassa","Not knowing is what makes it fun.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,2);
        ChMotion(2,4);
        VoicePlay("B040206302_02_040");
        MsgDisp("Sassa","No risk no reward, right?");
        MsgDisp("主人公","I don't know if that applies to getting
soaked.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040206302_02_050");
        MsgDisp("Sassa","Today, somehow...
You sound like a mother.");
        MsgDisp("主人公","Eh?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040206302_02_060");
        MsgDisp("Sassa","I got hurt like this quite a few times
when I was a kid.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        MsgDisp("主人公","See, you really shouldn't——");
        SEPlay("EV_SE_532");
        SEWait();
        MsgClose();
        SEPlay("EV_SE_720");
        ScrQuake(2);
        MsgClose();
        ChEye(2,5);
        ChMouth(2,5);
        ChMotion(2,5);
        ChClose(2);
        MsgDisp("主人公","｛颯砂＊＊｝, are you okay∋");
        MsgClose();
        ChOpen(2,255,0,4,2,#1,#1,0,0);
        VoicePlay("B040206302_02_070");
        MsgDisp("Sassa","Y-Yeah.
That was dangerous...");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,3);
        VoicePlay("B040206302_02_080");
        MsgDisp("Sassa","Well, I'm more athletic now than when I
was a kid.
Let's go!");
        MsgClose();
        MsgClose();
        ChClose(2);
        SEPlay("EV_SE_533");
        SEWait();
        MsgDisp("主人公","(That squishing sound...?
｛颯砂＊＊｝, did your shoes get wet?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    default :
    DbgAssert(0);
    break ;
    }
