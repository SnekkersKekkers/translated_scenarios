BGMPlay("BGM_PLACE_POOL",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3,1);
ScrFadeIn(0);
VoicePlay("B040211002_02_000");
MsgDisp("Sassa","It's time to take a break.");
MsgSel("Ehー, I still haven't played enough","Are you already tired?","That's right, let's buy a drink.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040211002_02_010");
    MsgDisp("Sassa","That's why we're not stopping, we're
taking a break.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        VoicePlay("B040211002_02_020");
        MsgDisp("Sassa","How could something like this tire me out?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,2);
        ChMotion(2,0);
        VoicePlay("B040211002_02_030");
        MsgDisp("Sassa","Yeah, why is that? Phew, getting tired
from something like this... Is weird for
me?");
        MsgDisp("主人公","｛颯砂＊＊｝, are you alright?
Are you not feeling well?");
        MsgClose();
        SEPlay("EV_SE_508",0,0.8);
        ChClose(2,0,30);
        ChLayout(0);
        MsgClose();
        SEStop("EV_SE_508",0.2);
        ChOpen(2,31,0,0,2,-1,-1,10,0);
        VoicePlay("B040211002_02_040");
        MsgDisp("Sassa","Oh...");
        ChEye(2,0);
        ChMouth(2,2);
        ChMotion(2,4);
        VoicePlay("B040211002_02_050");
        MsgDisp("Sassa","Y-yeah, I'm fine.
This is high altitude training.");
        MsgDisp("主人公","What?");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040211002_02_060");
        MsgDisp("Sassa","When you're standing there in your
swimsuit, it feels like I'm getting some
good training in.");
        MsgDisp("主人公","Um...");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,3);
        VoicePlay("B040211002_02_070");
        MsgDisp("Sassa","I'm  not particularly 
looking up and down.");
        MsgDisp("主人公","It's somewhat embarrassing though?");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,3);
        VoicePlay("B040211002_02_080");
        MsgDisp("Sassa","Crap, I have to cool down!");
        MsgClose();
        SEPlay("EV_SE_558");
        ChClose(2);
        SEWait();
        SEPlay("EV_SE_631",0,1);
        Wait(50,1);
        MsgDisp("主人公","(｛颯砂＊＊｝...
Diving is prohibited!)");
        SEStop("EV_SE_631",1);
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040211002_02_090");
    MsgDisp("Sassa","Yeah, I was getting dehydrated underwater.
We have to be careful.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
