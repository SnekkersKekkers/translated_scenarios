BGOpen("ne340",0);
ChLayout(1);
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
SEPlay("EV_SE_763",0,0.6);
ScrFadeIn(0);
Wait(60,0);
ChEye(1,4);
ChMotion(1,3);
VoicePlay("B040117002_01_000");
MsgDisp("Kazama","Oi, 96 points is amazing you know?");
MsgSel("And for my prize?","I did it! New record!","I wonder where I got points deducted?");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,0);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040117002_01_010");
        MsgDisp("Kazama","Geez... you're getting carried away.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,2);
        ChMouth(1,3);
        ChMotion(1,0);
        VoicePlay("B040117002_01_020");
        MsgDisp("Kazama","Got it.
Then, pick something you like from the
menu");
        MsgDisp("主人公","Really∋
｛風真＊＊｝, thank you!
The sweets here are delicious, right?");
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,0);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040117002_01_030");
        MsgDisp("Kazama","Alright dear customer, order received.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT",0.01,0.5);
        ChClose(1);
        SEWait();
        SEPlay("EV_SE_761");
        SEWait();
        SEPlay("EV_SE_764",0,0.4);
        SEWait();
        VoicePlay("B040117002_01_040");
        MsgDisp("Kazama","Please give me your most popular sweet.");
        VoicePlay("B040117002_01_050");
        MsgDisp("Kazama","O-Of course. that's alright.");
        MsgDisp("主人公","Are you alright...?");
        SEPlay("EV_SE_762");
        SEWait();
        MsgClose();
        SEPlay("EV_SE_544",0.01,0.5);
        ChOpen(1,255,4,0,2,7,#1,7,0);
        MsgDisp("主人公","｛風真＊＊｝, your face is red
though...
What's wrong?");
        ChEye(1,4);
        ChMouth(1,2);
        ChMotion(1,0);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040117002_01_060");
        MsgDisp("Kazama","Apparently it's a menu item exclusive to
couples...");
        MsgDisp("主人公","Eh!");
        ChEye(1,0);
        ChMouth(1,2);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040117002_01_070");
        MsgDisp("Kazama","...Is there a problem?");
        MsgDisp("主人公","(It might be kinda embarrassing when the
employee comes...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(4);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3,1);
    VoicePlay("B040117002_01_080");
    MsgDisp("Kazama","That was great, even better than the
original song!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040117002_01_090");
    MsgDisp("Kazama","Yeah, they messed up on the judging.
If I was the judge, I'd give it full
marks!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
