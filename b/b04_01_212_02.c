BGOpen("tr230",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040121202_01_000");
MsgDisp("Kazama","It's the same at Simon's, there's often a
reason for a product being popular.");
MsgSel("They even have lion oven gloves","The fox lint roller looks handy!","That sea otter coaster is kinda cute▼");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("B040121202_01_010");
    MsgDisp("Kazama","Its main is in the way.
It looks like it might burn, is that okay?");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040121202_01_020");
    MsgDisp("Kazama","Ahh. Nice. It does seem like it'll be
useful. How much is it?");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(1,0);
        ChMouth(1,1);
        ChMotion(1,1);
        ChEyeOpenLevel(1,7);
        VoicePlay("B040121202_01_030");
        MsgDisp("Kazama","Are you saying that seriously?
That sea otter seems kind of heartless.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,0);
        ChMouth(1,2);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040121202_01_040");
        MsgDisp("Kazama","Really?
He kinda looks like he'd smash any cup you
put down with his shell.");
        ChEye(1,0);
        ChMouth(1,0);
        ChMotion(1,1);
        VoicePlay("B040121202_01_050");
        MsgDisp("Kazama","Um, what about these wolf-shaped scissors?");
        MsgDisp("主人公","Waa, it's true!
It seems kinda cool.");
        ChEye(1,0);
        ChMouth(1,2);
        ChMotion(1,4);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040121202_01_060");
        MsgDisp("Kazama","No, don't look too close, actually. it's
dangerous. Yeah, dangerous. That's why
you're banned.");
        MsgDisp("主人公","Hey.. what do you mean souvenirs are
banned?");
        ChEye(1,4);
        ChMouth(1,0);
        ChMotion(1,0);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040121202_01_070");
        MsgDisp("Kazama","It's fine.
This bear eraser is just right for you.");
        MsgDisp("主人公","Come to think of it, that cute bear plush
over there, kinda looks like you?
｛風真＊＊｝.");
        ChEye(1,0);
        ChMouth(1,4);
        ChMotion(1,1);
        ChEyeOpenLevel(1,8);
        ChCheek(1,5);
        VoicePlay("B040121202_01_080");
        MsgDisp("Kazama","Cute you say...well, that's fine.");
        ChEyeOpenLevel(1,0);
        Wait(30,1);
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        ChClose(1);
        SEWait();
        VoicePlay("B040121202_01_090");
        MsgDisp("Kazama","Excuse me.
Please let me buy this bear eraser and
bear plushie over there.");
        MsgDisp("主人公","(｛風真＊＊｝, is the bear the only one
that gets special treatment?)");
        MsgClose();
        ScrFadeOut(0,0);
        ChOpen(1,255,0,0,0,#1,#1,0,0,0,0);
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
