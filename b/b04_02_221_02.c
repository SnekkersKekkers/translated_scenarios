BGOpen("tr320",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
ScrFadeIn(0);
VoicePlay("B040222102_02_000");
MsgDisp("Sassa","You like the view from here don't you?");
MsgSel("Yeah, because Habataki City looks beautiful","It's only natural as a Habataki citizen!","If I can watch with ｛颯砂＊＊｝, anywhere is okay▼");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040222102_02_010");
    MsgDisp("Sassa","I think your sort of love for your
hometown is always great.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("B040222102_02_020");
    MsgDisp("Sassa","Huh? Did I press some sort of weird
switch?");
    MsgDispSksp(1,0);
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
        ChMouth(2,2);
        ChMotion(2,4);
        VoicePlay("B040222102_02_030");
        MsgDisp("Sassa","That's somehow not like you.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        VoicePlay("B040222102_02_040");
        MsgDisp("Sassa","Are you saying that seriously?");
        MsgDisp("主人公","Yeah.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040222102_02_050");
        MsgDisp("Sassa","Then, let's see as much sights as we can
together. It would be a shame if we always
went to the same places.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,3);
        VoicePlay("B040222102_02_060");
        MsgDisp("Sassa","Today will be the last time we come to
Habataki castle. We'll go to a different
place after that, then another place again
after that.");
        MsgDisp("主人公","But, even in one place, the scenery
changes depending on season and time.");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        VoicePlay("B040222102_02_070");
        MsgDisp("Sassa","I see... If we're taking in the difference
of seasons, Let's think of a \"Date
Rotations of a Year\" together.");
        ChEye(2,0);
        ChMouth(2,2);
        ChMotion(2,0);
        VoicePlay("B040222102_02_080");
        MsgDisp("Sassa","A combination and order that fulfills both
efficiency and satisfaction...");
        MsgDisp("主人公","(Ummm...｛颯砂＊＊｝, this is beginning to
look like a training program.)");
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
