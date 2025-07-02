BGOpen("ne320",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChLayout(1);
ChSet(1,0,1);
ScrFadeIn(0);
VoicePlay("B040115202_01_000");
MsgDisp("Kazama","Oh, it's starting to look good huh?");
MsgSel("Yeah, the target looks big","Is this stance cool?","Then, let's have a serious match next!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("B040115202_01_010");
    MsgDisp("Kazama","Are you a legendary darts player?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(1,2);
        ChMouth(1,1);
        ChMotion(1,3);
        VoicePlay("B040115202_01_020");
        MsgDisp("Kazama","Hey, don't look at me.
...Geez, this is what happens when you
get too carried away.");
        ChEyeOpenLevel(1,0);
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,2);
        ChMouth(1,3);
        ChMotion(1,0,1);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040115202_01_030");
        MsgDisp("Kazama","I see it.
Hey, do your best.");
        ChEyeOpenLevel(1,0);
        Wait(8,0);
        ChEye(1,4);
        SEPlay("EV_SE_086");
        Wait(15,1);
        SEPlay("EV_SE_869");
        SEPlay("EV_SE_061",0.5);
        SEWait();
        ChEyeOpenLevel(1,0);
        Wait(8,0);
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,1);
        VoicePlay("B040115202_01_040");
        MsgDisp("Kazama","Oh, nice.");
        MsgDisp("主人公","Here goes!");
        SEPlay("EV_SE_086");
        Wait(15,1);
        SEPlay("EV_SE_869");
        SEPlay("EV_SE_061",0.5);
        SEWait();
        ChEyeOpenLevel(1,0);
        Wait(10,0);
        ChEye(1,3);
        ChMouth(1,3);
        VoicePlay("B040115202_01_050");
        MsgDisp("Kazama","Wow, you did it.");
        ChEye(1,0);
        MsgDisp("主人公","Right!");
        SEPlay("EV_SE_086");
        Wait(15,1);
        SEPlay("EV_SE_869");
        SEPlay("EV_SE_062");
        SEWait();
        ChEyeOpenLevel(1,0);
        Wait(10,0);
        ChEye(1,3);
        ChMouth(1,1);
        VoicePlay("B040115202_01_060");
        MsgDisp("Kazama","....Seriously,
wait a second.");
        ChEye(1,0);
        ChMouth(1,2);
        Wait(60,1);
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        ChClose(1);
        MsgDisp("主人公","Hehe.
Maybe I can beat ｛風真＊＊｝?");
        SEPlay("EV_SE_086");
        Wait(15,1);
        SEPlay("EV_SE_869");
        SEPlay("EV_SE_061",0.5);
        SEWait();
        VoicePlay("B040115202_01_070");
        MsgDisp("Kazama","That won't do.
I won't let you see me lose.
That is my promise.");
        SEPlay("EV_SE_086");
        Wait(15,1);
        SEPlay("EV_SE_869");
        SEPlay("EV_SE_062");
        SEWait();
        MsgDisp("主人公","(Hey, 
he really does hate to lose.)");
        MsgClose();
        ScrFadeOut(0,0);
        ChOpen(1,255,0,0,0,-1,-1,0,0,0,0);
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(4);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040115202_01_080");
    MsgDisp("Kazama","Nice.
The penalty game will be to make a 
funny face with all your might.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
