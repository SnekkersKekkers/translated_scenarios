ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,254,0,0,0,-1,-1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(1);
    VoicePlay("F010100007_01_000");
    MsgDisp("Kazama","｛主人公｝.");
    MsgDisp("主人公","Oh, ｛風真＊＊｝!");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("F010100007_01_010");
    MsgDisp("Kazama","Let's go home together.");
    MsgSel("Sure. Let's go together.","How about a cafe?","Sorry, not today.");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(1,4);
        ChMouth(1,3);
        ChMotion(1,0);
        VoicePlay("F010100007_01_060");
        MsgDisp("Kazama","OK.
Well then, let's go.");
        break ;
        case 1:
        ChEye(1,4);
        ChMouth(1,3);
        ChMotion(1,0);
        VoicePlay("F010100007_01_080");
        MsgDisp("Kazama","That works.
Let's take our time talking.");
        break ;
        case 2:
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,0);
        VoicePlay("F010100007_01_100");
        MsgDisp("Kazama","Really...
Well, another time.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        ChClose(1);
        MsgDisp("主人公","(Hmm, did I do something wrong?)");
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,254,0,0,3,-1,-1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(1);
    VoicePlay("F010100007_01_020");
    MsgDisp("Kazama","｛主人公｝.");
    MsgDisp("主人公","Huh?
｛風真＊＊｝, I thought you already left.");
    ChEye(1,4);
    ChMouth(1,4);
    ChMotion(1,4);
    ChCheek(1,5);
    VoicePlay("F010100007_01_030");
    MsgDisp("Kazama","I left class early and waited here.");
    MsgDisp("主人公","Huh?");
    ChEye(1,0);
    ChMouth(1,1);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    ChCheek(1,7);
    VoicePlay("F010100007_01_040");
    MsgDisp("Kazama","It's alright every once in a while.
This is how it would be if we were 
in different classes.");
    ChMouth(1,2);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("F010100007_01_050");
    MsgDisp("Kazama","Well, should we go home?");
    MsgSel("Sure, let's go together.","How about a cafe?","Sorry, I'm busy.");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,3);
        ChCheek(1,0);
        VoicePlay("F010100007_01_070");
        MsgDisp("Kazama","Let's go.
Should I greet you here tomorrow, too?");
        break ;
        case 1:
        ChEye(1,4);
        ChMouth(1,3);
        ChMotion(1,0);
        ChCheek(1,0);
        VoicePlay("F010100007_01_090");
        MsgDisp("Kazama","That works. 
We'll eat your favorite sweets.");
        break ;
        case 2:
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,3);
        ChCheek(1,0);
        VoicePlay("F010100007_01_110");
        MsgDisp("Kazama","R-Right.");
        MsgDisp("主人公","Mhm...");
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,0);
        ChEyeOpenLevel(1,0);
        VoicePlay("F010100007_01_120");
        MsgDisp("Kazama","I see. Maybe another time.
...Hah.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        ChClose(1);
        MsgDisp("主人公","(Hmm, did I do something wrong?)");
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    BGMStop();
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(1,-1);
ChMouthOpenLevel(1,-1);
ChCheek(1,0);
