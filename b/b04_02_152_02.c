BGOpen("ne320",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,2);
ChMotion(2,4);
ScrFadeIn(0);
VoicePlay("B040215202_02_000");
MsgDisp("Sassa","Huh? What's wrong? Are you not feeling
well?");
MsgSel("It's because｛颯砂＊＊｝ is watching...","I'm the same as always!","I'll get serious from the next one!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,5);
    VoicePlay("B040215202_02_010");
    MsgDisp("Sassa","Eh?
Of course I'm watching.");
    MsgDateResultDisp();
    break ;
    case 1:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(2,0);
        ChMouth(2,2);
        ChMotion(2,4,1);
        VoicePlay("B040215202_02_020");
        MsgDisp("Sassa","I'm telling you it's different to usual
though...");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040215202_02_030");
        MsgDisp("Sassa","Is that right?
Try throwing, I'll watch from a distance.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        ChClose(2);
        MsgDisp("主人公","Yeah.
Then, here goes.");
        SEWait();
        SEPlay("EV_SE_086");
        Wait(15,1);
        SEPlay("EV_SE_087");
        SEWait();
        MsgDisp("主人公","Huh?
Once more...");
        SEPlay("EV_SE_086");
        Wait(15,1);
        SEPlay("EV_SE_087");
        SEWait();
        ChLayout(0);
        SEPlay("EV_SE_544",0,0.6);
        MsgClose();
        ChOpen(2,253,2,0,0,-1,-1,0,0);
        VoicePlay("B040215202_02_040");
        MsgDisp("Sassa","Hey, straighten your elbow.
tighten your armpits, swing your
hands vertically.");
        MsgDisp("主人公","L-like this?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040215202_02_050");
        MsgDisp("Sassa","Yeah, if you do it like that, 
it won't go off to the side.");
        MsgDisp("主人公","Understood, I'll try that.");
        MsgClose();
        ChClose(2);
        ChLayout(1);
        SEPlay("EV_SE_086");
        Wait(15,1);
        SEPlay("EV_SE_869");
        SEPlay("EV_SE_061",0.5);
        SEWait();
        MsgDisp("主人公","Yay!
It went in, ｛颯砂＊＊｝!");
        MsgClose();
        SEPlay("EV_SE_544",0,0.5);
        ChOpen(2,253,0,0,0,-1,-1,0,0);
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,3);
        VoicePlay("B040215202_02_060");
        MsgDisp("Sassa","Yeah, yeah it was perfect.
Alright, keep it up for the next one!");
        MsgDisp("主人公","(Hehe.
｛颯砂＊＊｝ taught me well )");
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
    VoicePlay("B040215202_02_070");
    MsgDisp("Sassa","Oh, I don't dislike that fighting spirit.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
