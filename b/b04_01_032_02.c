BGOpen("wf320",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040103202_01_000");
MsgDisp("Kazama","Ooh, they even have a cafe here.
It's got a special menu.");
MsgSel("Shall we take a lunch break?","Are you hungry?","Yay! Fresh Seafood Menu∋");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040103202_01_010");
    MsgDisp("Kazama","OK!
It's got a great atmosphere.");
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
        DateRateSet(1);
        ChEye(1,2);
        ChMouth(1,0);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040103202_01_020");
        MsgDisp("Kazama","Aren't you talking about yourself?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,3);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040103202_01_030");
        MsgDisp("Kazama","I don't get hungry when I look at all the
fish in the aquarium, myself.");
        MsgDisp("主人公","Jeez.");
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,0);
        VoicePlay("B040103202_01_040");
        MsgDisp("Kazama","Well, let's take a break on this bench.
I'll grab us drinks.");
        MsgDisp("主人公","Thank you, ｛風真＊＊｝.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        ChClose(1);
        SEWait();
        VoicePlay("B040103202_33_000");
        MsgDisp("?Boy","Found ya!");
        MsgDisp("主人公","(Found ya?)");
        SEPlay("EV_SE_544");
        ChOpen(33,254,0,0,0,#1,#1,0,0);
        SEWait();
        VoicePlay("B040103202_33_010");
        MsgDisp("Guy","You were hiding out here.
The beautiful sea fairy of Habataki City,
Little Miss Clione, huh?");
        MsgDisp("主人公","I-I think you're mistaken...");
        VoicePlay("B040103202_01_050");
        MsgDisp("Kazama?","Ｇｏ　ａｗａｙ!");
        SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
        SEWait();
        ChPosition(33,1);
        MsgClose();
        ChOpen(1,255,1,1,1,#1,#1,0,2,0,30);
        ChEye(33,0);
        ChMouth(33,2);
        VoicePlay("B040103202_33_020");
        MsgDisp("Guy","Go my way?");
        VoicePlay("B040103202_01_060");
        MsgDisp("Kazama","I told you to get out of here.
Or can't you hear∋");
        ChEye(33,2);
        ChMouth(33,1);
        VoicePlay("B040103202_33_030");
        MsgDisp("Guy","Eeeeep.
Going my way～!");
        MsgClose();
        SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
        ChClose(33,0,30);
        SEWait();
        ChEye(1,0);
        ChMouth(1,2);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        ChPosition(1,0);
        MsgDisp("主人公","Thank you, ｛風真＊＊｝.");
        ChEye(1,0);
        ChMouth(1,2);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040103202_01_070");
        MsgDisp("Kazama","Sheesh, I can't take my eyes off you for
an instant. You stand out way too much.
From here on, you can't stand around
alone.");
        MsgDisp("主人公","(That's not realistic, ｛風真＊＊｝...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040103202_01_080");
    MsgDisp("Kazama","Are you making a joke?
You can't read the room at all.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
