BGOpen("ne320",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChLayout(1);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040315202_03_000");
MsgDisp("Honda","Heeh, your form looks good.");
MsgSel("My score isn't improving though...","It's because I practiced a lot!","Enough with the flattery.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("B040315202_03_010");
    MsgDisp("Honda","Once you've got your form solid, they say
your score will follow too...
Well, I'm just saying what I've heard.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040315202_03_020");
    MsgDisp("Honda","They say\"You become good because you like
it\", it's true huh.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        ChEye(3,2);
        ChMouth(3,0);
        ChMotion(3,0,1);
        VoicePlay("B040315202_03_030");
        MsgDisp("Honda","Huh, I didn't say that?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChMouth(3,4);
        ChMouth(3,0);
        ChMotion(3,0,1);
        VoicePlay("B040315202_03_040");
        MsgDisp("Honda","Huh? that's not like you.
Be more honest.");
        MsgDisp("主人公","Hehe, yes.");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,1);
        VoicePlay("B040315202_03_050");
        MsgDisp("Honda","Yep, yep, well done.");
        ChMotion(3,1);
        VoicePlay("B040315202_03_060");
        MsgDisp("Honda","Then, I'm up next.
I'll mimic your form.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT",0.01,0.5);
        ChClose(3);
        Wait(40);
        SEWait();
        SEPlay("EV_SE_086");
        Wait(15,1);
        SEPlay("EV_SE_869");
        SEPlay("EV_SE_061",0.5);
        MsgDisp("","(*thunk*!)");
        MsgDisp("主人公","Amazing, right in the middle!");
        SEPlay("EV_SE_086");
        Wait(15,1);
        SEPlay("EV_SE_869");
        SEPlay("EV_SE_061",0.5);
        MsgDisp("","(*thunk*!)");
        SEPlay("EV_SE_086");
        Wait(15,1);
        SEPlay("EV_SE_869");
        SEPlay("EV_SE_062");
        MsgDisp("","(*thunk*!)");
        MsgDisp("主人公","Ehh, three in a row∋");
        MsgClose();
        SEPlay("EV_SE_544");
        ChOpen(3,255,5,3,3,#1,#1,0,0);
        VoicePlay("B040315202_03_100");
        MsgDisp("Honda","I think I've awoken something! It's all
thanks to you! You're really amazing. One
more time!");
        SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT",0.01,0.5);
        ChClose(3);
        SEWait();
        SEPlay("EV_SE_086");
        Wait(15,1);
        SEPlay("EV_SE_869");
        SEPlay("EV_SE_061",0.5);
        SEWait();
        MsgDisp("主人公","(Umm, when is it my turn...?)");
        MsgClose();
        ScrFadeOut(0);
        MsgClose();
        ChOpen(3,255,0,0,0,#1,#1,0,0,0,0);
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
