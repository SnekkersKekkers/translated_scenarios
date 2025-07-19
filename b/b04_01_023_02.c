MsgClose();
ChOpen(1,255,0,0,3,#1,#1,0,0);
ChMotion(1,1);
VoicePlay("B040102302_01_000");
MsgDisp("Kazama","There are people doing business here.");
MsgSel("They're selling juice▼","Any fortune tellers?","There's someone selling portraits!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    ChCheek(1,7);
    VoicePlay("B040102302_01_010");
    MsgDisp("Kazama","...Jeez, that's a roundabout way to ask.");
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
        ChEye(1,0);
        ChMouth(1,1);
        ChMotion(1,3);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040102302_01_020");
        MsgDisp("Kazama","That's so obviously suspicious!
That kind of curiosity will get you into
trouble.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,0);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040102302_01_030");
        MsgDisp("Kazama","Girls sure do love their fortune telling.");
        MsgDisp("主人公","Look, it's for palm readings!");
        ChEye(1,0);
        ChMouth(1,2);
        ChMotion(1,1);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040102302_01_040");
        MsgDisp("Kazama","Don't you make your own future?
What do they know about you?");
        MsgDisp("主人公","Are you mad?");
        ChEye(1,1);
        ChMouth(1,1);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040102302_01_050");
        MsgDisp("Kazama","Yeah, I'm mad.");
        MsgDisp("主人公","Huh?");
        ChEye(1,0);
        ChMouth(1,1);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040102302_01_060");
        MsgDisp("Kazama","Listen, I don't like it when others just
say things like they know anything about
someone. I especially can't stand you.");
        ChEye(1,4);
        ChMouth(1,2);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        ChCheek(1,7);
        VoicePlay("B040102302_01_070");
        MsgDisp("Kazama","Here, give me your hand.");
        MsgDisp("主人公","｛風真＊＊｝, you can read palms?");
        ChEye(1,0);
        ChMouth(1,1);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040102302_01_080");
        MsgDisp("Kazama","What?
I can't read a thing.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        ChClose(1);
        MsgClose();
        ScrFadeOut(0,0);
        MsgDisp("主人公","(...Then is this just to hold hands?)");
        MsgClose();
        MsgClose();
        ChOpen(1,255,0,0,0,#1,#1,0,0,0,0);
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040102302_01_090");
    MsgDisp("Kazama","It's sort of got an evil style.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
