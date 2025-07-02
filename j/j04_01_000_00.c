ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    break ;
    case 4:
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_A");
    ChOpen(1,254,0,0,0,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("J040100000_01_000");
    MsgDisp("Kazama","There you are.");
    MsgDisp("主人公","Ah,｛風真＊＊｝.
What's wrong?");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("J040100000_01_011");
    MsgDisp("Kazama","Are you free this Sunday?");
    MsgSel("Yeah, I'm free.","I've got some business to attend to……");
    switch (MsgSelRsltGet()){
        case 0:
        break ;
        case 1:
        ChEye(1,0);
        ChMouth(1,2);
        ChMotion(1,1);
        ChEyeOpenLevel(1,8);
        VoicePlay("J040100000_01_020");
        MsgDisp("Kazama","Oh, I see.
Then, okay.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        ChClose(1);
        MsgDisp("主人公","(This Sunday......
I wonder if he wanted something?)");
        MsgClose();
        ScrFadeOut(0,0);
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    case 5:
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_A");
    ChOpen(1,254,0,0,0,-1,-1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(1);
    VoicePlay("J040100000_01_030");
    MsgDisp("Kazama","｛主人公｝.");
    MsgDisp("主人公","Ah,｛風真＊＊｝.
What's wrong?");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("J040100000_01_041");
    MsgDisp("Kazama","Just a question.
Are you free this Sunday?");
    MsgSel("Yeah, I'm free.","I've got some business to attend to……");
    switch (MsgSelRsltGet()){
        case 0:
        break ;
        case 1:
        ChEye(1,2);
        ChMouth(1,3);
        ChMotion(1,0);
        VoicePlay("J040100000_01_050");
        MsgDisp("Kazama","Bad timing, I guess.");
        MsgDisp("主人公","Yeah, sorry.");
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,0,1);
        VoicePlay("J040100000_01_060");
        MsgDisp("Kazama","It's okay, this kind of in-betweenness,
it's just like us.
See you.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        BGMStop();
        ChClose(1);
        MsgDisp("主人公","(......I'm sorry I did that to you.)");
        MsgClose();
        ScrFadeOut(0,0);
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    default :
    DbgAssert(1);
    break ;
    }
